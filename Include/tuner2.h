// title:        "tuner2.h" ver1.23 
// description:  古典調律機能付きスケールチューニングファイル (16/ 6/ 8)
// keywords:     SAKURA Function     Powered by 04coreworks
 
/*　　概要 


	スケールチューニングを変更するヘッダです。
	古典調律の再現、マスターチューニングを変更するとき使用します。


	調律の計算は、以下のとおり行いました。
	https://eseakisakura.wordpress.com/2016/02/27/kotenn/



	tuner2.hは、構造化エディタに対応しています。

	※ GSリセットが必要となります。
	※ 調律が-50.00,50.00 cent外になる場合、CoarseTune使用します。


	Includeフォルダに入れて使います。
	tuner2.hを、サクラ、TWのIncludeフォルダに入れて下さい。


	※ リネームが必要な場合

	拡張子"h"が、何らかのソフトにより登録されているケースにおいて、
	"tuner2.h.mml"とリネームされることがあります。

 	この場合、フォルダオプションの、
	"登録されている拡張子は表示しない"のチェックを一時的に外し、
	拡張子を表示するようにした後、リネームしてみて下さい。
	
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


　古典調律については、以下のページ様を参考にしています。

　http://voce.main.jp/MameChisiki/Tyouritu.htm
　http://homepage1.nifty.com/musica/enharmonic.htm
　http://www.fugue.us/Pitch.html
　http://kazuo23.real-sound.net/sub1.htm
 
　□履歴 

16 3 20		ドラムトラック指定を追加した
   4  1		Cent_tuneを50cent+-に修正
		Tuningの対周波数の部分を書き直し
		純正律のaug4を選択できるようにした
      2		調律略名呼出しとした
      7		取説記載 ver.1.11 upload
   5 17		取説書き直し、コードの整形
     23		TuningでJsとのバッティングがあったため、
		Tuningを、Total_tuneとした。
		Jsではなく、Js_tuneと変更した
     27		TR抜けLyric出力ミス修正
   6  8		引数つきマクロ化

20 7 19		ドキュメント直した
 
*/ 
  
/*　　取扱説明書 


　　@81,8サイン波などで、
　調律による位相ズレの確認をするとより良いです。


	
　□調律による呼出し 


　- 使い方 -

　Eq_tune("a","442")のようにセットします。
	
　■リズムトラックのキャンセル 


　{a}	で、TR10のみキャンセル
　{a-c}	は、TR10-TR12の間をキャンセルします
　{1-9}	は、TR1-TR9までキャンセル
　{g}	で、TR16をキャンセルします

　何も入力しなければ、16チャンネル全て調律します

　Mt_tune("a")  であれば、TR10以外のチャンネルを中全音律で、
　Js_tune("8-b")であれば、TR8-TR11以外のチャンネルを純正律として調律
 
　■調律の選択 


　Eq_tune()	平均律			:440Hz
　Kb_tune()	キルンベルガー第３調律法:430
　Wm_tune()	ヴェルクマイスターiii	:422.5
　Mt_tune()	ミーントーン(中全音律)	:392
　Js_tune()	純正律			:466
　Py_tune()	ピタゴラス音律		:490


　カッコの中に何も記載がない場合、
　当時使われたであろう、上記の周波数を A:としてアサインします
　Eq_tune()のみ書き込むと、Eq_tune(,"440")扱いとなります
 
　■A(ラ)の周波数 Hzを変更 


　数値は、430～450Hzまで変更できます。

　文字による周波数指定も可能です。

　"オルガン"		:490Hz
　"ベネチアン"		:466	// ルネサンス時代[純正律]
　"バロック"		:415	// バッハ、パッヘルベル[中全音律]
　"ベルサイユ"		:392	// バロック時代後期
　"ヘンデル"		:422.5
　"モーツァルト"	:422	// モーツアルト[キルンベルガー、ヴェルクマイスター]

　"古典派"		:430	// ハイドン、ベートーベン
　"フランス"		:435
　"イタリア"		:432
　"ISO"			:440	//[平均律]
　"カラヤン"		:446

　数値指定の場合、Kb_tune("a-c","422.5")

　文字による指定、Wm_tune("a-c","ヘンデル")
 
　■#Aug4 増四度選択 


　純正律の増四度は、幾つかの選択肢があります。

　#Aug4="45/32"とすることで、増四度の純正律を変更できます。

　※このマクロは、純正律使用時のみ機能します。

　"25/18"
　"45/32"	:Cメジャーキー向け
　"24/17"
　"17/12"
　"64/45"	:Aマイナーキー向け
　"36/25"


　必ず、#Aug4 をJs_tune() の前に置いて下さい。

　Include(tuner2.h)
　#Aug4="45/32" Js_tune("a-c","440")


　指定がない場合は、#Aug4= "64/45"となります。

　Include(tuner2.h)
　Js_tune("a-c","440") // "64/45"としてチューニング
  
　□Total_tuneによる呼出し 


　- 使い方 -

　Total_tuneをダイレクトに叩くこともできます。
　この場合、オプションがひとつ追加されます。

	
　■リズムトラックのキャンセル 

　調律による呼出し参照のこと
 
　■A(ラ)の周波数 Hzを変更 

　調律による呼出し参照のこと
 
　■調律の選択 

　調律による呼出しに準拠となります。
　最初のふた文字により調律を指定します。

　Eq_tune() -> Eq

　Total_tune("a","440",Eq)
 
　■調律のローテーション機能 


　Total_tune("a-c","440",Kb,0)の最後にある "0"を、
　[-11~11]の間へ変更することにより、調律のローテーションをします。


　通常は"A" を中心とした調律となりますが、
　これを"2" とすることで"B" を中心とした調律世界に変更します。

　例えるとイ短調(A)での、キルンベルガーの調律世界を変えず、
　そのまま、イ短調世界を Bから始まるキーとして調律してしまうものです。


　普通はAを中心として調律されるため、ありえない調律なのですが、
　DTM ではキー変更が普通なので、試験的に組み込みました。

　どうも聞いてピンとこないときなどに、
　キーの数値と同じ値に、変更してみると良いかもしれません。


　※全て100cent単位の平均律 Eqにおいては、この機能は必要ないです。
　配列"64,64,64,.. " のローテーションとなり、何も変わらないためです。
  
*/ 
  
/*　　クイックリファレンス 
	
　□早見表 

　Js_tune("a-c","442")

　Total_tune("cancelTR", ["440" | "バロック"], [ Py | Js | Mt | Wm | Kb | Eq ], [-11~11])
 
　□周波数リスト 

　[430 ~ 450]

　オルガン:490   | ベネチアン:466   | バロック:415 | ベルサイユ:392 |

　ヘンデル:422.5 | モーツァルト:422 | 古典派:430   | フランス:435   | イタリア:432

　ISO:440        | カラヤン:446
 
　□各機能の記述例 


　- 調律による呼出し

　Include(gs.h) ResetGS()r4
　Include(tuner2.h) Kb_tune()


　- Total_tuneによる呼出し

　Include(gs.h) ResetGS()r4
　Include(tuner2.h) Total_tune(,,Kb)
 
　□基本雛型 


　//調律による呼出し//

　Include(gs.h) ResetGS()r4

　Include(tuner2.h)
　#Aug4="45/32" Js_tune("a-c","440")

　Tempo=88 Time=(!2) TrackSync

　#TT={ @81,8 l2 o7 aa+b cc+dd+eff+gg+ }

　TR=1  #TT
　//TR=12 #TT //比較のための調律なしTR


　------------------------------------

　//Total_tuneによる呼出し//

　Include(gs.h) ResetGS()r4

　Include(tuner2.h)
　#Aug4="45/32" Total_tune("a-c","440",Js,0)

　Tempo=88 Time=(!2) TrackSync

　#TT={ @81,8 l2 o7 aa+b cc+dd+eff+gg+ }

　TR=1  #TT
　//TR=12 #TT //比較のための調律なしTR
 
*/ 
  
// 　以下、プログラム部 
 
Function Cent_tune(Int Num,""){ 

	Array RR;
	RR(1)= Num/5000
	RR(0)= Num%5000

	If(RR(1)<0){
		If(RR(1)%2!=0){ RR(0)= 5000+ RR(0) }
		RR(1)= RR(1)-1
	}
	If(RR(1)>0){
		If(RR(1)%2!=0){ RR(0)= -5000+ RR(0) }
		RR(1)= RR(1)+1
	}

	RR(1)= RR(1)/2

	Result= RR;
} //func

 
Function Marume(Int w,""){ 

	Int Num= w/100

	//2桁版銀行やまるめで四捨五入
	If(w%100>=50){
		If(w%100==50& Num%2==0){}
		Else{ Num= Num+ 1 }
	}
	If(w%100<=-50){
		If(w%100==-50& Num%2==0){}
		Else{ Num= Num- 1 }
	}

	Result= Num;
} //func

 
Function Tune_enzann(Int Key_chg,Int Num,Array Arr){ 

	Int j= -Key_chg;        If(j<0){ j= j+ 12 };
	Int k= (9+ Key_chg)%12; If(k<0){ k= k+ 12 };

	Array RR
	For(Int i=0;i<12;i++){

		RR(i)= Arr(k)+ Arr((i+j)%12)+ Num

		RR(i)= Marume(RR(i))
		RR(i)= RR(i)+ 64
	} //

	Result= RR;
} //func

 
Function Split_tr(Str TT,""){ // [a, a-c] 

	Array RR=(0,0);
	Str XX;
	Int j=0; Int k=0; Int NN;

	Int Size= SizeOf(TT)+1
	For(Int i=1; i<Size; i++){

		XX= MID(TT,i,1) // i=1~
		Switch(XX){
			Case(" "){}
			Case("1"){ j++ }
			Case("2"){ j++ }
			Case("3"){ j++ }
			Case("4"){ j++ }
			Case("5"){ j++ }
			Case("6"){ j++ }
			Case("7"){ j++ }
			Case("8"){ j++ }
			Case("9"){ j++ }
			Case("a"){ j++ }
			Case("b"){ j++ }
			Case("c"){ j++ }
			Case("d"){ j++ }
			Case("e"){ j++ }
			Case("f"){ j++ }
			Case("g"){ j++; XX= "10" }
			Case("-"){ k++ }
			Default{ Print({"トラック指定外の文字: 1-gの間のみ"}) End; }
		} //sw
		If(j==1){ NN= "$"+ XX; RR(k)= NN } //hex->10
		If(k==1){ j= 0 }
	} //

	If(RR(0)!=0){

		If(RR(1)==0){ RR(1)= RR(0) }
		Else{
			If(RR(0)>RR(1)){ NN= RR(1); RR(1)= RR(0); RR(0)= NN } // a<->b
		}
	}
	Result= RR;
} //func

 
 Function GS_ScaleTuning_Kai(Str Not_tr,Int Add,Array New_tune){ 

	Array RR= Split_tr(Not_tr)
	Array Hex_num=(,$11,$12,$13,$14, $15,$16,$17,$18,  $19,$10,$1a,$1b, $1c,$1d,$1e,$1f)

	For(Int i=16;i>0;i--){
		If(RR(0)<=i&RR(1)=>i){}
		Else{
			SysEx= $F0,$41,$10,$42,$12,{$40,Hex_num(i),$40,New_tune},$F7;
			CH= i; CoarseTune= 64+ Add;
		}
	} //

	Result= RR;
 } //func

 
Function Total_tune(Str Not_tr,Str Onnsa,Str Tyohritsu,Int Key_chg){ 

	If(Key_chg<-11|Key_chg>11){ Print({"数値を入力: [-11~11]"}) End; }

	If(#Aug4==""){ #Aug4= "64/45" }

	Int NN; Array Arr; Int Num;

	Switch(#Aug4){
		Case("25/18"){ NN= -3128 }
		Case("45/32"){ NN=  -978 } // aug4
		Case("24/17"){ NN=  -300 }
		Case("17/12"){ NN=   300 }
		Case("64/45"){ NN=   978 } // dim5
		Case("36/25"){ NN=  3128 }
	} //sw

	Str Lyr;
	Switch(Tyohritsu){

	Case("Wm"){ Arr=(1026,   49, 342,  440, 196,  831,   49, 684,  244,  0, 645, 391) Lyr={"ヴェルクマイスターiii"} }
	Case("Kb"){ Arr=(1026,   49, 342,  440,-342,  831,   49, 684,  244,  0, 635,-147) Lyr={"キルンベルガー第３調律法"} }
	Case("Mt"){ Arr=(1026,-1369, 342, 2053,-342, 1369,-1026, 684,-1711,  0,1711,-684) Lyr={"ミーントーン(中全音律)"} }
	//                  c          d          e     f          g         a         b
	Case("Js"){ Arr=(1564,-1369,-196,   NN, 196, 1369,-1564,1760,-1173,  0,1173, 391) Lyr={"純正律(aug4は"}+#Aug4+{")"} }
	Case("Py"){ Arr=(-587,  782,-196,-1173, 196, -782,  587,-391,  978,  0,-978, 391) Lyr={"ピタゴラス音律"} }
	Default{    Arr=(   0,    0,   0,    0,   0,    0,    0,   0,    0,  0,   0,   0) Lyr={"平均律"} }

	} //sw

	Switch(Onnsa){
		Case("オルガン"){	Onnsa="490" }
		Case("ベネチアン"){	Onnsa="466" }	// ルネサンス時代 [純正律]
		Case("バロック"){	Onnsa="415" }	// バッハ、パッヘルベル [中全音律]
		Case("ベルサイユ"){	Onnsa="392" }	// バロック時代後期
		Case("ヘンデル"){	Onnsa="422.5" }
		Case("モーツァルト"){	Onnsa="422" }	// モーツアルト [キルンベルガー、ヴェルクマイスター]

		Case("古典派"){		Onnsa="430" }	// ハイドン、ベートーベン
		Case("フランス"){	Onnsa="435" }
		Case("イタリア"){	Onnsa="432" }
		Case("ISO"){		Onnsa="440" }	// [平均律]
		Case("カラヤン"){	Onnsa="446" }
	} //sw

	Switch(Onnsa){
		// centが31.19 であれば 3119
		// -50.00,50.00 cent外は、CoarseTune使用 [+100cent= +1CoarseTune]

		Case("490"){ Num=18633 }
		Case("466"){ Num= 9939 }

		Case("450"){ Num= 3891 }
		Case("449"){ Num= 3505 }
		Case("448"){ Num= 3119 }
		Case("447"){ Num= 2733 }
		Case("446"){ Num= 2345 }
		Case("445"){ Num= 1956 }
		Case("444"){ Num= 1567 }
		Case("443"){ Num= 1176 }
		Case("442"){ Num=  785 }
		Case("441"){ Num=  393 }

		Case("440"){ Num=    0 }
		Case("439"){ Num= -394 }
		Case("438"){ Num= -789 }
		Case("437"){ Num=-1184 }
		Case("436"){ Num=-1581 }
		Case("435"){ Num=-1979 }
		Case("434"){ Num=-2377 }
		Case("433"){ Num=-2776 }
		Case("432"){ Num=-3177 }
		Case("431"){ Num=-3578 }
		Case("430"){ Num=-3980 }

		Case("422.5"){ Num= -7026 }
		Case("422"){   Num= -7231 }
		Case("415"){   Num=-10127 }
		Case("392"){   Num=-19998 }

		Default{ Print({"名称か周波数を入力: ヘンデル or 430~450"}) End; }
	} //sw

	Array C_tune= Cent_tune(Num)
	Array New_tune= Tune_enzann(Key_chg,C_tune(0),Arr)
	Array RR= GS_ScaleTuning_Kai(Not_tr,C_tune(1),New_tune)

	TR=1 // Lyric出力のため先に発行 / TR0外でのみlyricが付くサクラの仕様
	Lyric= Lyr
	Lyric= {"A: "}+ Onnsa+ {"Hz"}
	Lyric= {""}+ Num+ {"/100cent= "}+ C_tune(0)+ {"*0.01cent + "}+ C_tune(1)+ {":CoarseTune(*100.00cent)"}
	Lyric= {"64+- c~b: "}+ New_tune
	Lyric= {"cancel("}+ RR(0)+ {"-"}+ RR(1)+ {")TR"}
	Lyric= {"Key_chg: "}+ Key_chg


} //func

 
// Tune Functionマクロ 

#Tn2_Tune= {Function #?1_tune(Str Not_tr,Str Onnsa){ If(Onnsa==""){ Onnsa= "#?2" } Total_tune(Not_tr,Onnsa,"#?1") }}

#Tn2_Tune("Eq","440")	//平均律
#Tn2_Tune("Kb","430")	//キルンベルガー
#Tn2_Tune("Wm","422.5")	//ヴェルクマイスター
#Tn2_Tune("Mt","392")	//ミーントーン
#Tn2_Tune("Js","466")	//純正律
#Tn2_Tune("Py","490")	//ピタゴラス
 
//　以上プログラム部、終わり 



 
/*	メモです 


	ScaleTuningは、値ひとつで1centとなっています。
	問題は、+-64cent外の調律を要求された時の対応ですが、

	CoarseTuneでドをド#にしてしまえば、100centずれるため、
	これを使い、連続的にチューニングします。

	64+50になったら、CoarseTuneを一個足し、
	64-50へチューニングする、この繰り返しです。


	centの合算値については、0.50では切り上げ、
	0.49で切り捨てとなってます。


*/
 	
