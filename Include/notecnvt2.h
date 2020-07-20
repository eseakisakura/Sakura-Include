// title:        "notecnvt2.h" ver1.22 
// description:  逆読み鏡像機能付き MMLノートコンバータ (16/ 6/11)
// keywords:     SAKURA Function     Powered by 04coreworks
 
/*　　概要 


	メロディの逆読み、鏡像メロディを演奏するためのものです。
	カノン型式のオルガン曲や、十二音技法で使用できます。


	このヘッダは、mmlの移調変換、一時から相対オクターブ変換、
	mmlのリバース出力とメロディの鏡像化をサポートします。



	notecnvt2.hは、構造化エディタに対応しています。


	※ KeyとKeyFlag(調 )の機能を一部利用します。


	Includeフォルダに入れて使います。
	notecnvt2.hを、サクラ、TWのIncludeフォルダに入れて下さい。


	※ リネームが必要な場合

	拡張子"h"が、何らかのソフトにより登録されているケースにおいて、
	"notecnvt2.h.mml"とリネームされることがあります。

 	この場合、フォルダオプションの、
	"登録されている拡張子は表示しない"のチェックを一時的に外し、
	拡張子を表示するようにした後、リネームしてみて下さい。
	
　□注意点 

　エラーチェックは最低限のみです。

　できれば、コンソール出力を使い、一度テスト、
　変換結果の確認を行なうことを、おすすめします。
 
　□ 免責事項 /使用条件 /著作権など 


　・Apacheライセンス2.0を適用して下さい

　・当スクリプト群を使用して何らかの問題が起こっても、
　　責任を要求しないこと

　・再配布する際は、当ドキュメントファイルを維持して下さい


　= 黄白紅藍玄 =
　https://twitter.com/huangbaihonglan

　Copyright(C) 04coreworks
　https://github.com/eseakisakura
 
　□謝辞 


　この機能は、以下のページ様を参照しています。


　https://ja.wikipedia.org/wiki/%E5%8D%81%E4%BA%8C%E9%9F%B3%E6%8A%80%E6%B3%95
　https://www.senzoku-online.jp/synthetic_chair/lesson_05-03.html
　http://d.hatena.ne.jp/f_iryo1/20070427/1177644225
 
　□履歴 

 16 5 13	仮完成 ver.0
      14	一時オクターブ据え置き版も付帯
      15	鏡像メロディに対応した
　　　16	コードの全面修正 ver.1
		取説書いた
      18	MMLの#b時の鏡像処理追加
		r処理間違い直し
      25	A#のような#-音指定での鏡像に対応した
      30	#bは、KeyFlagを適用しないに変更
      31	演奏時のみ一時初期化とした
		rela,rev,mirror2は調を反映させないに変更
    6  2	分離とエラー修正
       4	Arr_strを再帰にした
		miror2のオクターブ間違い修正
      11	付点に対応

 20 7 19	ドキュメント直した
 
*/ 
  
/*　　取扱説明書 




	
　□各機能の説明 


　- 使い方 -

　Note_cnvt("cfga",rev,"prn")
　でコンソール出力します。

　Note_cnvt("f`g"a",rev,"run")
　では演奏のみします。
















	
　■移調変換 - Forward 


　指定された調とキーを読み込んで変換します。
　KeyFlagで調、Keyでキーを指定します

　調♭(シ){ 'gb`d' }であれば、{ 'gb-`d' }と変換します。

　Key=2 { cfg }となっていれば、{ dga }と変換します。


　key=2 Note_cnvt("cfg","prn")
 
　■相対オクターブ修正 - Relative 


　一時オクターブを相対オクターブに書き換えます。
　FMP7やppmckなどに転用する際、使用できるかと思います。

　指定は"rela"とします。
　{ c`e>g }であれば、{ c>eg }のように書き換えます


　Note_cnvt({ c`e>g },rela,"prn")
 
　■リバース出力 - Reverse 


　MMLを逆読み出力します。十二音技法でいう逆行形です。


　指定は"rev"です。
　{ ace }は、{ eca }となります。
　{ l4 d l8 fg }は、{ l8 gf l4 d }と変換します


　Note_cnvt({ l4 d l8 fg },rev,"prn")
 
　■鏡像化メロディ - Mirror 


　譜面の上向き下向きを、反転したメロディにします。
　十二音技法での、反行形となります。

　音の高さを指定することで、鏡像化します。
　中心に指定する音の表記は、"と`、#や-を含む{c-b}です。

　中心指定{a}であれば、{ ab`c }は、{ agf }

　中心が{a-}では、{ fa`c }を、{ bge }と変換します。


　また、調とキーの指定があれば、これを反映します。
　調♯(ファ)で中心{c}であれば、{ "gce }を、{ f+c"a }と変換します


　調♯(ファ) Note_cnvt({ "gce },{c},"prn")
 
　■数学的鏡像化メロディ - Mirror2 


　もし、数学的に上下を反転したいのであれば、
　中心音に{&a}と、"&"を含めて記述して下さい。

 この場合、調は反映されません。
　
　{ a`c#`e }で、中心{&`c}であれば、{ `eba }と変換します


　Note_cnvt({ a`c#`e },{&`c},"prn")
  
　□各機能の出力選択について 


　デフォルトでは、返値"result"を返します。


　■返値を返す "result" [default]


　Str TT= Note_cnvt({ cfg },rev)のみでは、返値を返します。



　■再生のみ "run"


　Note_cnvt({ cfg },rev,"run")では、演奏のみになります。



　■プリント出力 "prn"


　Note_cnvt({ cfg },rev,"prn")は、返値付きコンソール出力です。



　■デバッグ "print"


　Note_cnvt({ cfg },rev,"print")も、ありますが、
　再生も行う、返値付きコンソール出力です。
　主に、デバック用途です。


 
　□使用上の制限 
	
//　- 使用できる文字制限 - 


　a-gr^. lqvto@, 0-9 #+- "`<> ' []のなどのMML文字に対応します。
　または、これに対応するストトンも可。
　基本的に、短かめのMMLのみ扱うものだと思って下さい。

　改行のあるMMLでも動きますが、曲まるごとはできません。

　TrackKey をリバース出力で変換すると、
　yeKkcarTと出力されエラーとなるためです。
 
//　- ループの対応 - 


　ループなどの繰り返しによる、オクターブ変化は、
　完全には対応できていません。相対位置の割り出しが意外と難しいためです。

　実際に聞いて確認する、ないしはコンソール出力からの修正が必要となります。
 
//　- メロディ鏡像化におけるキーと調の適用順について - 


　鏡像化では、まずメロディの反転を行った後に、
　キーと調を適用します。調性世界のなかに、納めるためです。
 
//　- 調とキーの影響について - 


　調とキーの値を読むのは、移調と鏡像化のときです。

　#やbを含めずに、記入する必要があります。
　{ df#a } -> 調♯(f){ dfa }



　数学的鏡像化メロディにおいては、
　再生時における、KeyFlagの影響を防ぐため、

　あらかじめ、調を適用したメロディを用意する必要があります。
　調♯(f){ dfa } -> 調♯(){ df#a }{&a}
 
//　- 連続変換する際の注意事項 - 


　まるごと変換する際には、
　最後の出力が、調の値を参照するもの、

　移調変換ないし鏡像化になるように行なったほうが安全です。


　例えば以下のように指定します。

　Include(notecnvt2.h);

　#TT={ cfga }

　Key=2; 調♭(シ)

　Str TT= Note_cnvt(#TT,rev)		// リバース出力を先に

　        //Note_cnvt(TT,,"run") 	// 移調の場合　 | 逆行形
　        Note_cnvt(TT,{a},"run") 	// 鏡像化 	| 逆反行形


　上記、逆反行形を説明すると、

　"rev"指定により、逆読み出力した後、
　メロディ{ cfga }を{a}を中心として鏡像化し、

　調♭(シ)の指定を読込み、シがあれば♭シと変更、
　Key=2によって、全体を移調変換のち演奏する。

　という変換を行ったことになります。


　ワンライナーの場合は、以下のようになります。

　Include(notecnvt2.h);
　#TT={ cfga }

　Key=2; 調♭(シ)

　//Note_cnvt(Note_cnvt(#TT,rev),,"run")	// 移調の場合　 | 逆行形
　Note_cnvt(Note_cnvt(#TT,rev),{a},"run")	// 鏡像化 	| 逆反行形
  
*/ 
  
/*　　クイックリファレンス 
	 
　□早見表 

　Note_cnvt([{ ストトン|MML }],[ rela | rev | {(&)c-b} ],[ run | prn | print ])
 
　□各機能の記述例 






















	
　■移調変換 - (fwd) 

　Include(notecnvt2.h);
　Key=2; 調♯(ファ)

　Note_cnvt({ cfga },,"prn")

　Print: dg+ab // f -> g+
 
　■一時、相対オクターブ変換 - rela 

　Include(notecnvt2.h);
　Note_cnvt({ >c>f'`g"a' },rela,"prn")

　Print: >c>f'>g<<a'<
 
　■リバース出力 - rev 

　Include(notecnvt2.h);
　Note_cnvt({ [f2>g8"a4,100] },rev,"prn")

　Print: [ "a4,100g8<f2]
 
　■鏡像化メロディ - {a-~g#} 

　Include(notecnvt2.h);
　Key=2; 調♯(ファ)
　Note_cnvt({ <efga> },{"g},"prn")

　Print: d-"b"a"g+
 
　■数学的鏡像化メロディ - {&a-~&g#} 

　Include(notecnvt2.h);
　Note_cnvt({ <efga> },{&"g},"prn")

　Print: "b-"a"g"f

  
　□基本雛型 


　Include(gs.h) ResetGS()r4
　Include(notecnvt2.h);

　#SS= { "a"b cde fga }

　Note_cnvt(#SS,rela,"prn")	// 一時、相対oct変換

　Note_cnvt(#SS,rev,"prn")	// リバース

　Str TT;

　Key=2
　TT= Note_cnvt(#SS)	// 移調
　Print(TT)

　Key=0 調♯(ファ)
　TT= Note_cnvt(#SS)	// 移調
　Print(TT)

　Key=0 調♯()
　TT= Note_cnvt(#SS,{e})	// 鏡像化
　Print(TT)

　TT= Note_cnvt(#SS,{&e})	// 数学的鏡像化
　Print(TT)
 
*/ 
  
// 　以下、プログラム部 



 
Function Oct_add(Int Num,Str SS,Str LL){ 

	Str TT; Str XX; Int i=0

	If(Num<0){ XX=SS; i= -Num }
	If(Num>0){ XX=LL; i= Num }

	While(1){
		If(i<=0){ Exit; }
		TT= TT+ XX
		i--
	} //
	Result= TT;
} //func

 
Function Arr_str(Str ZZ,Int i,Array RR){ // 再帰 

	If(i<=0){ Result= RR(i)+ ZZ; }
	Else{
		Result= Arr_str(","+ RR(i)+ ZZ,i-1,RR)
	}
} //func

	
/*Function Arr_str(Array RR){ 

	Str ZZ;

	Int Size= SizeOf(RR)
	For(Int i=0;i<Size;i++){

		If(i!=0){ ZZ= ZZ+ "," }
		ZZ= ZZ+ RR(i);
	} //
	Result= ZZ;
} //func

*/
  
Function Note_cnvt(Str Junban,Str Cnv,Str Prn){ 

	If(Cnv==""){ Cnv="fwd" }

	Int j; Int Num=0; Int Sf=-10; Str XX;
	Int Size= SizeOf(Cnv)+1

	Switch(Cnv){
		Case("fwd"){ Result= Fwd_cnvt(Junban,Prn) }
		Case("rev"){ Result= Rev_cnvt(Junban,Prn) }
		Case("rela"){ Result= Rela_cnvt(Junban,Prn) }
		Default{

			For(Int i=1; i< Size; i++){
				XX= MID(Cnv,i,1) // i=1~

				Switch(XX){

					Case(" "){}
					Case("&"){ Sf=12 }
					Case(CHR(34)){ Num-- }
					Case("`"){ Num++ }

					Case("#"){ j++ }
					Case("+"){ j++ }
					Case("-"){ j-- }
					Case("c"){ j= 0 }
					Case("d"){ j= 2 }
					Case("e"){ j= 4 }
					Case("f"){ j= 5 }
					Case("g"){ j= 7 }
					Case("a"){ j= 9 }
					Case("b"){ j= 11 }
					Default{ Print({"指定が謎"}) End; }
				} //sw
			} //

			If(Sf==12){

				j= Num*12+ j
				Result= Mirror2_cnvt(Junban,Prn,j)
			}Else{

				If(j%12<0){

					Num= Num+ j/12-1
					j= j%12+12
				}Else{

					Num= Num+ j/12
					j= j%12
				}

				Switch(j){
					Case(0){ j=0; Sf=0  }
					Case(1){ j=1; Sf=-1 }
					Case(2){ j=1; Sf=0  }
					Case(3){ j=2; Sf=-1 }
					Case(4){ j=2; Sf=0  }
					Case(5){ j=3; Sf=0  }
					Case(6){ j=4; Sf=-1 }
					Case(7){ j=4; Sf=0  }
					Case(8){ j=5; Sf=-1 }
					Case(9){ j=5; Sf=0  }
					Case(10){ j=6; Sf=-1 }
					Case(11){ j=6; Sf=0  }
					Default{ Print({"coding err - Note_cnvt"}) }
				} //sw

				j= Num*7+ j
				Result= Mirror_cnvt(Junban,Prn,j,Sf)

			}
		}
	} //sw

} //func
 
Function Fwd_cnvt(Str Junban,Str Prn){ 


	Junban= Junban+ "Z";

	Int SW=0; Str XX; Str Val; Str TT;
	Str Loop; Int Num=0

	Int Odr=-1; Int j; Int Ab; Array RR;
	Array Note_num= (0,2,4, 5,7,9,11);

	Array Note_arg= ("c","d-","d","e-","e", "f","f+","g","g+","a","b-","b");
	Array Cmd_arg= ("l","q","v","t","o","@","r");

	Int K_key= Key
	Array K_flag= KeyFlag
	Array Key_flag= (K_flag(2),K_flag(3),K_flag(4), K_flag(5),K_flag(6),K_flag(0),K_flag(1) )


	Int Size= SizeOf(Junban)+1
	For(Int i=1; i< Size; i++){
		XX= MID(Junban,i,1) // i=1~

		If(SW==12){

			Ab= Note_num(j)+ Key_flag(j)+ K_key
			SW=10
		}
		If(SW==10){

			Switch(XX){
				Case(" "){}
				Case("#"){ Ab++ }
				Case("+"){ Ab++ }
				Case("-"){ Ab-- }
				Default{
					While(1){
						If(Ab=>0&Ab<12){ Exit; }

						If(Ab<0){   Num--; Ab= Ab+12 }
						If(Ab=>12){ Num++; Ab= Ab-12 }
					} //

					SW=4
				}
			} //sw
		}
		If(SW==4){

			Switch(XX){
				Case(" "){}
				Case(","){ If(Odr==-1|Odr==5){ RR=(RR,Val); Val="" } }
				Case("^"){ If(Odr==-1|Odr==0|Odr==6){ Val= Val+ XX } }
				Case("."){ If(Odr==-1|Odr==0|Odr==6){ Val= Val+ XX } }
				Case("+"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } } // 以外
				Case("-"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } }
				Case("0"){ Val= Val+ XX }
				Case("1"){ Val= Val+ XX }
				Case("2"){ Val= Val+ XX }
				Case("3"){ Val= Val+ XX }
				Case("4"){ Val= Val+ XX }
				Case("5"){ Val= Val+ XX }
				Case("6"){ Val= Val+ XX }
				Case("7"){ Val= Val+ XX }
				Case("8"){ Val= Val+ XX }
				Case("9"){ Val= Val+ XX }
				Default{
					RR=(RR,Val); Val="";

					Switch(Odr){
						Case(6){
							TT= TT+ Cmd_arg(Odr)+ Arr_str("",SizeOf(RR)-1,RR)
							Odr=-1
						} // r
						Case(-2){
							Loop= Arr_str("",SizeOf(RR)-1,RR)
							TT= TT+ Loop+ " "
							Odr=-1
						} // []
						Case(-1){
							TT= TT+ Oct_add(Num,CHR(34),"`")+ Note_arg(Ab)+ Arr_str("",SizeOf(RR)-1,RR)
							Num=0
						} // ab
						Default{
							TT= TT+ Cmd_arg(Odr)+ Arr_str("",SizeOf(RR)-1,RR)
							Odr=-1
						} // lq
					} //sw
					RR=(); SW=0
				}
			} //sw
		}
		If(SW==0){

			Switch(XX){
				Case("Z"){ Exit; }
				Case("["){ TT= TT+ XX; Odr=-2; SW=4 }
				Case("]"){ TT= TT+ XX }
				Case(">"){ TT= TT+ XX }
				Case("<"){ TT= TT+ XX }
				Case("`"){ Num++ }
				Case(CHR(34)){ Num-- } // ["]

				Case("l"){ Odr=0; SW=4 }
				Case("q"){ Odr=1; SW=4 }
				Case("v"){ Odr=2; SW=4 }
				Case("t"){ Odr=3; SW=4 }
				Case("o"){ Odr=4; SW=4 }
				Case("@"){ Odr=5; SW=4 }
				Case("r"){ Odr=6; SW=4 }

				Case("c"){ j=0; SW=12 }
				Case("d"){ j=1; SW=12 }
				Case("e"){ j=2; SW=12 }
				Case("f"){ j=3; SW=12 }
				Case("g"){ j=4; SW=12 }
				Case("a"){ j=5; SW=12 }
				Case("b"){ j=6; SW=12 }
				Default{ TT= TT+ XX }
			} //sw
		}
	} //

	KeyFlag=(); Key=0;

	Switch(Prn){
		Case("run"){ TT; }
		Case("prn"){ Print(TT) Result= TT; }
		Case("print"){ Print(TT) Result= TT; TT; }
		Default{ Result= TT; }
	} //sw

	KeyFlag=(K_flag); Key= K_key
} //func

 
Function Rela_cnvt(Str Junban,Str Prn){ 


	Junban= Junban+ "Z";

	Int SW=0; Str XX; Str Val; Str TT;
	Str Loop; Int Num=0; Int Oct=0; Int Ocv=0; // Ocv:VirtualOct

	Int Odr=-1; Int j; Int Ab; Array RR;
	Array Note_num= (0,2,4, 5,7,9,11);

	Array Note_arg= ("c","d-","d","e-","e", "f","f+","g","g+","a","b-","b");
	Array Cmd_arg= ("l","q","v","t","o","@","r");


	Int Size= SizeOf(Junban)+1
	For(Int i=1; i< Size; i++){
		XX= MID(Junban,i,1) // i=1~

		If(SW==12){

			Ab= Note_num(j)
			SW=10
		}
		If(SW==10){

			Switch(XX){
				Case(" "){}
				Case("#"){ Ab++ }
				Case("+"){ Ab++ }
				Case("-"){ Ab-- }
				Default{
					While(1){
						If(Ab=>0&Ab<12){ Exit; }

						If(Ab<0){   Num--; Ab= Ab+12 }
						If(Ab=>12){ Num++; Ab= Ab-12 }
					} //

					Num= Num+Oct-Ocv; Ocv= Ocv+ Num
					//Print(""+ Num+ " "+ Oct+ " "+ Ocv) //debug
					SW=4
				}
			} //sw
		}
		If(SW==4){

			Switch(XX){
				Case(" "){}
				Case(","){ If(Odr==-1|Odr==5){ RR=(RR,Val); Val="" } }
				Case("^"){ If(Odr==-1|Odr==0|Odr==6){ Val= Val+ XX } }
				Case("."){ If(Odr==-1|Odr==0|Odr==6){ Val= Val+ XX } }
				Case("+"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } } // 以外
				Case("-"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } }
				Case("0"){ Val= Val+ XX }
				Case("1"){ Val= Val+ XX }
				Case("2"){ Val= Val+ XX }
				Case("3"){ Val= Val+ XX }
				Case("4"){ Val= Val+ XX }
				Case("5"){ Val= Val+ XX }
				Case("6"){ Val= Val+ XX }
				Case("7"){ Val= Val+ XX }
				Case("8"){ Val= Val+ XX }
				Case("9"){ Val= Val+ XX }
				Default{
					RR=(RR,Val); Val="";

					Switch(Odr){
						Case(6){
							TT= TT+ Cmd_arg(Odr)+ Arr_str("",SizeOf(RR)-1,RR)
							Odr=-1
						} // r
						Case(-2){
							Loop= Arr_str("",SizeOf(RR)-1,RR)
							TT= TT+ Loop+ " "
							Odr=-1
						} // []
						Case(-1){
							TT= TT+ Oct_add(Num,"<",">")+ Note_arg(Ab)+ Arr_str("",SizeOf(RR)-1,RR)
							Num=0
						} // ab
						Default{
							TT= TT+ Cmd_arg(Odr)+ Arr_str("",SizeOf(RR)-1,RR)
							Odr=-1
						} // lq
					} //sw
					RR=(); SW=0
				}
			} //sw
		}
		If(SW==0){

			Switch(XX){
				Case("Z"){ Exit; }
				Case("["){ TT= TT+ XX; Odr=-2; SW=4 }
				Case("]"){ TT= TT+ XX }
				Case(">"){ Oct++ }
				Case("<"){ Oct-- }
				Case("`"){ Num++ }
				Case(CHR(34)){ Num-- } // ["]

				Case("l"){ Odr=0; SW=4 }
				Case("q"){ Odr=1; SW=4 }
				Case("v"){ Odr=2; SW=4 }
				Case("t"){ Odr=3; SW=4 }
				Case("o"){ Odr=4; SW=4 }
				Case("@"){ Odr=5; SW=4 }
				Case("r"){ Odr=6; SW=4 }

				Case("c"){ j=0; SW=12 }
				Case("d"){ j=1; SW=12 }
				Case("e"){ j=2; SW=12 }
				Case("f"){ j=3; SW=12 }
				Case("g"){ j=4; SW=12 }
				Case("a"){ j=5; SW=12 }
				Case("b"){ j=6; SW=12 }
				Default{ TT= TT+ XX }
			} //sw
		}
	} //

	TT= TT+  Oct_add(-Ocv,"<",">")

	Switch(Prn){
		Case("run"){ TT; }
		Case("prn"){ Print(TT) Result= TT; }
		Case("print"){ Print(TT) Result= TT; TT; }
		Default{ Result= TT; }
	} //sw

} //func

 
Function Rev_cnvt(Str Junban,Str Prn){ 


	Junban= Junban+ "Z";

	Int SW=0; Str XX; Str Val; Str TT;
	Str Loop; Int Num=0;

	Int Odr=-1; Int j; Int Ab; Array RR;
	Array Note_num= (0,2,4, 5,7,9,11);

	Array Note_arg= ("c","d-","d","e-","e", "f","f+","g","g+","a","b-","b");
	Array Cmd_arg= ("l","q","v","t","o","@","r");
	Array Stuck= ("","","","","","","");

	Switch(Cnv){
		Case("rev"){}
	} //sw


	Int Size= SizeOf(Junban)+1
	For(Int i=1; i< Size; i++){
		XX= MID(Junban,i,1) // i=1~

		If(SW==12){

			Ab= Note_num(j)
			SW=10
		}
		If(SW==10){

			Switch(XX){
				Case(" "){}
				Case("#"){ Ab++ }
				Case("+"){ Ab++ }
				Case("-"){ Ab-- }
				Default{
					While(1){
						If(Ab=>0&Ab<12){ Exit; }

						If(Ab<0){   Num--; Ab= Ab+12 }
						If(Ab=>12){ Num++; Ab= Ab-12 }
					} //

					SW=4
				}
			} //sw
		}
		If(SW==4){

			Switch(XX){
				Case(" "){}
				Case(","){ If(Odr==-1|Odr==5){ RR=(RR,Val); Val="" } }
				Case("^"){ If(Odr==-1|Odr==0|Odr==6){ Val= Val+ XX } }
				Case("."){ If(Odr==-1|Odr==0|Odr==6){ Val= Val+ XX } }
				Case("+"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } } // 以外
				Case("-"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } }
				Case("0"){ Val= Val+ XX }
				Case("1"){ Val= Val+ XX }
				Case("2"){ Val= Val+ XX }
				Case("3"){ Val= Val+ XX }
				Case("4"){ Val= Val+ XX }
				Case("5"){ Val= Val+ XX }
				Case("6"){ Val= Val+ XX }
				Case("7"){ Val= Val+ XX }
				Case("8"){ Val= Val+ XX }
				Case("9"){ Val= Val+ XX }
				Default{
					RR=(RR,Val); Val="";

					Switch(Odr){
						Case(6){
							TT= Cmd_arg(Odr)+ Arr_str("",SizeOf(RR)-1,RR)+ TT
							Odr=-1
						} // r
						Case(-2){
							Loop= Arr_str("",SizeOf(RR)-1,RR)
							Odr=-1
						} // []
						Case(-1){
							TT= Oct_add(Num,CHR(34),"`")+ Note_arg(Ab)+ Arr_str("",SizeOf(RR)-1,RR)+ TT
							Num=0
						} // ab

						Default{
							TT= Stuck(Odr)+ TT; Stuck(Odr)= Cmd_arg(Odr)+ Arr_str("",SizeOf(RR)-1,RR)
							Odr=-1
						} // lq
					} //sw
					RR=(); SW=0
				}
			} //sw
		}
		If(SW==0){

			Switch(XX){
				Case("Z"){ Exit; }
				Case("["){ TT= "]"+ TT; Odr=-2; SW=4 }
				Case("]"){ TT= "["+ Loop+ " "+ TT }
				Case(">"){ TT= "<"+ TT }
				Case("<"){ TT= ">"+ TT }
				Case("`"){ Num++ }
				Case(CHR(34)){ Num-- } // ["]

				Case("l"){ Odr=0; SW=4 }
				Case("q"){ Odr=1; SW=4 }
				Case("v"){ Odr=2; SW=4 }
				Case("t"){ Odr=3; SW=4 }
				Case("o"){ Odr=4; SW=4 }
				Case("@"){ Odr=5; SW=4 }
				Case("r"){ Odr=6; SW=4 }

				Case("c"){ j=0; SW=12 }
				Case("d"){ j=1; SW=12 }
				Case("e"){ j=2; SW=12 }
				Case("f"){ j=3; SW=12 }
				Case("g"){ j=4; SW=12 }
				Case("a"){ j=5; SW=12 }
				Case("b"){ j=6; SW=12 }
				Default{ TT= XX+ TT }
			} //sw
		}
	} //

	TT= Stuck(5)+ TT;
	TT= Stuck(4)+ TT;
	TT= Stuck(3)+ TT;
	TT= Stuck(2)+ TT;
	TT= Stuck(1)+ TT;
	TT= Stuck(0)+ TT;

	Switch(Prn){
		Case("run"){ TT; }
		Case("prn"){ Print(TT) Result= TT; }
		Case("print"){ Print(TT) Result= TT; TT; }
		Default{ Result= TT; }
	} //sw
} //func

 
Function Mirror_cnvt(Str Junban,Str Prn,Int Stock,Int Sf){ 


	Junban= Junban+ "Z";

	Int SW=0; Str XX; Str Val; Str TT;
	Str Loop; Int Num=0; Int Oct=0

	Int Odr=-1; Int j; Int Ab; Array RR;
	Array Note_num= (0,2,4, 5,7,9,11);

	Array Note_arg= ("c","d-","d","e-","e", "f","f+","g","g+","a","b-","b");
	Array Cmd_arg= ("l","q","v","t","o","@","r");

	Int K_key= Key
	Array K_flag= KeyFlag
	Array Key_flag= (K_flag(2),K_flag(3),K_flag(4), K_flag(5),K_flag(6),K_flag(0),K_flag(1) )

	Int Size= SizeOf(Junban)+1
	For(Int i=1; i< Size; i++){
		XX= MID(Junban,i,1) // i=1~

		If(SW==12){

			j= j+ (Oct+ Num) *7
			j= Stock-(j-Stock)+ Sf // j=-1 < j=7 | Stock=3

			If(j%7<0){
				Num= j/7-1 // Num=-1 < j=-1
				j= j%7+7 // j=6 < j=-1

			}Else{
				Num= j/7
				j= j%7
			}

			Ab= Note_num(j)+ Key_flag(j)+ K_key
			SW=10
		}
		If(SW==10){

			Switch(XX){
				Case(" "){}
				Case("#"){ Print({"鏡像化で#+-は不可"}) End; }
				Case("+"){ Print({"鏡像化で#+-は不可"}) End; }
				Case("-"){ Print({"鏡像化で#+-は不可"}) End; }
				Default{

					While(1){
						If(Ab=>0&Ab<12){ Exit; }

						If(Ab<0){   Num--; Ab= Ab+12 }
						If(Ab=>12){ Num++; Ab= Ab-12 }
					} //

					SW=4
				}
			} //sw
		}
		If(SW==4){

			Switch(XX){
				Case(" "){}
				Case(","){ If(Odr==-1|Odr==5){ RR=(RR,Val); Val="" } }
				Case("^"){ If(Odr==-1|Odr==0|Odr==6){ Val= Val+ XX } }
				Case("."){ If(Odr==-1|Odr==0|Odr==6){ Val= Val+ XX } }
				Case("+"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } } // 以外
				Case("-"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } }
				Case("0"){ Val= Val+ XX }
				Case("1"){ Val= Val+ XX }
				Case("2"){ Val= Val+ XX }
				Case("3"){ Val= Val+ XX }
				Case("4"){ Val= Val+ XX }
				Case("5"){ Val= Val+ XX }
				Case("6"){ Val= Val+ XX }
				Case("7"){ Val= Val+ XX }
				Case("8"){ Val= Val+ XX }
				Case("9"){ Val= Val+ XX }
				Default{
					RR=(RR,Val); Val="";

					Switch(Odr){
						Case(6){
							TT= TT+ Cmd_arg(Odr)+ Arr_str("",SizeOf(RR)-1,RR)
							Odr=-1
						} // r
						Case(-2){
							Loop= Arr_str("",SizeOf(RR)-1,RR)
							TT= TT+ Loop+ " "
							Odr=-1
						} // []
						Case(-1){
							TT= TT+ Oct_add(Num,CHR(34),"`")+ Note_arg(Ab)+ Arr_str("",SizeOf(RR)-1,RR)
							Num=0
						} // ab
						Default{
							TT= TT+ Cmd_arg(Odr)+ Arr_str("",SizeOf(RR)-1,RR)
							Odr=-1
						} // lq
					} //sw
					RR=(); SW=0
				}
			} //sw
		}
		If(SW==0){

			Switch(XX){
				Case("Z"){ Exit; }
				Case("["){ TT= TT+ XX; Odr=-2; SW=4 }
				Case("]"){ TT= TT+ XX }
				Case(">"){ Oct++ }
				Case("<"){ Oct-- }
				Case("`"){ Num++ }
				Case(CHR(34)){ Num-- } // ["]

				Case("l"){ Odr=0; SW=4 }
				Case("q"){ Odr=1; SW=4 }
				Case("v"){ Odr=2; SW=4 }
				Case("t"){ Odr=3; SW=4 }
				Case("o"){ Odr=4; SW=4 }
				Case("@"){ Odr=5; SW=4 }
				Case("r"){ Odr=6; SW=4 }

				Case("c"){ j=0; SW=12 }
				Case("d"){ j=1; SW=12 }
				Case("e"){ j=2; SW=12 }
				Case("f"){ j=3; SW=12 }
				Case("g"){ j=4; SW=12 }
				Case("a"){ j=5; SW=12 }
				Case("b"){ j=6; SW=12 }
				Default{ TT= TT+ XX }
			} //sw
		}
	} //

	KeyFlag=(); Key=0;

	Switch(Prn){
		Case("run"){ TT; }
		Case("prn"){ Print(TT) Result= TT; }
		Case("print"){ Print(TT) Result= TT; TT; }
		Default{ Result= TT; }
	} //sw

	KeyFlag=(K_flag); Key= K_key

} //func

 
Function Mirror2_cnvt(Str Junban,Str Prn,Int Stock){ 


	Junban= Junban+ "Z";

	Int SW=0; Str XX; Str Val; Str TT;
	Str Loop; Int Num=0; Int Oct=0

	Int Odr=-1; Int j; Int Ab; Array RR;
	Array Note_num= (0,2,4, 5,7,9,11);

	Array Note_arg= ("c","d-","d","e-","e", "f","f+","g","g+","a","b-","b");
	Array Cmd_arg= ("l","q","v","t","o","@","r");


	Int Size= SizeOf(Junban)+1
	For(Int i=1; i< Size; i++){
		XX= MID(Junban,i,1) // i=1~

		If(SW==12){

			Ab= Note_num(j)
			SW=10
		}
		If(SW==10){

			Switch(XX){
				Case(" "){}
				Case("#"){ Ab++ }
				Case("+"){ Ab++ }
				Case("-"){ Ab-- }
				Default{

					Ab= Ab+ (Oct+ Num) *12
					Ab= Stock-(Ab-Stock)

					If(j%12<0){
						Num= j/12-1
						j= j%12+12

					}Else{
						Num= j/12
						j= j%12
					}

					While(1){
						If(Ab=>0&Ab<12){ Exit; }

						If(Ab<0){   Num--; Ab= Ab+12 }
						If(Ab=>12){ Num++; Ab= Ab-12 }
					} //

					SW=4
				}
			} //sw
		}
		If(SW==4){

			Switch(XX){
				Case(" "){}
				Case(","){ If(Odr==-1|Odr==5){ RR=(RR,Val); Val="" } }
				Case("^"){ If(Odr==-1|Odr==0|Odr==6){ Val= Val+ XX } }
				Case("."){ If(Odr==-1|Odr==0|Odr==6){ Val= Val+ XX } }
				Case("+"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } } // 以外
				Case("-"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } }
				Case("0"){ Val= Val+ XX }
				Case("1"){ Val= Val+ XX }
				Case("2"){ Val= Val+ XX }
				Case("3"){ Val= Val+ XX }
				Case("4"){ Val= Val+ XX }
				Case("5"){ Val= Val+ XX }
				Case("6"){ Val= Val+ XX }
				Case("7"){ Val= Val+ XX }
				Case("8"){ Val= Val+ XX }
				Case("9"){ Val= Val+ XX }
				Default{
					RR=(RR,Val); Val="";

					Switch(Odr){
						Case(6){
							TT= TT+ Cmd_arg(Odr)+ Arr_str("",SizeOf(RR)-1,RR)
							Odr=-1
						} // r
						Case(-2){
							Loop= Arr_str("",SizeOf(RR)-1,RR)
							TT= TT+ Loop+ " "
							Odr=-1
						} // []
						Case(-1){
							TT= TT+ Oct_add(Num,CHR(34),"`")+ Note_arg(Ab)+ Arr_str("",SizeOf(RR)-1,RR)
							Num=0
						} // ab
						Default{
							TT= TT+ Cmd_arg(Odr)+ Arr_str("",SizeOf(RR)-1,RR)
							Odr=-1
						} // lq
					} //sw
					RR=(); SW=0
				}
			} //sw
		}
		If(SW==0){

			Switch(XX){
				Case("Z"){ Exit; }
				Case("["){ TT= TT+ XX; Odr=-2; SW=4 }
				Case("]"){ TT= TT+ XX }
				Case(">"){ Oct++ }
				Case("<"){ Oct-- }
				Case("`"){ Num++ }
				Case(CHR(34)){ Num-- } // ["]

				Case("l"){ Odr=0; SW=4 }
				Case("q"){ Odr=1; SW=4 }
				Case("v"){ Odr=2; SW=4 }
				Case("t"){ Odr=3; SW=4 }
				Case("o"){ Odr=4; SW=4 }
				Case("@"){ Odr=5; SW=4 }
				Case("r"){ Odr=6; SW=4 }

				Case("c"){ j=0; SW=12 }
				Case("d"){ j=1; SW=12 }
				Case("e"){ j=2; SW=12 }
				Case("f"){ j=3; SW=12 }
				Case("g"){ j=4; SW=12 }
				Case("a"){ j=5; SW=12 }
				Case("b"){ j=6; SW=12 }
				Default{ TT= TT+ XX }
			} //sw
		}
	} //

	Switch(Prn){
		Case("run"){ TT; }
		Case("prn"){ Print(TT) Result= TT; }
		Case("print"){ Print(TT) Result= TT; TT; }
		Default{ Result= TT; }
	} //sw

} //func

 
//　以上プログラム部、終わり 
 
/* 

//Key=2 調♭(ラ)
//Note_cnvt({ l6 `a#4,100 l8 >@3[4 'a>ce'] l12 <"a>>a },rev)



	見つかってしまった..
	プログラム化のゲラです、
	てか閃いた的な、記録メモだったり。



	- 移調変換か鏡像化を、最後にする理由 -


	サクラのKeyFlag仕様では、調♯(ド)のとき、
	c が c+, c+ は dとして再生するため、
	混乱しやすい。

	これを避けるため、移調変換と鏡像化では、再生時、
	一時的に調やキーの指定を解除する。
	そのため、この影響を受けづらい。



	- 鏡像について -


	配列の添字にマイナス値はないのですが、
	RR( 2)=`c
	RR( 1)= b
	RR( 0)= a
	RR(-1)= g
	RR(-2)= f

	上行であれば、RR(0) -> RR(2)なので、

	これを鏡像化すると、
	RR(0) -> RR(-2)であれば完了します。

	中心音がa#やa-では、それぞれ一音上下します。



	- 相対オクターブ修正について -


	これがすべてなのですが、
	Num= Num+Oct-Ocv; Ocv= Ocv+ Num

	Ocvは、相対値と一時値の仮想オクターブの記録です。
	Octは、相対値の記録で、
	Numは一時値の記録です。

	Numは、相対オクターブの個数出力で再利用したり。



	- リバース出力について -


	基本的には、読み込んだ値をそのまま、
	前に足しただけです。

	コツは<>を><と反転することぐらい

	lの値とかはまず、スタック後
	lがもう一度来たら、スタック値を返して前に足すとか


	下側のふたつは 配列仕様の部分で直しがあったり、主に見た目、

	その上は j%7<0に気付くのに、時間がかかったりしています。
	 j<0で、c=0がc=7となってしまっていた。

*/


 	
