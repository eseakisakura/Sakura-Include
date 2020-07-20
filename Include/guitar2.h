// title:        "guitar2.h" ver6.0beta 
// description:  diagramのMML変換付きguitar支援スクリプト (20/ 7/ 14)
// keywords:     SAKURA Function     Powered by 04coreworks



 
/*  　概要 


	ギターのMML書き込みをサポートするヘッダです。
	コード名を記入することによって演奏します。

	ギター特有のカッティングやアルペジオを、
	簡単な指定により再現できるようにしました。


	guitar2.hは、構造化エディタに対応しています。

	※ guitar.hとは上位互換性があります。
	※q__8,q__9,t__9,v__9は使用済みとなります。


	Includeフォルダに入れて使います。
	guitar2.hを、サクラ、TWのIncludeフォルダに入れて下さい。


	※ リネームが必要な場合

	拡張子"h"が、何らかのソフトにより登録されているケースにおいて、
	"guitar2.h.mml"とリネームされることがあります。

 	この場合、フォルダオプションの、
	"登録されている拡張子は表示しない"のチェックを一時的に外し、
	拡張子を表示するようにした後、リネームしてみて下さい。
	
　□注意点 - 現在判っている問題 


　TimeBase=480 のような細かいチック設定において、
　ゲート指定がq80 以上の指定があると、

　ノートオン、ノートオフのタイミングの関係上、
　音が途切れる問題があります。

　できるだけ、TimeBase=192 あたりを上限として運用して下さい。

 
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


　コードポジションは、以下のページ様を参照しています。

　http://www9.ocn.ne.jp/~knatsu/chords/chords.html
　http://www.ishibashi.co.jp/academic/Chord_Guitar/C.htm
　ドミナント9th - 8monji-guitar.com

　http://www.naru-gakki.com/guitar-opentuning/
　http://guitar-hakase.com/tuning/
　http://www.aki-f.com/kouza/b_kouza/kouza5/kouza5_2.htm
 
　□履歴 

　15 10 28	メジャーアップデート終了 -- ver.4
　   11	4	#Mode_def -> #Mode_setのようにマクロ名を変更

　16 1	9	BARATUKIのup_strokeを早めた t__8=-2
　   5	13	Forループ、SizeOf部の最適化
		取説書き直し
	20	Cut_prn,Arp_prnを追加、及び最適化
		MML文字のInt g errの解決 TT;と叩けなかった
		#Oct_setを追加 ->8.27廃止
     6	4	result出力を追加
		prnは再生なし返値付きとした
		Chord Functionをマクロ化
		Cutting弦調整高音弱から強へ
		Chdprintのresult抜け修正
	11	CUTTINGで付点可にした
     7	14	ARPEGGIOのパラメータ調整
	28	CUTTINGのパラメータ増加 ->9.13廃止
     8	1	ARPEGGIOのパラメータ増加
	27	Fretnoteの廃止に伴う修正
     9	13	CUTTINGのtqv__8廃止
	24	ARPEGGIOのサム指定自動チェンジ追加
	25	sus2記述でもadd9可とした、sus4の間違い修正

  20 6	19	ver5.0cを廃止、ver4.5系からの派生をver6.0とした
	29	テンションコードの追加
	30	#はpでなくsとした、見間違い防止のため
     7	1	5.0c系から必要な機能のみ移植した
		(～)によるコマンド記述はセキュリティ的に不利なため廃止
		引数マクロの""抜けエラー修正
	2	ドキュメント直した
	4	処理の最適化
	14	mM7b5を追加した
 
*/ 
  
/*　　取扱説明書 


　　各機能の簡易マニュアルです。

　　詳細説明書につきましては、
　　スクリプト下部参照のこと。
	
　□各機能の説明 



//　各機能を順に説明します。


//　6弦開放のEをo3eとしているため、
//　トラック始めに、o3記述を入れる必要があります。


//　# はs に、置換えて記述して下さい。
//　サクラでは、#はマクロを意味するためです。

//　　F#m7b5  -> Fsm7b5
//　　Bm7#5   -> Bm7s5
//　　Abb9#11 -> Abb9s11
	
　- guitar.h互換 / ストローク - 



//　ストロークプレイを演奏します。
//　コードを一つ指定すると、一回 "ジャン"と鳴ります


　■バラつきを指定 / 3,-2


　　F7(3)のように、
　　3とダウンストロークを指定します。
　　これにより、ニュアンスを付けることができます

　　F7(-2)であれば、
　　アップストローク速度が 2となります


　■音符長の指定 / l2


　　G7(3,2)と指定すると、
　　G7のコードを2分音符分、維持します


　■ルート弦の指定 / 6,5,4


　　ギターでは、ポジションによって、
　　響きが違うコードを演奏できます。

　　このポジションを選択するために、
　　三本あるルート弦から、ひとつを指定します。

　　E7(3,2,6)であれば、
　　6弦ルートの響きを持つコードが選択されます



 
　- Cutting カッティング - 


//　カッティングを演奏します
//　ダウンアップ記述のみで、ストロークするものです。


　■カッティングモードの指定 / cut


　　G7("du^u",cut)と指定します。
　　これにより、カッティングモードとして動きます。


　■カッティングの指定 / D(own) U(p)


　　コードをジャカジャンと、鳴らすためには、
　　ダウン、アップストロークを繰り返します。

　　このため、奇数番はd、偶数番はu、と打つことで、
　　空ストロークのある自然な演奏となります。

　　FM7("d^^u  ^ud^",cut)


　　ジャラランとバラつきを付けたいのであれば、
　　"du"の後に数字を加えます。

　　FM7("d12^^u  ^ud4^ ",cut)




　■ルート弦の指定 / 6,5,4


　　E7("du^u",cut,6)であれば、
　　6弦ルートの響きを持つコードが選択されます。



 
　- Arpeggio アルペジオ - 


//　弦指定をすることで、
//　アルペジオを打ち込みで演奏します。


　■アルペジオモードの指定 / arp


　　G7("r232",arp)と指定します。
　　これで、アルペジオモードとして動きます。


　■アルペジオの指定 / rhu321


　　アルペジオをポロポロ鳴らすには、
　　r(oot)を指定し、次に123弦のどれかを弾きます。

　　例えば、裏を 1弦で弾くのであれば、基本4つ"r131"をつくり、
　　これを倍にして、"r131 2131"のように指定します。

　　コードの弦数によりますが、5弦相当の h(armony)、4弦相当の u(nison)も、
　　使用できる場合もあります。

　　E7("r131 u131",arp)



　■ルート弦の指定 / 6,5,4


　　ストロークと同じで、響きの選択です。

　　FM7("r321",arp,6)であれば、
　　6弦ルートの響きを持つコードが選択されます。



 
　- Chdprint ダイアグラム呼出し - 



//　ギターのポジションから、
//　直接指定するときに使用します。



　■ナット固定 / N(ut)

　　ヘッドのナット"N"を起点とします。


	1E x||   |   |   |   |   |
	2B  ||   |   |   |   |  e|
	3G  ||   |   |   |   |  c|
	4D  ||   |  e|   |   |   |
	5A a||   |   |   |   |   |
	6E x||   |   |   |   |   |
	   N    1   2   3F  4   5F

	Chdprint("x02 55x  N") // A

	10F以降の指定は、順に 9,a,b,c と増えます。(12Fのcまで)



　■キー指定 / A-G# [root,silent]

　　キー[A-G#]を指定することで、MML出力します。


	1	x|   |   |   |
	2	 | b5|   |   |
	3	 |   | b3|   |
	4	 |   | b7|   |
	5	x|   |   |   |
	6	 |   |r,s|   |
		   -1   0   1

	Chdprint("rx0 0-1x  F#") // F#m7b5

	ルート指定 r,s が必要となります。(s: ルートは弾かない,主にcut用)



　-- Chdprintの入力例 --


　　Include(guitar2.h) l8 q93 o3 Time=(!4)

　　Chdprint(,prn,"x02 55x  N") // 開放弦のポジション
　　Chdprint({d^du},cut,"rx0 0-1x  F#") // "r"と指定後、キー"F#"
　　Chdprint({r321},arp,"sx0 0-1x  F#") // "s"サイレントルート



  
　□各機能の出力選択について 



//　通常は、演奏のみを行いますが、
//　スイッチを付けることで、コンソールへ出力できたりします。


　■プリント出力 "prn"

　構成和音を返値付きでコンソール出力します。

//　E7(3,prn)
//　prn | cut_prn | arp_prn


　■デバッグ出力 "print"

　実際に再生するMMLをコンソール出力します。
　主にチェック用途です。

//　E7(3,print)
//　print | cut_print | arp_print


　■返値 "result"

　構成和音の返値のみを返します。
　変数に確保し、再利用するときなどに使います。

//　E7(3,result)
//　result | cut_result | arp_result



　-- prn,print出力の例 --

　Include(guitar2.h); @27 q93 o3 Time=(!4) l8

　Fsm7b5("d^du",cut_prn)   // prnはコード内容の表示
　Fsm7b5("r131",arp_print) // デバック出力
　Str TT= Fsm7b5("d^du",cut_result) // 変数確保
　Print(TT)


 
　□デフォルトマクロの変更について 

//　デフォルトマクロを変更することにより、
//　省略記述がてきます。


　■#Device_set= "MS" //default [ GM | GS | MS ]

　　発音タイミングの選択をします。

　　MSは、Ms synth.用に調整したタイミングを使用します。
　　GSは、モタリ感のない、ソリッドなタイミングにします。
　　GMは、旧バージョンのサウンドを再現します。


　■#Mode_set= "std" //default

　cutやarp記述を省くときに使用します。

　A7("d^^u",cut)

　->#Mode_set="cut"
　->A7("d^^u")

// std | prn     | print     | result     |
// cut | cut_prn | cut_print | cut_result |
// arp | arp_prn | arp_print | arp_result |



　■#Cut_set= "d^du^udu" //default
　　#Arp_set= "r323 1232"

　繰り返しの演奏指定を省くなどで使用します。

　A7("d^^u",cut)

　->#Cut_set={d^^u}
　->#Mode_set="cut"
　->A7


　■#Sum_chg= "on" //default [on | msg | off]

　通常は、ルート弦を自動アサインしますが、

　自動アサインせず、手動指定の場合、"off"にします。
　もしく変更メッセージ付き"msg"に切替えます。



　■#Down_set= "2" //default
　　#Up_set  = "2"

　デフォルトのバラつきの速度を変更します。

　A7({d(バラつき2)^^u2},cut)

　->#Down_set= "4"
　->A7({d(バラつき4)^^u2},cut)



　■#Tune_set= "nomal" //default (regular-tune)

　ギターのチューニングを変えます。
　オープンチューニングの曲を打ち込む際に使用します

//　nomal  | openG | openGm      | openD  |
//  openDm | dropD | nash(ville) | DADGAD |



　-- マクロ変更例 --

 Include(guitar2.h)

  @26 q94 l8 o3

　#Tune_set= "openG";		// openGへ変更
　#Mode_set= "cut";		// モード変更

　[ Am Dm7 Em7 : FM7("d4^ ^^^^ u4r ") ] l1 FM7("d5") l8

  @25 q97

  #Tune_set= "openDm";		// openDmへ変更
  #Mode_set="arp";		// モード変更
  #Arp_set="r131 u212";		// 演奏指定

  [ Am9 Gbm9 Gm9 : Abm9 ] Abm9



 
　□各モード共通で使用できる文字について 



//　基本的なMMLであれば、共通して使用できます。


	^    | タイが使用できます
	v-11 | 音量の相対変化が使用できます
	[:]  | ネストのあるループが使用できます

	a- g# qvto q_v_t_o_<>@ ^0-9+-(=) ,|;[:]
	PrintTime,TrackKey,Keyコマンドも使用できます。
	これに対応するストトンも可です。



　■カッティング Cutting

　"r" 休符、"l" 音長、"." 付点が使用できます。

　l8 A7({ du^u l12 [du^ u^u] },cut) // 以後"l12"となる。

// ''[和音]は不可です。



　■アルペジオ Arpeggio

　'21'などの和音指定により、ダブルストップもできます。

　l8 A7({ r 3'21'3 u 3'21'3 },arp)

// "l"[音長]は不可です。
// "r"は、休符ではなくルート指定となります。



　■ダイアグラム呼出し Chdprint

　ダイアグラムのポジションには、
　以下の文字により指定してください。

　rsx +-0123456789abc NABCDEFGbp#



　-- 各種凡例 --

　//Cut
　l8 v77 Fadd9({ [4 d4u3[d3u2]:d6u5] },cut)
　l8 v77 Fadd9({ [@28,0 q66 du2 Key(-5)@29 <v-11 d> Key=0 ] },cut)

　//Arp
　l8 Em7b5({ [r321 ^: 232] 321 },arp)
　l8 Em7b5({ r 323 > v-11 @29,0 Key=7 'u t6 1' Key(0)< },arp)

　//Chdprint
　Chdprint("x02 55x  N")
　Chdprint(,prn,"x02 55x  N")

　Chdprint({d^du},cut,"r2-1 102  C")
　Chdprint({r321},arp,"s2-1 102  C")
 
　□使用上の制限 


	
　■カッコ内の記述について 


　　"" ないし、{}で挟んで対処します。

　　記号、アルファベットが混在するため、
　　string扱いでなければ、エラーとなるためです。

　　Am7(du^u)	->Am7("du^u") or Am7({du^u})
　　Am7(r1^3)	->Am7("r1^3") or Am7({r1^3})
 
　■print機能について 


　　"Print"コマンドとの衝突を避けるため、
　　使用する際は、小文字で"print"と記載のこと。

　　-> Am(3,print)
 
　■音色チェンジでの注意 


　　各機能はリアル感のため、4step早める処理をしています。
　　このため、音色チェンジが遅れることがあります。

　　この場合は、あらかじめ音色を変えておく、
　　ないし戻し休符などを使い、対応して下さい。

　　->r%-4 @25 r%4  Em7
　　->r%-4 @26 r%4  FM7
 
　■アルペジオの仕様 


　　アルペジオは、弦が2本以下となる場合、
　　出力しない仕様です。

　　->Fpw2("r1^1",arp,6) // 2弦のみだと、エラー出力


　　アルペジオでは、4弦コードであれば、
　　細い弦から、1,2,3,rと自動でアサインされます。このため、

　　4弦コードで、[h]や[u]がない場合、

　　自動的に[r]が、[h],[u]の代りに差換えられる仕様となっています。

　　Am7("rhu 321",arp_prn,4)

　　->arp :rhu321 | x, x, `a, ``e, ``g, ```c
　　->`a`a`a``e``g```c

　　Am7("rhu321",arp_prn,5) //5弦の場合は、[h]は[u]に差換え

　　->arp :rhu321 | x, a, `e, `g, ``c, ``e
　　->a`e`e`g``c``e
 
　■アルペジオとループカウンタ 


　　アルペジオでは、数字を使うため、
　　記述によってはループカウンタの数字と、見分けがつきません。

　　これを避けるため、空白で明示的に分離する必要があります。


　　-> [ 123r]  // [空白 123]
　　-> [4 123r] // [4空白 123r]
 
　■Chdprintの左寄せ記述について 


　　Chdprintでは、左側ふたつに記述がない場合、
　　左寄せ記述ができます。

　　Chdprint(,,"x02 55x  N") -> Chdprint("x02 55x  N")


　　これは#Mode_set="prn"などを併用した際、
　　","の、記述を減らすための仕様となってます。

　　-> #Mode_set="prn" Chdprint("x02 55x  N")
  
*/ 
  
/*　　クイックリファレンス 
	
　□指定できるコードリスト 

  [# は、sへ置き換える]
　[pwはギターリフで、omit3コード]
  [(A711)指定可 ->A7sus4へ自動差換え]

 　A     |AM7  |AM79   |(AM9)   |AM7s11 |AM713  |AM913
   Am    |Am7  |Am79   |(Am9)   |Am711  |Am911
 　A7    |A7b9 |A79    |(A9)    |A7s9   |(A711) |A7s11
   A7b13 |A713 |Ab9s11 |(As9b13)|(A913)

   AM7b5 |Am7b5  |Am7b511 |A7b5
   AM7s5 |Am7s5  |(A7s5)
   AmM7  |AmM7b5 |AmM7s5 |AmM79
   A6    |A69    |Am6     |Am69

   Aadd9 |Aadd911 |Amadd9 |Amadd911
   Asus2 |A6sus2  |Asus4  |A7sus4   |A9sus4 |A13sus4
 　Adim  |Adim7   |Aaug   |Aaug7
 　Apw2  |Apw3
 
　□マクロ早見表 

　#Device_set= "MS" // [GM(old)| GS | MS(new)]

　#Mode_set= "std" // stdはstrokeのみ

　std | prn     | print     | result     |
　cut | cut_prn | cut_print | cut_result |
　arp | arp_prn | arp_print | arp_result |


　#Cut_set= { d^du ^udu }
　#Arp_set= { r323 1232 }


　#Down_set= "2"
　  #Up_set= "2"


  #Sum_chg= "on"

  on | msg | off |


　#Tune_set= "nomal" // nomalはregularチューニング

　nomal  | openG | openGm      | openD  |
  openDm | dropD | nash(ville) | DADGAD |

 
　□出力早見表 

　A7(3,2,6)	// guitar.h互換ストローク
　G7(,prn,6)	// コンソール出力
　F7("d^du",cut,6)	// カッティング
　E7("r321",arp,5)	// アルペジオ

　Chdprint(-5,2,"x02 55x  N")
　Chdprint(,prn,"r2-1 102 C")
　Chdprint("d^du ^udu"     ,cut,"x02  210  N")
　Chdprint("r[u3:1]r[u2:1]",arp,"r2-1 102  C")

 
　□各機能の記述例 




	
　■ストローク / guitar.h互換 

　Include(guitar2.h);

　@27 q93 o3 Time=(!4) l2
　Em7b5 A7(11)  Dm7 G7(-5,,6)  C(12,1,5)
 
　■カッティング Cutting 

　Include(guitar2.h);

　@26 o3 q96 v99 Time=(!4) l8 #Mode_set="cut"
　E7sus4

　Am("l8 d^d^ v88 q18 d3u2^^^")
 
　■アルペジオ Arpeggio 

　Include(guitar2.h);
　@25 o3 q108 Time=(!4) l8 #Mode_set="arp"
　E7sus4

  Am("r t+1 232 1 t-1 232 u^^^")
 
　■ダイアグラム呼出し Chdprint 

　Include(guitar2.h);

　@27 o3 v99 Time=(!4) l8
　Chdprint(" x02 55x  N") // ナットモード
　Chdprint("r2-1 102  C") // キー指定モード

　q108 Chdprint(" [r323 123:2]2^^^ ",arp,"x02 55x  N")
　q96  Chdprint(" [d^d:u^udu]u^^^^ ",cut,"r21 1xx  B")
  
　□基本雛型 

　Include(gs.h) ResetGS()r4
　Include(guitar2.h)
　Time=(!2)


　//カッティング//

　#Mode_set="cut"
　#Cut_set={ d^du ^udu }

　r%-4 @26 o3 q93 v86 l8 r%4
  Dm7b5 E7 Am7 D7


　//アルペジオ//

　#Mode_set="arp"
　#Arp_set={ r131 2131 }

　r%-4 @25 o3 q115 v106 l8 r%4
  Dm7b5 E7 Am7 D7


　//Chdprintのバッキング//

　Chdprint(" d^du ",cut,"577 655 N")
　Chdprint(" r321 ",arp,"r22 100 A")
 
*/ 
  
// 以下、プログラム部 



 
// マクロ設定 

#Device_set= "MS" // [GM(old)| GS | MS(new)]

#Mode_set= "std" // [stroke]

// std | prn     | print     | result     |
// cut | cut_prn | cut_print | cut_result |
// arp | arp_prn | arp_print | arp_result |


　#Cut_set= "d^du ^udu" // "cut"の演奏デフォルト
　#Arp_set= "r323 1232" // "arp"

// #Cut_set= "d4^^u ru3^^"
// #Arp_set= "r131 u212"


　#Down_set= "2" // "cut"のダウンバラつき
　#Up_set  = "2" // "cut"のアップバラつき

  #Sum_chg= "on" // on | msg | off | サム指定自動チェンジ


　#Tune_set= "nomal" // [regular]チューニング

// nomal  | openG | openGm      | openD  |
// openDm | dropD | nash(ville) | DADGAD |


//  Global変数

 Str Res_gbl; // 返値
 Str Chd_gbl; // コード名
 Str Root_gbl; // ルート弦の取得



 
//	diagram2.h ------ 

	
// ERR 
	
Function GT2_ERR(Array RR){ // {""},ZZ,.. 

	Str ZZ;

	Int Size= SizeOf(RR)
	For(Int i=0; i<Size; i++){
		If(i%2==0){
			If(i==0){ ZZ= {"usage | "}+ RR(i) }
			Else{ ZZ= ZZ+ {" / "}+ RR(i) }

		}Else{ ZZ= ZZ+ {" :"}+ RR(i) }
	} //

	Print(ZZ);
} //func

  
// MML_compile 

	
Function LOOPBREAKER(Str TT,""){ 

  Str XX; Str ZZ;
  Int SW=0; Str Loop=""; Int j;

  Str AB1; Str AB2; Str AB3;
  Int Num=0; Int Chk=0;

  Int Size= SizeOf(TT)+1
  For(Int i=1; i<Size; i++){

	XX=MID(TT,i,1) // i=1~

	If(SW==1){
		Switch(XX){
		Case("0"){ Loop= Loop+ XX
		}Case("1"){ Loop= Loop+ XX
		}Case("2"){ Loop= Loop+ XX
		}Case("3"){ Loop= Loop+ XX
		}Case("4"){ Loop= Loop+ XX
		}Case("5"){ Loop= Loop+ XX
		}Case("6"){ Loop= Loop+ XX
		}Case("7"){ Loop= Loop+ XX
		}Case("8"){ Loop= Loop+ XX
		}Case("9"){ Loop= Loop+ XX
		}Case("]"){ GT2_ERR({"ループのみしかない"})
		}Default{ If(Loop==""){ Loop=2 } SW=2
		}
		} //sw
	}
	If(SW==0){
		Switch(XX){
		Case("["){ SW=1
		}Case(":"){ GT2_ERR({"':' が先に現れる"})
		}Case("]"){ GT2_ERR({"']' が先に現れる"})
		}Default{ AB1= AB1+ XX
		}
		} //sw
	}
	If(SW==3){
		Switch(XX){
		Case("["){ Num++; AB3= AB3+ XX

		}Case(":"){	If(Chk>0){
					AB3= AB3+ XX
				}Else{
					GT2_ERR({"':' が複数ある"})
				}

		}Case("]"){	If(Chk>0){
					If(Num==0){
						AB3= LOOPBREAKER(AB3) SW=4; Chk=0
					}Else{
						AB3= AB3+ XX; Num-- }
				}Else{ SW=4
				}

		}Default{ AB3= AB3+ XX
		}
		} //sw

		If(Num>Chk){ Chk= Num }
	}
	If(SW==2){
		Switch(XX){
		Case("["){ Num++; AB2= AB2+ XX

		}Case(":"){	If(Chk>0){
					If(Num==0){
						AB2= LOOPBREAKER(AB2) SW=3; Chk=0
					}Else{
						AB2= AB2+ XX
					}
				}Else{
					SW=3
				}

		}Case("]"){	If(Chk>0){
					If(Num==0){
						AB2= LOOPBREAKER(AB2) SW=4; Chk=0
					}Else{
						AB2= AB2+ XX; Num--
					}
				}Else{
					SW=4
				}

		}Default{ AB2= AB2+ XX
		}
		} //sw

		If(Num>Chk){ Chk= Num }
	}
	If(SW==4){

		ZZ= ZZ+ AB1;

		j= Loop;
		While(1){
			ZZ= ZZ+ AB2;
			j--; If(j<=0){ Exit; } ZZ= ZZ+ AB3;
		} //

		SW=0; Loop=""; AB1=""; AB2=""; AB3="";
	}

  } //

  If(SW!=0){ GT2_ERR({"'[:]' の形と違う err"},SW) }

  ZZ= ZZ+ AB1;

  Result= ZZ;

 } //func

// Print( LOOPBREAKER("q[e:[h:y]]t[[w:[k]]:r]u[a[b[:c]]][z]q") )


 
Function SHUTOKU(Str XX,Array RR){ // from SW=3 

  Int SW= RR(0); Str Cmd= RR(1); Str Value= RR(2); Str Kigoh= RR(3);

  If(SW==3){

	If(XX=="0"|XX=="1"|XX=="2"|XX=="3"|XX=="4"|XX=="5"|XX=="6"|XX=="7"|XX=="8"|XX=="9"| XX=="-"|XX=="+"|XX=="="|XX==CHR(40)|XX==" "|XX=="|"){

		Switch(Cmd){
		Case("Fin"){  SW=0
		}Case("PrintTime"){  SW=30
		}Case("TrackKey"){   SW=44
		}Case("Key"){ SW=44
		}Case("l"){  SW=11
		}Case("q"){  SW=11
		}Case("v"){  SW=11
		}Case("t"){  SW=11
		}Case("o"){  SW=11
		}Case("@"){  SW=11
		}Case("l_"){ SW=11
		}Case("q_"){ SW=11
		}Case("v_"){ SW=11
		}Case("t_"){ SW=11
		}Case("o_"){ SW=11
		}Default{ GT2_ERR({"コマンド文字リストにない"},Cmd) End;
		}
		} //sw

	}Else{
		Cmd= Cmd+ XX;
	}
  }

  If(SW==2){
	If(XX==CHR(41)){ SW=20; // [)]

	}Else{ Value= Value+ XX
	}
  }
  If(SW==4){ If(XX!=" "){ SW= 1 }
  }
  If(SW==1){
	Switch(XX){
	Case(CHR(40)){ Kigoh= CHR(40); SW=2 // [(]
	}Case("^"){ Value= Value+ XX
	}Case(","){ Value= Value+ XX
	}Case("-"){ Value= Value+ XX
	}Case("+"){ Value= Value+ XX
	}Case("0"){ Value= Value+ XX
	}Case("1"){ Value= Value+ XX
	}Case("2"){ Value= Value+ XX
	}Case("3"){ Value= Value+ XX
	}Case("4"){ Value= Value+ XX
	}Case("5"){ Value= Value+ XX
	}Case("6"){ Value= Value+ XX
	}Case("7"){ Value= Value+ XX
	}Case("8"){ Value= Value+ XX
	}Case("9"){ Value= Value+ XX
	}Default{ SW=10;
	}
	} //sw
  }
  If(SW==44){
	Switch(XX){
	Case(" "){
	}Case("="){ Kigoh=XX; SW=4
	}Case(CHR(40)){ Kigoh=XX; SW=2 // [(]
	}Default{ GT2_ERR({"数値指定ミスの可能性"},Cmd) End;
	}
	} //sw
  }
  If(SW==11){
	Switch(XX){
	Case(" "){
	}Case("^"){ Value=XX; SW=1
	}Case("-"){ Value=XX; SW=1
	}Case("+"){ Value=XX; SW=1
	}Case("0"){ Value=XX; SW=1
	}Case("1"){ Value=XX; SW=1
	}Case("2"){ Value=XX; SW=1
	}Case("3"){ Value=XX; SW=1
	}Case("4"){ Value=XX; SW=1
	}Case("5"){ Value=XX; SW=1
	}Case("6"){ Value=XX; SW=1
	}Case("7"){ Value=XX; SW=1
	}Case("8"){ Value=XX; SW=1
	}Case("9"){ Value=XX; SW=1
	}Case("="){ Kigoh=XX; SW=4
	}Case(CHR(40)){ Kigoh=XX; SW=2 // [(]
	}Default{ GT2_ERR({"数値指定がない可能性"},Cmd) End;
	}
	} //sw
  }

  RR(0)= SW; RR(1)= Cmd; RR(2)= Value; RR(3)= Kigoh;

  Result= RR;

 } //func



 
Function JIKKOH(Array RR){ 

	If(RR(2)==""){
		GT2_ERR({"Jikkoh: 数値がない"},RR(1) ) End;
	}

	//Str Cmd= RR(1);  Str Value= RR(2); Str Kigoh= RR(3);
	Str ZZ= RR(1);

	Switch(RR(3)){
	Case(CHR(40)){	ZZ= ZZ+ RR(3)+ RR(2)+ CHR(41) // [()]
	}Case("="){     ZZ= ZZ+ RR(3)+ RR(2)
	}Case(""){      ZZ= ZZ+ RR(2)
	}
	} //sw

	Result= ZZ;

 } // func
 
Function SPEED_SETTER(Int Spd, Array Fretting){ 


	// 弦特性
	Array V= STRING_ASSGIN("Vel_chk")
	Array Q= STRING_ASSGIN("Q")

	Int Num=0; Str XX= ""; Array RR;

	For(Int i=0; i<6; i++){ //SizeOf(Fret)

		XX= Fretting(i);
		If(XX!="x"){ Num++; RR= (RR,V(i)) }

	} //

	Array QQ; Array PP;

	Switch(Num){
	Case(2){ 	QQ= (Q(2)*Spd,Q(3)*Spd)
			PP= (-Q(2)*Spd,-Q(3)*Spd)

	}Case(3){	QQ= (Q(1)*Spd,Q(2)*Spd,Q(3)*Spd)
			PP= (-Q(1)*Spd,-Q(2)*Spd,-Q(3)*Spd)

	}Case(4){ 	QQ= (Q(1)*Spd,Q(2)*Spd,Q(3)*Spd,Q(4)*Spd)
			PP= (-Q(1)*Spd,-Q(2)*Spd,-Q(3)*Spd,-Q(4)*Spd)

	}Case(5){ 	QQ= (Q(0)*Spd,Q(1)*Spd,Q(2)*Spd,Q(3)*Spd,Q(4)*Spd)
			PP= (-Q(0)*Spd,-Q(1)*Spd,-Q(2)*Spd,-Q(3)*Spd,-Q(4)*Spd)

	}Case(6){ 	QQ= (Q(0)*Spd,Q(1)*Spd,Q(2)*Spd,Q(3)*Spd,Q(4)*Spd,Q(5)*Spd)
			PP= (-Q(0)*Spd,-Q(1)*Spd,-Q(2)*Spd,-Q(3)*Spd,-Q(4)*Spd,-Q(5)*Spd)

	}Default{	QQ= (Q(2)*Spd)
			PP= (-Q(2)*Spd)
	}
	} //sw

	//While(1){ Num--; PP= (-QQ(Num),PP ); If(Num<=0){ Exit; }  } //Zerominus ->PP: 展開済み数式

	Str TT= " t__9%.N("+ QQ+ ") q__9%.N("+ PP+ ") v__9.N("+ RR+ ") " //全弦ミュート

	Result= TT;

} //func

 
Function CUTTING(Str Prn,Str Junban, Str Chd, Array Fret){ 

  Junban= Junban+ " Fin";


  Str XX; Str ZZ; Str TT; Int SW=0; Array RR; Str Cmd; Str Value;

  Int Size= SizeOf(Junban)+1
  For(Int i=1; i< Size; i++){

	XX= MID(Junban,i,1) // i=1~

	If(SW==2){
		RR= SHUTOKU(XX,RR)

		If(RR(0)==10){ SW=1 } // "="
		If(RR(0)==20){ SW=3 } // "()"
		If(RR(0)==30){ SW=5 } // PrintTime
		If(RR(0)==0){ Exit; } // Fin
	}
	If(SW==1){
		ZZ= JIKKOH(RR)
		TT= TT+ ZZ; RR=()
		SW=0
	}
	If(SW==5){
		TT= TT+ RR(1)+ " "; RR=()
		SW=0
	}
	If(SW==6){
		Switch(XX){
		Case(" "){
		}Case("0"){ Value= Value+ XX
		}Case("1"){ Value= Value+ XX
		}Case("2"){ Value= Value+ XX
		}Case("3"){ Value= Value+ XX
		}Case("4"){ Value= Value+ XX
		}Case("5"){ Value= Value+ XX
		}Case("6"){ Value= Value+ XX
		}Case("7"){ Value= Value+ XX
		}Case("8"){ Value= Value+ XX
		}Case("9"){ Value= Value+ XX
		}Default{ SW=4
		}
		} //sw
	}
	If(SW==4){

		Switch(Prn){
		Case("prn"){	 TT= TT+ Chd; Value=""
		}Case("result"){ TT= TT+ Chd; Value=""
		}Default{
			If(Cmd=="u"){ If(Value==""){ Value= #Up_set;   }  Value= "-"+ Value; }
			If(Cmd=="d"){ If(Value==""){ Value= #Down_set; }  }

			TT= TT+  SPEED_SETTER(Value, Fret)+ Chd; Value=""
		}
		} //sw

		SW=0
	}
	If(SW==0){
		Switch(XX){
		Case(" "){
		}Case("|"){
		}Case(";"){
		}Case("<"){ TT= TT+ XX
		}Case(">"){ TT= TT+ XX
		}Case("^"){ TT= TT+ XX
		}Case("."){ TT= TT+ XX
		}Case("r"){ TT= TT+ XX
		}Case("F"){ RR=(3,XX,"",""); SW=2
		}Case("P"){ RR=(3,XX,"",""); SW=2
		}Case("K"){ RR=(3,XX,"",""); SW=2
		}Case("T"){ RR=(3,XX,"",""); SW=2
		}Case("@"){ RR=(3,XX,"",""); SW=2
		}Case("l"){ RR=(3,XX,"",""); SW=2
		}Case("q"){ RR=(3,XX,"",""); SW=2
		}Case("v"){ RR=(3,XX,"",""); SW=2
		}Case("t"){ RR=(3,XX,"",""); SW=2
		}Case("o"){ RR=(3,XX,"",""); SW=2
		}Case("u"){ Cmd=XX; SW=6
		}Case("d"){ Cmd=XX; SW=6
		}Default{ GT2_ERR({"'cut'で定義された文字以外"},XX)
		}
		} //sw
	}
	If(SW==3){
			ZZ= JIKKOH(RR)
			TT= TT+ ZZ; RR=();
			SW=0
	}
  } //

  If(SW!=2){

	GT2_ERR({"CUTTING 実行エラー"},SW)
  }Else{

	Switch(Prn){
	Case("prn"){
	}Case("result"){
	}Case("print"){
		TT= TT+ " q__9=0;t__9=0;v__9=0; "
	}Case("run"){
		TT= TT+ " q__9=0;t__9=0;v__9=0; "
	}
	} //sw

 	Result= TT;
  }
 } //func
 
Function STRING_PICK(Array Fret){ 

	Array RR;

//	SizeOf(Fret)=6
	For(Int i=0;i<6;i++){

		If(Fret(i)!="x"){ RR=(RR,i+1); } // [^] no bunn
	} //

	Result= RR;
 } // func


 
Function GATEENZAN(Array Gate_number){ // arp no gate 

	Int Base_gate= MML(q)

	Int Size= SizeOf(Gate_number)
	For(Int i=0; i<Size; i++){

		If(Gate_number(i)!=0){

			Gate_number(i)= Base_gate* (Gate_number(i)-1); // q100 no bunn "-1"
		}
	} //

	Result= Gate_number;
 } //func


 
Function ARPEGGIO(Str Prn, Str Junban, Array Fret){ 


  Junban= Junban+ " Fin";


  Array S_fret= STRING_PICK(Fret)

  Int S_size= SizeOf(S_fret) // 添字の抽出のため

  If(S_size<3){ GT2_ERR({"弦数が3本未満"},S_size,{"候補コード"},Chd_gbl) End; }


  Array Fret_value=(" ", Fret); // [^] no bunn

  Array T9value= STRING_ASSGIN("T9R")
  Array Q9value= STRING_ASSGIN("Q9R")
  Array V9value= STRING_ASSGIN("V9R")

  Array W_stuck= ( 0,   0,  0,  0,   0,  0,  0); // waon
  Array G_stuck= (-1,  -1, -1, -1,  -1, -1, -1); // gate
  // 弦特性	   ^    r   h   u    3   2   1

  Int Num; //添字
  Int NF=0; Int JJ=0; Int DD=0; Array T9; Array Q9; Array V9;
  Str XX; Str ZZ; Str TT; Str Chk; Int SW=0; Array RR;

  Array Gate_number;

  Int Size= SizeOf(Junban)+1
  For(Int i=1; i< Size; i++){

	XX=MID(Junban,i,1) // i=1~

	If(SW==2){

		RR= SHUTOKU(XX,RR)

		If(RR(0)==10){ SW=1 } // "="
		If(RR(0)==20){ SW=3 } // "()"
		If(RR(0)==30){ SW=5 } // PrintTime
		If(RR(0)==0){ Exit; } // Fin
	}
	If(SW==1){
		ZZ= JIKKOH(RR)
		TT= TT+ ZZ; RR=();
		SW=0
	}
	If(SW==5){
		TT= TT+ RR(1)+ " "; RR=();
		SW=0
	}
	If(SW==4){
		If(Num==0){
			TT= TT+ "r" // [^ -> r] ゲート3が"^"倍で6となり伸び過ぎるため
			Q9=(Q9, 0);
			V9=(V9, 0);

			If(G_stuck(Num)!=-1){ Gate_number(G_stuck(0))= 0 } //ワンサイクル遅らせる
			// G_num(2)..G_num(4) <- G_num(3)を後から追加

		}Else{
			TT= TT+ Fret_value(Num)
			T9=(T9, T9value(Num))
			Q9=(Q9, Q9value(Num))
			V9=(V9, V9value(Num))

			If(G_stuck(Num)!=-1){ Gate_number(G_stuck(Num))= JJ- W_stuck(Num) } //現在値から引く
		}

		G_stuck(Num)= DD; DD++; // ゲートカウンタ
		W_stuck(Num)= JJ; If(NF==0){ JJ++; } // 最後尾の場所
		SW=0
	}
	If(SW==0){
		Switch(XX){
		Case(" "){
		}Case("|"){
		}Case(";"){
		}Case("<"){ TT= TT+ XX
		}Case(">"){ TT= TT+ XX
		}Case("F"){ RR=(3,XX,"",""); SW=2
		}Case("P"){ RR=(3,XX,"",""); SW=2
		}Case("T"){ RR=(3,XX,"",""); SW=2
		}Case("K"){ RR=(3,XX,"",""); SW=2
		}Case("@"){ RR=(3,XX,"",""); SW=2
		}Case("q"){ RR=(3,XX,"",""); SW=2
		}Case("v"){ RR=(3,XX,"",""); SW=2
		}Case("t"){ RR=(3,XX,"",""); SW=2
		}Case("o"){ RR=(3,XX,"",""); SW=2
		}Case("'"){ TT= TT+ XX; If(NF==0){ NF=1 }Else{ NF=0; JJ++; }
		}Case("1"){ SW=4; Num= S_fret(S_size -1)
		}Case("2"){ SW=4; Num= S_fret(S_size -2)
		}Case("3"){ SW=6; Num=3
		}Case("u"){ SW=6; Num=4
		}Case("h"){ SW=6; Num=5
		}Case("r"){ SW=4; Num= S_fret(0)
		}Case("^"){ SW=4; Num= 0 // [q.N(200,0) cr] r ni gate shitei hituyoh
		}Default{ GT2_ERR({"'arp'で定義された文字以外"},XX)
		}
		} //sw
	}
	If(SW==3){
		ZZ= JIKKOH(RR)
		TT= TT+ ZZ; RR=()
		SW=0
	}
	If(SW==6){
		If(S_size< Num+1){

			If(#Sum_chg=="off"){

				GT2_ERR({"候補コード"},Chd_gbl,{"弦は"}+ (Num+1)+ {"つ必要"},S_size,{"問題の指定"},XX) End;

			}Else{
				While(1){
					Num--;
					If(S_size=>Num+1){ Exit; }
				} //

				Switch(Num){
				Case(4){  Chk= "u"; Num= S_fret(S_size -4)
				}Case(3){ Chk= "r"; Num= S_fret(0)
				}Case(2){ Chk= "2"; Num= S_fret(S_size -2)
				}
				} //sw

				If(#Sum_chg=="msg"){

					GT2_ERR({"候補コード"},Chd_gbl,{"弦数"},S_size,{"指定の変更"},XX+ {" -> "}+ Chk)
				}
			}


		}Else{
			Num= S_fret(S_size -Num);
		}

		SW=4;
	}
  } //

  //Print("Junban:"+Junban)   Print("JJ:"+JJ)
  //Print("W_stuck:"+W_stuck) Print("G_stuck:"+G_stuck) // debug


  // 後始末
  For(Int j=0; j<7; j++){ // SizeOf(G_stuck)

	If(G_stuck(j)!=-1){

		If(j==0){
			Gate_number(G_stuck(0))= 0
		}Else{
			Gate_number(G_stuck(j))= JJ- W_stuck(j)
		}
	}
  } //

  //Print("Gate_number:"+Gate_number) // gate hairetsu


  Str SS;
  If(SW!=2){

	GT2_ERR({"ARPEGGIO 実行エラー"},SW)
  } Else{

	Switch(Prn){
	Case("prn"){
		SS= TT;
	}Case("result"){
		SS= TT;
	}Case("print"){
		SS= "q__8.N("+ GATEENZAN(Gate_number)+ ");"
		SS= SS+ "t__9.N("+ T9+ ");"+ "q__9.N("+ Q9+ ");"+ "v__9.N("+ V9+ ");"
		SS= SS+ TT+ " q__8=0;t__9=0;q__9=0;v__9=0; "
	}Case("run"){
		SS= "q__8.N("+ GATEENZAN(Gate_number)+ ");"
		SS= SS+ "t__9.N("+ T9+ ");"+ "q__9.N("+ Q9+ ");"+ "v__9.N("+ V9+ ");"
		SS= SS+ TT+ " q__8=0;t__9=0;q__9=0;v__9=0; "
	}
	} //sw

	Result= SS;
  }
 } //func
 
Function STROKE(Str Prn,Str ZZ,Str Len,Array Fret){ 

	Str TT;
	Switch(Prn){
	Case("prn"){
		TT= ZZ;
	}Case("result"){
		TT= ZZ;
	}Case("run"){

		If(Len==0){ GT2_ERR({"音長がない/"}+ Chd_gbl, Len) End; }

		TT= SPEED_SETTER(Junban,Fret)+ ZZ+ Len+ " q__9=0;t__9=0;v__9=0; "
	}Case("print"){

		If(Len==0){ GT2_ERR({"音長がない/"}+ Chd_gbl, Len) End; }

		TT= SPEED_SETTER(Junban,Fret)+ ZZ+ Len+ " q__9=0;t__9=0;v__9=0; "
	}
	} //sw

	Result= TT;
 } //func
 
Function STRING_ASSGIN(Str TT,""){ // 弦特性 

	Array RR;

	Switch(TT){
	Case("T9R"){ //arp
		Switch(#Device_set){
		Case("MS"){	RR= ( 0,  -4, -3, -2,  -1, -2, -3); }
		Case("GS"){	RR= ( 0,  -3, -2, -2,  -3, -3, -3); } //t
		Default{	RR= ( 0,   1,  2,  2,   1,  1,  0); }
		} //sw

	}Case("Q9R"){
		Switch(#Device_set){
		Case("MS"){	RR= ( 0,   0,  8, 24,  32, 48, 56); }
		Case("GS"){	RR= ( 0,   0,  6, 18,  24, 36, 42); } //q
		Default{	RR= ( 0,   0,  3,  9,  12, 18, 21); }
		} //sw

	}Case("V9R"){
		Switch(#Device_set){
		Case("MS"){	RR= ( 0,   0, -5,-15, -20,-30,-35); }
		Case("GS"){	RR= ( 0,   0, -4,-12, -16,-24,-28); } //v 中域弱く
		Default{	RR= ( 0,   0, -2, -6,  -8,-12,-14); }
				//    ^    r   h   u    3   2   1
		} //sw

	}Case("Vel_chk"){ //cut

		Switch(#Device_set){
		Case("MS"){	RR= (0,-2,-4,  -5, -6, -7); }
		Case("GS"){	RR= (0,-2,-4,  -6, -8,-10); } //v
		Default{	RR= (0,-6,-9, -10,-13,-19); }
		} //sw

	}Case("Q"){

		Switch(#Device_set){
		Case("MS"){	RR= (-2,-2,-1, 0,1,1); }
		Case("GS"){	RR= (-3,-2,-1, 0,0,0); } //t
		Default{	RR= (-2,-2,-1, 0,1,1); }
		} //sw
	}
	} //sw

	Result= RR
} //func
  
// output_MML 
	 
Function FUTOHGOH(Int Num,Str SS,Str LL){ 

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

 
Function FRETMML(Str Selector, Int Barre, Array Fret){ // ab版 

  Array Tuning= OPEN_TUNING(#Tune_set) // o3=n36+  4,9,12+2, 12+7,12+11,24+4

  Str TT; Int NN; Str Layer; Array RR;

  Array NoteChk =("c","d-","d","e-", "e","f","f+","g", "g+","a","b-","b");

  Int Chk=0;

  For(Int i=0; i< 6; i++){

	TT=Fret(i) //for if[0,"x"] kubetsu int 0 str x
	If(Selector=="gousei"){

		If(TT!="x"){
			NN= Barre+ Fret(i)+ Tuning(i);
			If(NN/12!=Chk){ Layer= Layer+ FUTOHGOH(NN/12-Chk,"<",">"); Chk= NN/12 };
			Layer= Layer+ NoteChk(NN%12);
		}

	}Else{ // "hairetsu"

		If(TT!="x"){
			NN= Barre+ Fret(i)+ Tuning(i);
			Layer= Layer+ FUTOHGOH(NN/12,CHR(34),"`")+ NoteChk(NN%12);
			RR= (RR, Layer); Layer=""

		}Else{
			RR= (RR, TT);
		}
	}
  } //

  If(Selector=="gousei"){ Result= "'"+ Layer+ FUTOHGOH(0-Chk,"<",">")+ "'"; }Else{ Result= RR; }

 } //func
 
Function MML_OUT(Str Cnv,Str Junban,Str Barre,Array Fret){ 

	If(Cnv==""){ Cnv= #Mode_set }

	//モード小文字化
	Switch(Cnv){
	Case("Prn"){		Cnv= "prn"
	}Case("PRN"){		Cnv= "prn"
	}Case("Cut"){		Cnv= "cut"
	}Case("CUT"){		Cnv= "cut"
	}Case("Cut_prn"){	Cnv= "cut_prn"
	}Case("Cut_Prn"){	Cnv= "cut_prn"
	}Case("Cut_print"){	Cnv= "cut_print"
	}Case("Cut_Print"){	Cnv= "cut_print"
	}Case("Cut_result"){	Cnv= "cut_result"
	}Case("Cut_Result"){	Cnv= "cut_result"
	}Case("Arp"){		Cnv= "arp"
	}Case("ARP"){		Cnv= "arp"
	}Case("Arp_prn"){	Cnv= "arp_prn"
	}Case("Arp_Prn"){	Cnv= "arp_prn"
	}Case("Arp_print"){	Cnv= "arp_print"
	}Case("Arp_Print"){	Cnv= "arp_print"
	}Case("Arp_result"){	Cnv= "arp_result"
	}Case("Arp_Result"){	Cnv= "arp_result"
	}
	} //sw


	Str Prn; Str Len; Int NN;

	Switch(Cnv){
	Case("std"){		NN= MML(l%) Len= "%"+ NN
				Cnv= "std"; Prn= "run" // ""

	}Case("prn"){		Cnv= "std"; Prn= "prn"
	}Case("print"){		Cnv= "std"; Prn= "print"
	}Case("result"){	Cnv= "std"; Prn= "result"

	}Case("cut"){		Cnv= "cut"; Prn= "run"
	}Case("cut_prn"){	Cnv= "cut"; Prn= "prn"
	}Case("cut_print"){	Cnv= "cut"; Prn= "print"
	}Case("cut_result"){	Cnv= "cut"; Prn= "result"

	}Case("arp"){		Cnv= "arp"; Prn= "run"
	}Case("arp_prn"){	Cnv= "arp"; Prn= "prn"
	}Case("arp_print"){	Cnv= "arp"; Prn= "print"
	}Case("arp_result"){	Cnv= "arp"; Prn= "result"

	}Default{      		Len= Cnv
				Cnv= "std"; Prn= "run" // ^0-9
	// モード不明時ここ通過、あえてエラー
	}
	} //sw


	Str ZZ; Str TT; Str SS; Array RR;

	Switch(Cnv){
	Case("cut"){

		If(Junban==""){ Junban= #Cut_set; }
		Junban= LOOPBREAKER(Junban)

		ZZ= FRETMML("gousei",Barre,Fret)
		TT= CUTTING(Prn, Junban, ZZ, Fret)

		Switch(Prn){
		Case("prn"){
			Print("cut :"+ Junban +" | "+ ZZ); Print(TT)
		}Case("result"){
			Res_gbl= TT; //result出力
		}Case("print"){
			Print(TT)
		}Case("run"){
			TT;
		}
		} //sw

	}Case("arp"){

		If(Junban==""){ Junban= #Arp_set; }
		Junban= LOOPBREAKER(Junban)

		RR= FRETMML("hairetsu",Barre,Fret)
		TT= ARPEGGIO(Prn, Junban, RR)

		Switch(Prn){
		Case("prn"){
			Print("arp :"+ Junban +" | "+ RR); Print(TT)
		}Case("result"){
			Res_gbl= TT; //result出力
		}Case("print"){
			Print(TT)
		}Case("run"){
			TT;
		}
		} //sw

	}Default{

		ZZ= FRETMML("gousei",Barre,Fret)
		TT= STROKE(Prn,ZZ,Len,Fret)

		Switch(Prn){
		Case("prn"){
			For(Int i=0;i<6;i++){ SS= SS+ Fret(i); } //

			Print(""+ Chd_gbl+ " root:"+ Root_gbl+ "  / "+ Barre+ "fret "+ SS)
			Print(TT)
		}Case("result"){
			Res_gbl= TT; //result出力
		}Case("run"){
			TT;
		}Case("print"){
			Print(TT)
		}
		} //sw
	}
	} //sw
 } //func
 
Function Chdprint(Str Junban,Str Cnv,Str Pos){ 


  If(Cnv=="" &Pos==""){ Pos= Junban; Junban= "" } // Posへ移動

  Int Barre; Array Keynote; Int Rootkey; Array Fret; Int Num;

  Str TT; Str XX; Str ZZ= ""
  Int Fret_Chk= 0; Int NN;

  Int Root_gen; Int Gen_Chk=0; Int j=0; //gen number


  Int Size= SizeOf(Pos)+1
  For(Int i=1; i< Size; i++){

	XX=MID(Pos,i,1) // i=1~

	If(Gen_Chk<6){

		Switch(XX){
		Case(" "){
		}Case("r"){ Root_gen= 6-j; ZZ= ZZ+"0"; j++;
		}Case("s"){ Root_gen= 6-j; ZZ= ZZ+"x"; j++;
		}Case("x"){ j++; ZZ= ZZ+XX
		}Case("+"){ ZZ= XX
		}Case("-"){ ZZ= XX
		}Case("0"){ j++; ZZ= ZZ+ XX
		}Case("1"){ j++; ZZ= ZZ+ XX
		}Case("2"){ j++; ZZ= ZZ+ XX
		}Case("3"){ j++; ZZ= ZZ+ XX
		}Case("4"){ j++; ZZ= ZZ+ XX
		}Case("5"){ j++; ZZ= ZZ+ XX
		}Case("6"){ j++; ZZ= ZZ+ XX
		}Case("7"){ j++; ZZ= ZZ+ XX
		}Case("8"){ j++; ZZ= ZZ+ XX
		}Case("9"){ j++; ZZ= ZZ+ XX
		}Case("a"){ j++; ZZ= ZZ+"10"
		}Case("b"){ j++; ZZ= ZZ+"11"
		}Case("c"){ j++; ZZ= ZZ+"12"
		}Default{ GT2_ERR({"フレット指定文字以外です"},XX)
		}
		} //sw

		If(j!=Gen_Chk){
			NN= ZZ;  If(NN<Fret_Chk){ Fret_Chk= NN; }

			Fret=(Fret,ZZ); ZZ=""; Gen_Chk= j;
		}

	}Else{
		Switch(XX){
		Case(" "){
		}Case("|"){
		}Case("N"){ ZZ= XX
		}Case("A"){ ZZ= XX
		}Case("B"){ ZZ= XX
		}Case("C"){ ZZ= XX
		}Case("D"){ ZZ= XX
		}Case("E"){ ZZ= XX
		}Case("F"){ ZZ= XX
		}Case("G"){ ZZ= XX
		}Case("b"){ ZZ= ZZ+ XX
		}Case("#"){ ZZ= ZZ+ XX
		}Case("p"){ ZZ= ZZ+ XX
		}Default{ GT2_ERR({"ナット、キー文字以外です"},XX)
		}
		} //sw
	}
  } //

  If(SizeOf(Fret)!=6){ GT2_ERR({"弦が6つ必要"},SizeOf(Fret) ) End; }

	Switch(ZZ){
	Case("N"){  Barre=0
	}Case("A"){  Rootkey=9
	}Case("A#"){ Rootkey=10
	}Case("Ap"){ Rootkey=10
	}Case("Bb"){ Rootkey=10
	}Case("B"){  Rootkey=11

	}Case("C"){  Rootkey=0
	}Case("C#"){ Rootkey=1
	}Case("Cp"){ Rootkey=1
	}Case("Db"){ Rootkey=1
	}Case("D"){  Rootkey=2
	}Case("D#"){ Rootkey=3
	}Case("Dp"){ Rootkey=3
	}Case("Eb"){ Rootkey=3
	}Case("E"){  Rootkey=4

	}Case("F"){  Rootkey=5
	}Case("F#"){ Rootkey=6
	}Case("Fp"){ Rootkey=6
	}Case("Gb"){ Rootkey=6
	}Case("G"){  Rootkey=7
	}Case("G#"){ Rootkey=8
	}Case("Gp"){ Rootkey=8
	}Case("Ab"){ Rootkey=8
	}Default{ GT2_ERR({"[A,N]存在しないキー指定、もしくナット文字がない"},ZZ)
	}
	} //sw


  If(ZZ!="N"){

	Switch(Root_gen){
	Case(3){ Keynote=(5,6,7,8,9, 10,11,0,1,2,3,4)	// 3G
	}Case(4){ Keynote=(10,11,0,1,2, 3,4,5,6,7,8,9)	// 4D
	}Case(5){ Keynote=(3,4,5,6,7, 8,9,10,11,0,1,2)	// 5A
	}Case(6){ Keynote=(8,9,10,11,0, 1,2,3,4,5,6,7)	// 6E
	}Default{ GT2_ERR({"[3-6]ルート弦指定 r,s がありません"},Root_gen) End;
	}
	} //sw

	Barre= Keynote(Rootkey)

	If(Fret_Chk+Barre<0){ Barre= Barre+12 }
  }

  Array GG= ("Nut","1E","2B","3G","4E","5A","6E")

  Chd_gbl = Pos;		// Global
  Root_gbl= GG(Root_gen);	// Global

  MML_OUT(Cnv,Junban,Barre,Fret)

  Result= Res_gbl;	// Global

 } //func


   
//	guitar2.h ------ 

	
Function OPEN_TUNING(Str Tune,""){ 

	Array Tuning;

	Switch(Tune){
	Case("dadgad"){    Tune= "DADGAD"
	}Case("Nashville"){ Tune= "nashville"
	}Case("Nash"){      Tune= "nashville"
	}Case("nash"){      Tune= "nashville"
	}Case("DropD"){     Tune= "dropD"
	}Case("OpenDm"){    Tune= "openDm"
	}Case("OpenD"){     Tune= "openD"
	}Case("OpenGm"){    Tune= "openGm"
	}Case("OpenG"){     Tune= "openG"
	}Case("Nomal"){     Tune= "nomal"
	}
	} //sw

	Switch(Tune){
	Case("DADGAD"){	    Tuning=( 2, 9,14,19,21,26) // DAD GAD
	}Case("nashville"){ Tuning=(16,21,26,31,23,28) // >EAD G<BE
	}Case("dropD"){     Tuning=( 2, 9,14,19,23,28) // DAD GBE
	}Case("openDm"){    Tuning=( 2, 9,14,17,21,26) // DAD FAD
	}Case("openD"){     Tuning=( 2, 9,14,18,21,26) // DAD F#AD
	}Case("openGm"){    Tuning=( 2, 7,14,19,22,26) // DGD GBbD
	}Case("openG"){     Tuning=( 2, 7,14,19,23,26) // DGD GBD
	}Case("nomal"){     Tuning=( 4, 9,14,19,23,28) // EA>D GB>E
	}Default{ GT2_ERR({"チューニングリストにない Tune"},Tune) End;
	}
	} //sw

	If(SizeOf(Tuning)!=6){ GT2_ERR({"Open_tuning; [6]調弦数が不足"},SizeOf(Tuning)) End; }

	Result= Tuning;
 } //func
 
Function ROOTHOSEI(Int NN, Int DD, Array Fret){ // hairetsu "x" sashikae 

	DD=6-DD-1;  //SizeOf(Fret)

	Array RR;
	For(Int i=0; i< 6; i++){

		If(i<NN |i>DD){

			RR=(RR,"x")
		}Else{

			RR=(RR,Fret(i))
		}
	} //

	Result= RR;
} //func

 
Function BARRE_CHK(Array FF){ 

	Int j= 0;
	For(Int i=0; i< 6; i++){

		If(j> FF(i)){

			j= FF(i)
		}
	} //

	Result= j;
 } //func
 
Function PI_CHDLIST(Int Rootkey,Str Chdname,Str Junban,Str Cnv,Str Vce){ 


	Int Barre= 0; Int Num= 0;
	Str Number= 0; Array Root_hosei= (0,0);
	Array Fret; Array Keynote; Array Arr; Array Brr;

/*		1E ``e||   |   |   |
		2B    ||``c|   |   |
		3G  `g||   |   |   |
		4D    ||   | `e|   |
		5A    ||   |   | `c|
		6E o3e||   |   |   |
		   N   1F      3F
					C Maj. Position
					Barre= 0;
					Fret=(0,3,2, 0,1,0);
*/

  If(Vce==""){ //指定がない場合

	Switch(Chdname){

	// Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5") def.

	// Arr= ("5","5","5","4","5",  "5","6","6","6",  "6","5","5") sumi
	// 4D:1 | 5A:1 | 6E:2 バレー相対補正値


	Case("Maj"){	Arr= ("c5A","5","4","5","6",  "6","6","g6E","6",  "5","5","5")
	}Case("Maj7"){	Arr= ("c5A","5","4","5","6",  "f4D","6","g6E","6",  "5","5","5")
	}Case("Maj79"){	Arr= ("5","5","5","4","6",  "6","6","6","6",  "6","5","5")
	}Case("M7s11"){	Arr= ("c5A","5","5","5","5",  "4","6","6","6",  "5","5","5")
	}Case("M713"){	Arr= ("5","5","5","5","6",  "4","6","6","6",  "5","5","5")
	}Case("M913"){	Arr= ("5","5","4","5","5",  "5","5","6","6",  "6","6","6")

	}Case("min"){	Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")
	}Case("min7"){	Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")
	}Case("min79"){	Arr= ("5","5","5","5","4",  "5","6","6","6",  "5","5","5")
	}Case("m711"){	Arr= ("5","5","4","5","6",  "6","g-6E","6","6",  "6","6","5")
	}Case("m911"){	Arr= ("5","5","4","5","5",  "6","6","6","6",  "5","5","5")

	}Case("7th"){	Arr= ("c5A","5","4","5","6",  "6","6","g6E","6",  "5","5","b5A")
	}Case("7b9"){	Arr= ("5","5","5","4","6",  "6","6","6","6",  "6","5","5")
	}Case("79"){	Arr= ("5","5","5","4","6",  "6","6","6","6",  "6","5","5")
	}Case("7s9"){	Arr= ("5","5","5","4","e6E",  "6","6","6","6",  "6","5","5")
	}Case("7s11"){	Arr= ("5","5","4","5","5",  "6","6","6","6",  "6","5","5")
	}Case("7b13"){	Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")
	}Case("713"){	Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")
	}Case("b9s11"){	Arr= ("5","5","5","4","5",  "5","6","6","6",  "6","5","5")

	}Case("Maj7b5"){ Arr= ("5","5","4","5","5",  "6","6","6","6",  "5","5","5")
	}Case("min7b5"){ Arr= ("5","5","4","5","5",  "6","6","6","6",  "5","5","5")
	}Case("m7b511"){ Arr= ("5","5","4","5","5",  "6","6","6","6",  "6","5","5")
	}Case("7b5"){	Arr= ("5","5","4","5","5",  "6","6","6","6",  "5","5","5")

	}Case("Maj7s5"){ Arr= ("5","5","5","5","e6E",  "4","6","6","6",  "6","6","6")
	}Case("min7s5"){ Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")


	}Case("6th"){	Arr= ("c5A","5","4","5","e6E",  "f6E","6","g6E","6",  "5","5","5")
	}Case("69"){	Arr= ("5","5","5","4","5",  "6","6","6","6",  "6","5","5")
	}Case("m6"){	Arr= ("c5A","5","4","5","6",  "f6E","6","6","6",  "a5A","5","b5A")
	}Case("m69"){	Arr= ("5","5","5","5","4",  "6","g-6E","6","6",  "6","6","5")


	}Case("mM7"){	Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")
	}Case("mM7b5"){	Arr= ("5","5","5","5","6",  "f4D","6","6","6",  "6","6","b5A")
	}Case("mM7s5"){	Arr= ("c5A","5","5","5","e6E",  "4","6","6","6",  "6","6","6")
	}Case("mM79"){	Arr= ("5","5","5","5","4",  "6","6","6","6",  "6","6","5")


	}Case("add9"){	Arr= ("c5A","5","d4D","5","e6E",  "6","6","g6E","6",  "5","5","5")
	}Case("add911"){Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")
	}Case("madd9"){ Arr= ("5","5","5","5","4",  "6","6","6","6",  "5","5","5")
	}Case("madd911"){Arr= ("5","5","5","5","6",  "6","4","6","6",  "5","5","5")

	}Case("sus2"){	Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")
	}Case("6sus2"){	Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")
	}Case("sus4"){	Arr= ("c5A","5","4","5","6",  "6","6","g6E","6",  "5","5","5")
	}Case("7sus4"){	Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")
	}Case("9sus4"){	Arr= ("5","5","4","5","5",  "5","6","6","6",  "5","5","5")
	}Case("13sus4"){Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")


	}Case("dim"){	Arr= ("4","4","4","4","4",  "4","4","4","4",  "4","4","4")
			Brr= ("3","4","2","3","4",  "2","3","4","2",  "3","4","2")
			Rootkey= Brr(Rootkey)

	}Case("dim7"){	Arr= ("5","5","4","4","5",  "6","4","6","6",  "4","5","5")
			Brr= ("0","1","2","3","10",  "5","6","7","8",  "3","10","11")
			Rootkey= Brr(Rootkey)


	}Case("aug"){	Arr= ("5","5","d4D","5","4",  "4","4","4","4",  "4","4","4")
			Brr= ("0","1","2","3","4",  "5","6","7","8",  "5","6","7")
			Rootkey= Brr(Rootkey)

	}Case("aug7"){	Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")
	}Case("pw2"){	Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")
	}Case("pw3"){	Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5")

	}Default{
		GT2_ERR({"ローフレットにないコード Chdname"},Chdname)
	}
	} //sw

	Vce= Arr(Rootkey)
  }


	Switch(Vce){
	// オープンpos.指定
	Case("a5A"){ Number= Vce
	}Case("b5A"){ Number= Vce
	}Case("c5A"){ Number= Vce
	}Case("d4D"){ Number= Vce
	}Case("e6E"){ Number= Vce
	}Case("f4D"){ Number= Vce
	}Case("f6E"){ Number= Vce
	}Case("g-6E"){ Number= Vce
	}Case("g6E"){ Number= Vce

	// クローズドpos.指定
	}Case("4#"){  Number= "4D"; Root_hosei= (1,0)
	}Case("4"){   Number= "4D"; Root_hosei= (2,0)
	}Case("4b"){  Number= "4D"; Root_hosei= (3,0)
	}Case("4#x"){ Number= "4D"; Root_hosei= (1,1)
	}Case("4x"){  Number= "4D"; Root_hosei= (2,1)
	}Case("4bx"){ Number= "4D"; Root_hosei= (3,1)

	}Case("5#"){  Number= "5A"; Root_hosei= (0,0)
	}Case("5"){   Number= "5A"; Root_hosei= (1,0)
	}Case("5b"){  Number= "5A"; Root_hosei= (2,0)
	}Case("5#x"){ Number= "5A"; Root_hosei= (0,1)
	}Case("5x"){  Number= "5A"; Root_hosei= (1,1)
	}Case("5bx"){ Number= "5A"; Root_hosei= (2,1)

	}Case("6#"){  Number= "6E"; Root_hosei= (0,0)
	}Case("6"){   Number= "6E"; Root_hosei= (0,0)
	}Case("6b"){  Number= "6E"; Root_hosei= (1,0)
	}Case("6#x"){ Number= "6E"; Root_hosei= (0,1)
	}Case("6x"){  Number= "6E"; Root_hosei= (0,1)
	}Case("6bx"){ Number= "6E"; Root_hosei= (1,1)
	}Default{
		GT2_ERR({""}+ Vce+ {"ポジション指定にない Chdname"},Chdname)
	}
	} //sw


	Switch(Number){
	Case("4D"){	// D Form : Root 4string

		Keynote=(10, 11,0,1,2, 3,4,5,6,7,8,9); // 4D
		Barre= Keynote(Rootkey)

	}Case("5A"){	// B Form : Root 5string

		Keynote=(3, 4,5,6,7, 8,9,10,11,0,1,2); // 5A
		Barre= Keynote(Rootkey)

	}Case("6E"){	// F Form : Root 6string

		Keynote=(8, 9,10,11,0, 1,2,3,4,5,6,7); // 6E
		Barre= Keynote(Rootkey)
	//}Default{ //これは不可
	}
	} #sw


	Switch(Chdname){
	Case("Maj"){

		Switch(Number){
		Case("c5A"){ Fret=("x",3,2, 0,1,0) }
		Case("g6E"){ Fret=(3,2,0, 0,0,3) }
		Case("6E"){ Fret=(0,2,2, 1,0,0) }
		Case("5A"){ Fret=(0,0,2, 2,2,0) }
		Case("4D"){ Fret=("x",0,0, 2,3,2) }
		} #sw

	}Case("Maj7"){

		Switch(Number){
		Case("c5A"){ Fret=("x",3,2, 0,0,0) }
		Case("f4D"){ Fret=("x","x",3, 2,1,0) }
		Case("g6E"){ Fret=(3,2,0, 0,0,2) }
		Case("6E"){ Fret=(0,2,1, 1,0,0) }
		Case("5A"){ Fret=(0,0,2, 1,2,0) }
		Case("4D"){ Fret=("x",0,0, 2,2,2) }
		} #sw

	}Case("Maj79"){ // 4D:1 | 5A:0 | 6E:1

		Switch(Number){
		Case("6E"){ Fret=(0,"x",1, 1,0,2) }
		Case("5A"){ Fret=("x",0,-1, 1,0,0) } // kitsui
		Case("4D"){ Fret=("x","x",0, -1,2,0) }
		} #sw


	}Case("M7s11"){ // 4D:3 | 5A:0 | 6E:1

		Switch(Number){
		Case("c5A"){ Fret=(0,3,2, 0,0,2) }
		Case("6E"){ Fret=(0,"x",1, 1,-1,"x") }
		Case("5A"){ Fret=("x",0,1, 1,2,"x") }
		Case("4D"){ Fret=("x","x",0, -1,-3,-3) }
		} #sw

	}Case("M713"){ // 4D:3 | 5A:0 | 6E:0

		Switch(Number){
		Case("6E"){ Fret=(0,"x",1, 1,2,"x") }
		Case("5A"){ Fret=("x",0,"x", 1,2,2) }
		Case("4D"){ Fret=("x","x",0, -1,0,-3) }
		} #sw

	}Case("M913"){ // 4D:0 | 5A:3 | 6E:3

		Switch(Number){
		Case("6E"){ Fret=(0,"x",1, -1,-3,-3) }
		Case("5A"){ Fret=("x",0,-3, -1,-3,-3) }
		Case("4D"){ Fret=("x","x",0, 4,2,0) }
		} #sw



	}Case("min"){

		Switch(Number){
		Case("6E"){ Fret=(0,2,2, 0,0,0) }
		Case("5A"){ Fret=(0,0,2, 2,1,0) }
		Case("4D"){ Fret=("x",0,0, 2,3,1) }
		} #sw


	}Case("min7"){

		Switch(Number){
		Case("6E"){ Fret=(0,2,0, 0,0,0) }
		Case("5A"){ Fret=(0,0,2, 0,1,0) }
		Case("4D"){ Fret=("x",0,0, 2,1,1) }
		} #sw


	}Case("min79"){ // 4D:2 | 5A:2 | 6E:0

		Switch(Number){
		Case("6E"){ Fret=(0,2,0, 0,0,2) }
		Case("5A"){ Fret=("x",0,-2, 0,0,0) }
		Case("4D"){ Fret=("x","x",0, -2,1,0) } // kitsui
		} #sw

	}Case("m711"){ // 4D:0 | 5A:2 | 6E:0

		Switch(Number){
		Case("g-6E"){ Fret=(2,0,2, 2,0,0) }
		Case("6E"){ Fret=(0,0,0, 0,0,0) }
		Case("5A"){ Fret=("x",0,-2, 0,-2,-2) }
		Case("4D"){ Fret=("x","x",0, 0,1,1) }
		} #sw

	}Case("m911"){ // 4D:0 | 5A:0 | 6E:1

		Switch(Number){
		Case("6E"){ Fret=(0,0,0, -1,0,"x") }
		Case("5A"){ Fret=(0,0,0, 0,0,0) }
		Case("4D"){ Fret=("x",0,0, 0,1,0) }
		} #sw



	}Case("7th"){

		Switch(Number){
		Case("c5A"){ Fret=("x",3,2, 3,1,0) }
		Case("g6E"){ Fret=(3,2,0, 0,0,1) }
		Case("b5A"){ Fret=("x",2,1, 2,0,2) }

		Case("6E"){ Fret=(0,2,0, 1,0,0) }
		Case("5A"){ Fret=(0,0,2, 0,2,0) }
		Case("4D"){ Fret=("x",0,0, 2,1,2) }
		} #sw

	}Case("7b9"){ // 4D:1 | 5A:1 | 6E:0

		Switch(Number){
		Case("6E"){ Fret=(0,2,0, 1,0,1) }
		Case("5A"){ Fret=("x",0,-1, 0,-1,"x") }
		Case("4D"){ Fret=("x","x",0, -1,1,-1) }
		} #sw

	}Case("79"){ // 4D:1 | 5A:1 | 6E:0

		Switch(Number){
		Case("6E"){ Fret=(0,2,0, 1,0,2) }
		Case("5A"){ Fret=("x",0,-1, 0,0,0) }
		Case("4D"){ Fret=("x","x",0, -1,1,0) }
		} #sw

	}Case("7s9"){ // 4D:1 | 5A:1 | 6E:1

		Switch(Number){
		Case("e6E"){ Fret=(0,2,"x", 1,3,3) }
		Case("6E"){ Fret=(0,-1,0, 0,0,"x") }
		Case("5A"){ Fret=("x",0,-1, 0,1,"x") }
		Case("4D"){ Fret=("x","x",0, -1,1,1) }
		} #sw

	}Case("7s11"){ // 4D:0 | 5A:1 | 6E:1

		Switch(Number){
		Case("6E"){ Fret=(0,"x",0, 1,-1,"x") }
		Case("5A"){ Fret=("x",0,"x", 0,2,-1) }
		Case("4D"){ Fret=("x",0,0, 1,1,2) }
		} #sw

	}Case("7b13"){

		Switch(Number){
		Case("6E"){ Fret=(0,"x",0, 1,1,"x") }
		Case("5A"){ Fret=(0,0,2, 0,2,1) }
		Case("4D"){ Fret=("x","x",0, 3,1,2) }
		} #sw

	}Case("713"){

		Switch(Number){
		Case("6E"){ Fret=(0,2,0, 1,2,0) }
		Case("5A"){ Fret=(0,0,2, 0,2,2) }
		Case("4D"){ Fret=("x","x",0, 4,1,2) }
		} #sw

	}Case("b9s11"){ // 4D:1 | 5A:1 | 6E:2

		Switch(Number){
		Case("6E"){ Fret=(0,1,0, -2,"x","x") }
		Case("5A"){ Fret=("x",0,1, 0,-1,-1) }
		Case("4D"){ Fret=("x","x",0, 1,1,-1) }
		} #sw




	}Case("Maj7b5"){ // 4D:0 | 5A:0 | 6E:1

		Switch(Number){
		Case("6E"){ Fret=(0,"x",1, 1,-1,"x") }
		Case("5A"){ Fret=("x",0,1, 1,2,"x") }
		Case("4D"){ Fret=("x","x",0, 1,2,2) }
		} #sw

	}Case("min7b5"){ // 4D:0 | 5A:0 | 6E:1

		Switch(Number){
		Case("6E"){ Fret=(0,"x",0, 0,-1,"x") }
		Case("5A"){ Fret=("x",0,1, 0,1,"x") }
		Case("4D"){ Fret=("x","x",0, 1,1,1) }
		} #sw

	}Case("m7b511"){ // 4D:0 | 5A:0 | 6E:1

		Switch(Number){
		Case("6E"){ Fret=(0,0,0, "x",-1,"x") }
		Case("5A"){ Fret=("x",0,0, 0,"x",-1) }
		Case("4D"){ Fret=("x","x",0, 1,1,3) }
		} #sw

	}Case("7b5"){ // 4D:0 | 5A:0 | 6E:1

		Switch(Number){
		Case("6E"){ Fret=(0,"x",0, 1,-1,"x") }
		Case("5A"){ Fret=("x",0,1, 0,2,"x") }
		Case("4D"){ Fret=("x","x",0, 1,1,2) }
		} #sw




	}Case("Maj7s5"){ // 4D:3 | 5A:3 | 6E:0

		Switch(Number){
		Case("e6E"){ Fret=(0,"x",1, 1,1,0) }
		Case("6E"){ Fret=(0,"x",1, 1,1,"x") }
		Case("5A"){ Fret=("x",0,-1, -2,-3,-3) }
		Case("4D"){ Fret=("x","x",0, -1,-1,-3) }
		} #sw

	}Case("min7s5"){

		Switch(Number){
		Case("6E"){ Fret=(0,3,0, 0,1,0) }
		Case("5A"){ Fret=("x",0,"x", 0,1,1) }
		Case("4D"){ Fret=("x","x",0, 3,1,1) }
		} #sw




	}Case("6th"){ // 4D:0 | 5A:0 | 6E:1

		Switch(Number){
		Case("c5A"){ Fret=("x",3,2, 2,1,0) }
		Case("e6E"){ Fret=(0,2,2, 1,2,0) }
		Case("f6E"){ Fret=(1,3,0, 2,3,"x") }
		Case("g6E"){ Fret=(3,2,2, 0,0,0) }

		Case("6E"){ Fret=(0,"x",-1, 1,0,"x") }
		Case("5A"){ Fret=("x",0,2, 2,2,2)   }
		Case("4D"){ Fret=("x",0,0, 2,0,2) }
		} #sw

	}Case("69"){ // 4D:1 | 5A:1 | 6E:1

		Switch(Number){
		Case("6E"){ Fret=(0,-1,-1, -1,0,0) }
		Case("5A"){ Fret=("x",0,-1, -1,0,0) }
		Case("4D"){ Fret=("x","x",0, -1,0,0) }
		} #sw

	}Case("m6"){

		Switch(Number){
		Case("c5A"){ Fret=("x",3,1, 2,1,0) }
		Case("f6E"){ Fret=(1,"x",0, 1,1,1) }
		Case("a5A"){ Fret=("x",0,2, 2,1,2) }
		Case("b5A"){ Fret=("x",2,0, 1,0,2) }
		Case("6E"){ Fret=(0,2,2, 0,2,0) }
		Case("5A"){ Fret=("x",0,2, "x",1,2) }
		Case("4D"){ Fret=("x",0,0, 2,0,1) }
		} #sw

	}Case("m69"){ // 4D:2 | 5A:2 | 6E:1

		Switch(Number){
		Case("g-6E"){ Fret=(2,0,1, 1,2,"x") }
		Case("6E"){ Fret=(0,"x",-1, 0,0,2) }
		Case("5A"){ Fret=("x",0,-2, -1,0,"x") }
		Case("4D"){ Fret=("x","x",0, -2,0,0) }
		} #sw





	}Case("mM7"){

		Switch(Number){
		Case("6E"){ Fret=(0,2,1, 0,0,0) }
		Case("5A"){ Fret=(0,0,2, 1,1,0) }
		Case("4D"){ Fret=("x","x",0, 2,2,1) }
		} #sw

	}Case("mM7b5"){

		Switch(Number){
		Case("f4D"){ Fret=("x","x",3, 1,0,0) }
		Case("b5A"){ Fret=("x",2,0, 3,0,1) }
		Case("6E"){ Fret=(0,1,1, 0,"x","x") }
		Case("5A"){ Fret=("x",0,1, 1,1,"x") }
		Case("4D"){ Fret=("x","x",0, 1,2,1) }
		} #sw

	}Case("mM7s5"){ // 4D:3 | 5A:3 | 6E:0

		Switch(Number){
		Case("c5A"){ Fret=("x",3,1, 1,0,"x") }
		Case("e6E"){ Fret=(0,3,1, 0,1,0) }
		Case("6E"){ Fret=(0,"x",1, 0,1,"x") }
		Case("5A"){ Fret=("x",0,-2, -2,-3,"x") }
		Case("4D"){ Fret=("x","x",0, -2,-1,-3) }
		} #sw

	}Case("mM79"){ // 4D:2 | 5A:2 | 6E:0

		Switch(Number){
		Case("6E"){ Fret=(0,2,1, 0,0,2) }
		Case("5A"){ Fret=("x",0,-2, 1,0,"x") }
		Case("4D"){ Fret=("x","x",0, -2,2,0) }
		} #sw




	}Case("add9"){

		Switch(Number){
		Case("c5A"){ Fret=("x",3,2, 0,3,0) }
		Case("d4D"){ Fret=("x","x",0, 2,3,0) }
		Case("e6E"){ Fret=(0,2,2, 1,0,2) }
		Case("g6E"){ Fret=(3,2,0, 0,0,5) }
		Case("6E"){ Fret=(0,2,2, 1,0,2) } // kitsui
		Case("5A"){ Fret=(0,0,2, 2,0,0) }
		Case("4D"){ Fret=("x",0,0, 2,3,0) }
		} #sw

	}Case("add911"){ // Alhambra chord

		Switch(Number){
		Case("6E"){ Fret=(0,0,2, 1,0,2) }
		Case("5A"){ Fret=(0,0,0, 4,2,0) }
		Case("4D"){ Fret=("x",0,0, 0,5,2) }
		} #sw

	}Case("madd9"){ // 4D:2 | 5A:0 | 6E:0

		Switch(Number){
		Case("6E"){ Fret=(0,2,2, 0,0,2) }
		Case("5A"){ Fret=("x",0,2, 4,1,0) }
		Case("4D"){ Fret=("x","x",0, -2,-2,0) }
		} #sw

	}Case("madd911"){ // 4D:4 | 5A:0 | 6E:0

		Switch(Number){
		Case("6E"){ Fret=(0,0,4, 0,0,0) }
		Case("5A"){ Fret=("x",0,0, 4,1,0) }
		Case("4D"){ Fret=("x","x",0, -2,-4,0) }
		} #sw



	}Case("sus2"){

		Switch(Number){
		Case("6E"){ Fret=(0,2,4, 4,0,0) }
		Case("5A"){ Fret=(0,0,2, 2,0,0) }
		Case("4D"){ Fret=("x",0,0, 2,3,0) }
		} #sw

	}Case("6sus2"){

		Switch(Number){
		Case("4D"){ Fret=("x",0,0, 4,3,0) }
		Case("5A"){ Fret=(0,0,4, 2,0,0) }
		Case("6E"){ Fret=(0,2,2, "x",2,2) }
		} #sw

	}Case("sus4"){

		Switch(Number){
		Case("c5A"){ Fret=("x",3,3, 0,1,1) }
		Case("g6E"){ Fret=(3,3,0, 0,1,3) }
		Case("6E"){ Fret=(0,2,2, 2,0,0) }
		Case("5A"){ Fret=(0,0,2, 2,3,0) }
		Case("4D"){ Fret=("x",0,0, 2,3,3) }
		} #sw

	}Case("7sus4"){

		Switch(Number){
		Case("6E"){ Fret=(0,2,0, 2,0,0) }
		Case("5A"){ Fret=(0,0,2, 0,3,0) }
		Case("4D"){ Fret=("x",0,0, 2,1,3) }
		} #sw

	}Case("9sus4"){ // 4D:0 | 5A:0 | 6E:2

		Switch(Number){
		Case("6E"){ Fret=(0,0,0, -1,-2,-2) }
		Case("5A"){ Fret=(0,0,0, 0,0,0) }
		Case("4D"){ Fret=("x",0,0, 0,1,0) }
		} #sw

	}Case("13sus4"){

		Switch(Number){
		Case("6E"){ Fret=(0,2,0, 2,2,0) }
		Case("5A"){ Fret=(0,0,2, 0,3,2) }
		Case("4D"){ Fret=("x",0,0, 0,4,1,3) }
		} #sw



	}Case("dim"){ // tokusyu

		Switch(Number){
		Case("6E"){ Fret=(0,"x",2, 0,-1,"x") }
		Case("5A"){ Fret=("x",0,1, 2,1,"x") }
		Case("4D"){ Fret=("x","x",0, 1,0,1) }
		} #sw


	}Case("dim7"){ // tokusyu

		Switch(Number){
		Case("6E"){ Fret=(0,"x",-1, 0,-1,0) }
		Case("5A"){ Fret=(-1,0,1, -1,1,-1) }
		Case("4D"){ Fret=("x","x",0, 1,0,1) }
		} #sw

	}Case("aug"){ // tokusyu

		Switch(Number){
		Case("d4D"){ Fret=("x","x",0, 3,3,2) }
		Case("6E"){ Fret=(0,"x",2, 1,1,0) }
		Case("5A"){ Fret=("x",0,-1, -2,-2,"x") }
		Case("4D"){ Fret=("x","x",0, -1,-1,-2) }
		} #sw

	}Case("aug7"){

		Switch(Number){
		Case("6E"){ Fret=(0,"x",0, 1,1,0) }
		Case("5A"){ Fret=("x",0,3, 0,2,1) }
		Case("4D"){ Fret=("x","x",0, 3,1,2) }
		} #sw



	}Case("pw2"){

		Switch(Number){
		Case("6E"){ Fret=(0,2,"x", "x","x","x") }
		Case("5A"){ Fret=("x",0,2, "x","x","x") }
		Case("4D"){ Fret=("x","x",0, 2,"x","x") }
		} #sw

	}Case("pw3"){

		Switch(Number){
		Case("6E"){ Fret=(0,2,2, "x","x","x") }
		Case("5A"){ Fret=("x",0,2, 2,"x","x") }
		Case("4D"){ Fret=("x","x",0, 2,3,"x") }
		} #sw

	}Default{
		GT2_ERR({""}+ Number+ {"にないコード Chdname"},Chdname)
	}
	} //sw


	Root_gbl= Number // Global


	Num= BARRE_CHK(Fret)

	If(Barre< Num){ Barre= Barre+ 12 }

	Fret= ROOTHOSEI(Root_hosei(0),Root_hosei(1),Fret)

	If(SizeOf(Fret)!=6){

		GT2_ERR({"PI_CHDLIST: 弦が6つ必要"},SizeOf(Fret) )
		End;
	}

	MML_OUT(Cnv,Junban,Barre,Fret)

 } //func

  	
// Chord Functionマクロ 


#Gt2_Chd= {Function #?1#?3(Str Spd,Str Lgh,Str Vce){ Chd_gbl="#?1#?3"; PI_CHDLIST("#?2","#?4", Spd,Lgh,Vce) Result=Res_gbl; }}
// "#?2","#?4"が必要

#Chd_list={
#Gt2_Chd("C",  "0",#Chd_N,#Chd_Q)
#Gt2_Chd("Cs", "1",#Chd_N,#Chd_Q);#Gt2_Chd("Db", "1",#Chd_N,#Chd_Q)
#Gt2_Chd("D",  "2",#Chd_N,#Chd_Q)
#Gt2_Chd("Ds", "3",#Chd_N,#Chd_Q);#Gt2_Chd("Eb", "3",#Chd_N,#Chd_Q)
#Gt2_Chd("E",  "4",#Chd_N,#Chd_Q)
#Gt2_Chd("F",  "5",#Chd_N,#Chd_Q)
#Gt2_Chd("Fs", "6",#Chd_N,#Chd_Q);#Gt2_Chd("Gb", "6",#Chd_N,#Chd_Q)
#Gt2_Chd("G",  "7",#Chd_N,#Chd_Q)
#Gt2_Chd("Gs", "8",#Chd_N,#Chd_Q);#Gt2_Chd("Ab", "8",#Chd_N,#Chd_Q)
#Gt2_Chd("A",  "9",#Chd_N,#Chd_Q)
#Gt2_Chd("As","10",#Chd_N,#Chd_Q);#Gt2_Chd("Bb","10",#Chd_N,#Chd_Q)
#Gt2_Chd("B", "11",#Chd_N,#Chd_Q)
 } // "C","0"が必要

// 互換性のため
#Chd_N={M9}	#Chd_Q={Maj79}	#Chd_list;
#Chd_N={m9}	#Chd_Q={min79}	#Chd_list;
#Chd_N={9}	#Chd_Q={79}	#Chd_list;

#Chd_N={711}	#Chd_Q={7sus4}	#Chd_list;
#Chd_N={913}	#Chd_Q={69}	#Chd_list;
#Chd_N={s9b13}	#Chd_Q={min7s5}	#Chd_list;
#Chd_N={7s5}	#Chd_Q={aug7}	#Chd_list;


#Chd_N={}	#Chd_Q={Maj}	#Chd_list; // Major
#Chd_N={M7}	#Chd_Q={Maj7}	#Chd_list; // M7,m7が似てるため
#Chd_N={M79}	#Chd_Q={Maj79}	#Chd_list;
#Chd_N={M7s11}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={M713}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={M913}	#Chd_Q=#Chd_N	#Chd_list;

#Chd_N={m}	#Chd_Q={min}	#Chd_list; // minor
#Chd_N={m7}	#Chd_Q={min7}	#Chd_list;
#Chd_N={m79}	#Chd_Q={min79}	#Chd_list;
#Chd_N={m711}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={m911}	#Chd_Q=#Chd_N	#Chd_list;

#Chd_N={7}	#Chd_Q={7th}	#Chd_list;
#Chd_N={7b9}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={79}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={7s9}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={7s11}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={7b13}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={713}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={b9s11}	#Chd_Q=#Chd_N	#Chd_list;


#Chd_N={M7b5}	#Chd_Q={Maj7b5}	#Chd_list;
#Chd_N={m7b5}	#Chd_Q={min7b5}	#Chd_list;
#Chd_N={m7b511}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={7b5}	#Chd_Q=#Chd_N	#Chd_list;

#Chd_N={M7s5}	#Chd_Q={Maj7s5}	#Chd_list;
#Chd_N={m7s5}	#Chd_Q={min7s5}	#Chd_list;

#Chd_N={mM7}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={mM7b5}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={mM7s5}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={mM79}	#Chd_Q=#Chd_N	#Chd_list;

#Chd_N={6}	#Chd_Q={6th}	#Chd_list;
#Chd_N={69}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={m6}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={m69}	#Chd_Q=#Chd_N	#Chd_list;


#Chd_N={add9}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={add911}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={madd9}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={madd911}#Chd_Q=#Chd_N	#Chd_list;

#Chd_N={sus2}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={6sus2}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={sus4}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={7sus4}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={9sus4}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={13sus4}	#Chd_Q=#Chd_N	#Chd_list;

#Chd_N={dim}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={dim7}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={aug}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={aug7}	#Chd_Q=#Chd_N	#Chd_list;

#Chd_N={pw2}	#Chd_Q=#Chd_N	#Chd_list;
#Chd_N={pw3}	#Chd_Q=#Chd_N	#Chd_list;
 
//　以上プログラム部、終わり 



 
/*　　詳細説明書 


　より詳しい説明及び、
　使い方のノウハウなどを載せました



	
　□テンションコード 


//　コード呼出しの仕様について


　- テンションのセオリー -


　　ピアノは、9度の場合ルートを省きますが、
　　ギターでは普通ルートは省きません。

　　9,11,13であっても省略は、5度としました。
　　M913のような6和音では、きついフォームに限り3度も省きます。

　　響きがしっかりしているテンションのみ、セレクトしました。
　　ポリトーナルなテンションについては、Chdprintを使用して下さい。



　/ 通例とは違うコードについて /

　　通常 add9は、sus2のコードが代用されますが、
　　add9には、3度を付加しています。

　　Csus2 + "e" -> Cadd9


　/ 同じ構成のコード /

　　以下のコードは、同じものとなっており、
　　内部で置き換えています。

　　AM9		= AM79
　　Am9		= Am79
　　A9		= A79

　　A711	= A7sus4
　　A913	= A69
　　As9b13	= Am7s5
　　A7s5	= Aaug7


　/ 構成音が同じである代理コード /

　　G b9#11は、裏コードと同じです。

　　G b9s11  = Db7


　　以下は、短三度上のコードと同じです。
　　響きの好きなほうを選択して下さい。

　　Am7      = C6
　　Am711    = C69
　　Am7b5    = Cm6
　　Am7b511  = Cm69


　　mM7b5は、長2度下の代理コードM7と同じです。

　　CmM7b5   = BbM7


　　m911は、11thによりm3が省かれるため、
　　長2度下の代理コードadd9と同じです。

　　Cm911    = Bbadd9


　　7b9は響きに難があり、機能はdim7と変わらないため、
　　構成音が近い、半音上の代理コードdim7を使うほうが、
　　良いかもしれません。

　　G7b9    -> G#dim7
 
　□演奏技法との兼ね合い 



//　ギターらしくするための、
//　フレット上における演奏技法のコツです

	
　- ハイコードポジションで運指 - 


　　通常、開放弦を使ったローコードで弾くのであれば
　　ルート弦は自動的に選択されますが、

　　ハイコードポジションでの運指をする場合、
　　ルート弦の指定で対応することになります



　　例えば、| D | A | G などのコードチェンジであれば、

	1E ||   |   |   |   |   |
	2B ||   |   |   |   |   |
	3G ||   |   |   |   |   |
	4D ||   |   |   |   |   |
	5A ||   |   |   |   |  d|
	6E ||   |   |  g|   |  a|
	  N    1   2   3F  4   5F


　　D(,,5) A(,,6) G(,,6) とポジション指定を付けます。
　　これで、d>a>gとルート弦を変えて演奏します。

　　Fletを維持しつつ、5弦から 6弦へと
　　4度のルート移動を入れることで、それらしくなります


 
　- ハイコード指定における弦数の加減 - 


　　ハイコードで、1弦、またはルート弦を省く、
　　またはドミナントボトムになる低音弦の追加など、
　　細かい指定をしたい場合、以下のオプションで対応します。



　　指定の基本スタイルは以下のとおりです。

	"#"付きで、あれば、低音弦を追加
	"b"付きは、ルート弦を省く
	"x"が付くと、1弦をミュートします

　　"4#"  | 4弦ルート 5弦付き、         5,4,3,2,1弦を弾く
　　"4x"  | 4弦ルート ミュート1弦、     4,3,2弦のみ
　　"4b"  | 4弦ルート ルート弦省き、    3,2,1弦のみ
　　"4bx" | 4弦ルート ミュート1弦、ルート弦省き、3,2弦のみ


　　D(,,"5#x") A(,,"6x") G(,,"6x") のように記述します


　　押さえ方のバリエーション一覧

　　6,6x, 6b,6bx |  5#,5#x, 5,5x, 5b,5bx | 4#,4#x, 4,4x, 4b,4bx


 
　- つま弾き指定の仕様 - 


　　コード構成音から見た、各弦の対応表です。



//　　r	| 6弦相当 : (ルート弦となります)
//　　h	| 5弦相当 : (五度のハーモニーや四度であることが多い )
//　　u	| 4弦相当 : (八度のユニゾンや長短七度が多い )
//　　3	| 3弦相当 : (四度や長短三度が多い)
//　　2	| 2弦　　 : (ハーモニーや六度の担当が多い)
//　　1	| 1弦　　 : (九度のテンションかユニゾンが多い)


　　基本的に、細い弦の優先度が高い、
　　アルペジオを模した仕様となっており、
　　弦数に応じて、rhuなどを自動でアサインされます。
　　一番低い弦が、必ず、rとなります。

　　ポジションが6つは、rhu321、
　　ポジションが5つは、 ru321、
　　以下、r321, r21と、使う弦が減る仕様です。



  
　□実践的な凡例 



//　より実践的な使用法を載せました


	
// Cutting / 16beatカッティング 


　　ゲートや音量、相対オクターブを駆使して、
　　シンコペーションやブラッシングを、
　　入れることで疾走感を出します。


　■16beatロックカッティングの例


　　Include(guitar2.h); @28 l16 q88 o3 v101 Time=(!4)
　　[
　　Dm7("d1",cut,4)'>db-<'
　　Gm7("q88 v+36 d2u3  q18 v-36 [3 d1u2]",cut,"5x")
　　Gm7("q88 v+36 d2^d2",cut,"5x")
　　Dm7("u2^^",cut,4)
　　]


 
// Arpeggio / アルペジオのバリエーション 


　　コルトレーンチェンジとII-V解決による、
　　アルペジオパターン例です。


　■短三度上の7thとII-Vモーション


　　Include(guitar2.h); @27 o3 q108 Time=(!4)

　　#A= "[r 321 u 321]"		l8 EbM7( #A,arp) // P1
　　#B= "[r 323 1 232]"		l8  Am7( #B,arp) // P2
　　#C= "[r 312 u 312]"		l8   D7( #C,arp, 5) // P3 5弦ルート
　　#D= "[r 3'21'3 u 3'21'3]"	l8  GM7( #D,arp) // P4
　　#E= "['r21'3'21'3 'u21'3'21'3]"	l8  Bb7( #E,arp) // P5
　　#F= "[r 321 ^232]"		l8  EbM7(#F,arp) // P6
　　#G= "['r1'232 'u1'232]"	l8  Fs7( #G,arp) // P7
　　#H= "[r 32123 u 32123]"	l12 BM7( #H,arp) // P8
　　#I= "[r32 h32 u1]"		l8  Fm7( #I,arp) // P9
　　#J= "[r32 u12 32]"		l8  Bb7( #J,arp) // P10
　　#K= "['r2'3u 1^:23^]^^^"	l8  DsM7(#K,arp) // P11


//　参考URL
　-- http://guitar.zashiki.com/practice/gd03.html


 
// Arpeggio / ボサノバパターン 


　　濁りのあるテンションを
　　入れると、よりそれらしくなります。


　■基本ボサノバリズム


　　Include(guitar2.h); @27 v101 l8 q88 o3 Time=(!4)

　　AM9(   " 'u13'^'123'^ r'13'^ "       ,arp,"5")
　　Asdim7(" '123'  u'13'^'13' r^'123'^ ",arp,"5#")
　　Bm9(   " 'u13'^'123'^ r'13'^ "       ,arp,"5#")
　　E9(    " '123'  u'13'^'13' r^'123'^ ",arp, 6)

//　参考URL
　-- https://www.youtube.com/watch?v=89EALHQy3T0


 
// Chdprint"N" / ナットモードでの分数コード 


　　6弦ドミナントペダルを付けた、
　　2弦の押さえのみチェンジする、定番の内声クリシェです。

　　フレットを"8765"と変化することで、コードが変化します。


　■ペダル付きクリシェ内声移動の例


　　Include(guitar2.h)
　　@26 o3 q96 v99 l8 Time=(!4)
　　#Mode_set="cut"

　　Chdprint("557 785 N") // Dsus4/A
　　Chdprint("557 775 N") // D/A
　　Chdprint("557 765 N") // Dm/A
　　Chdprint("557 755 N") // Dadd9/A

　　@25 q108 v106
　　#Mode_set="arp"

　　Chdprint("557 785 N") // Dsus4/A
　　Chdprint("557 775 N") // D/A
　　Chdprint("557 765 N") // Dm/A
　　Chdprint("557 755 N") // Dadd9/A


 
// Chdprint"A" / キー指定モードでのテンション 


　　カポタスト的に、Aルートを固定したまま、
　　数字を適当に並び変え、テンション化したものです。


　■テンションの濁り例


　　Include(guitar2.h)

　　@26 o3 q96 v99 l8 Time=(!4)
　　#Mode_set="cut"

　　Chdprint("r22 102 A")  // Aadd9
　　Chdprint("r22 010 A")  // F/A
　　Chdprint("r20 202 A")  // A9sus4
　　Chdprint("r20 013 A")  // Am7 b13

　　@25 q108 v106
　　#Mode_set="arp"

　　Chdprint("r22 102 A")  // Aadd9
　　Chdprint("r22 010 A")  // F/A
　　Chdprint("r20 202 A")  // A9sus4
　　Chdprint("r20 013 A")  // Am7 b13


　　コードネームは後付けとなってます。//出力で確認

 
// #Tune_set / ボトルネック奏法 


　　まず、オープンチューニングにします。

　　#Tune_set= "openG"; と入力し、
　　開放でG が鳴るように、変更して下さい



　■スライドギター、ボトルネック奏法の例


　　Include(guitar2.h)
　　#Tune_set= "openG"
　　@27 l8 o3 q108

　　BR=7
　　Sub{ p%.T(0,8191,!8^16) r16 rr  r2 p%.T(8191,0,!8) }
　　Sub{ rrr M.T(88,16,!2) }
　　Chdprint({ d^d^ ^^^^ ^u^^ },cut,"xr0 000  D" })


  
　□スクリプトの概要について 



//　guitar2.hスクリプトの、
//　必要と思われる概要のみここに記しました


	
　- ストローク / guitar.h互換 - 



//　guitar.hとの完全な互換は、厳密にはあえて取ってません。

　F#の場合、gt.hではFpと記載しますが、gt2.hでは、Fsと記載します。
　pとbが良く似ているため変更しました。

　guitar.hはコードが読み込まれると、最終的に o5が書き込まれます。
　guitar2.hでは混乱を避けるため、コードが読み込まれても、
　o指定値は変えてはいません。



 
　- カッティング Cutting - 



//　各弦、またはストローク方向によって、
//　タイミングと、音量変化を加えてます


　guitar.hは、"t"のみでバラつきを再現しています。
　これだと何となく、演奏的に違和感があったため、guitar2.hでは、
　"t__9%"と"q__9%"の相対値によるゲート長補正を追加しました。

　これによりコードのポジションチェンジ時、自動的に
　全弦ミュートがかかり、ギターらしい音が再現されます。

　Dm      D    　　　　Dm      D
　------|======　　　　------|======
　  ----|--    　→　　  ----|
　      |  ====　　　　      |  ====
　    --|----==　　　      --|    ==

　また数ステップですが、guitar.hより演奏タイミングを早めています。
　もしタイミングを遅らせたいときは、tでの調整や、
　r%1のような休符を追加してください


 
　- アルペジオ Arpeggio - 


//　アルペジオの模式図


　　通常アルペジオの、つま弾きの模式図


　　C7({ r32123 r123 }) C7({ r123 r32123 })

　　| C7:         | C7:
　      1-----1---|  1-----1---
　     2-2-----2--|   2---2-2--
　    3---3-----3-|    3-3---3-
　  R-------R-----|R----R------


　　途切れのないアルペジオの、内部ループ展開模式図


　　C7({ [r32123 r123] })

　　| C7:
　      1-----1---|----1-----1---
　     2-2-----2--|---2-2-----2--
　    3---3-----3-|--3---3-----3-
　  R-------R-----|R-------R-----



//　アルペジオにおける、ゲート長の仕様

　　'ac^^'e のような、cだけのばす和音指定は、仕様上できません。

　　アルペジオでは、先行指定でゲートを割り付けている仕様上、
　　^ は、内部で、r に変換してしまいます。

　　'ac^'e -> 'acr'e // このように出力します


　　もし、変換せず、^ のまま処理すると、
　　サクラのタイは、ゲート長を変更することで対処するため、
　　以下の様になってしまい、狙った出力を得られないためです


　　    1---|        |　　　    1---|        |
　　2-------|----    |　→　2-------|--------|--------|
　　r-------|        |　　　r-------|        |







  
*/ 


  
