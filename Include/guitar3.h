// title:        "guitar3.h" ver6.6.0 
// description:  diagramMML変換付きguitar支援スクリプト (24/6 /21 )
// keywords:     SAKURA Function     Powered by 04coreworks
 
// マクロ設定 

#Device_set= "XG" // [GM(old)| GS | XG(new)]

#Mode_set= "stk" // [stroke]

// stk		| prn		| print		| result		| lyric		|
// cut		| cut_prn		| cut_print		| cut_result	| cut_lyric		|
// arp		| arp_prn		| arp_print		| arp_result	| arp_lyric		|


　#Cut_set= "d^du ^udu"	// "cut"の演奏デフォルト
　#Arp_set= "r121  2321"	// "arp"の演奏デフォルト


　#Down_set= "2"	// "cut"のダウンバラつき
　#Up_set  = "2"	// "cut"のアップバラつき

  #Sum_chg= "on"	// サム指定自動チェンジ

// on | off

　#Arp_number= "1"	// arp指定切替

// 2:	654321
// 1:	r54321
// 0:	rhu321

　#Tune_set= "nomal" // [regular]チューニング

// nomal 		| openG		| openGm 	| openD		|
// openDm 	| dropD 		| nash(ville)	| DADGAD	|
// drop642	| drop531		|


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

	
Function Loop_Breaker(Str TT,""){ //再帰型 

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
						AB3= Loop_Breaker(AB3) SW=4; Chk=0
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
						AB2= Loop_Breaker(AB2) SW=3; Chk=0
					}Else{
						AB2= AB2+ XX
					}
				}Else{
					SW=3
				}

		}Case("]"){	If(Chk>0){
					If(Num==0){
						AB2= Loop_Breaker(AB2) SW=4; Chk=0
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

// Print( Loop_Breaker("q[e:[h:y]]t[[w:[k]]:r]u[a[b[:c]]][z]q") )
// q ehyhe t wkkwr wkkw u abcbc abcbc zzq


 
Function Speed_Setter(Int Spd, Array Fretting){ 


	// 弦特性
	Array V= String_Assgin("V")
	Array Q= String_Assgin("Q")

	Array QQ; Array PP; Array RR
	Str SS= ""

	For(Int i=0; i<6; i++){ //SizeOf(Fret)

		SS= Fretting(i) // "x",1,0 ため

		If(SS !="x"){ // 展開済み数式 -> ループ化
			RR= (RR,V(i))
			PP= (PP,Q(i)*Spd)
			QQ= (QQ,-Q(i)*Spd)
		}
	} //

	Str TT= "t__9%.N("+ PP+ ")q__9%.N("+ QQ+ ")v__9.N("+ RR+ ")" //全弦ミュート

	Result= TT
 } //func
 
Function Cutting(Str Lmm, Str Line, Str Chd, Array Fret){ 

  Lmm= Lmm+ "$";


  Int SW= 0; Str XX= ""; Str Output= ""

  Str ZZ= ""; Int Count= 0

  Str Cmd= ""; Str Length= ""; Str Value= ""

  Int Size= SizeOf(Lmm)+1
  For(Int i=1; i< Size; i++){

	XX= MID(Lmm,i,1) // i=1~

	If(SW==3){ // 外部コマンド
		Switch(Count){
		Case(0){
			If(XX==CHR(41)){ // [ ) ]

				Output= Output+ ZZ
				SW= 5 // [ ) ]

			}Else{
				If(XX==CHR(40)){ // [ ( ] ネスト対策
					Count++;
				}
				ZZ= ZZ+ XX
			}

		}Default{

			If(XX==CHR(41)){ // [ ) ]
				Count--;
			}
			If(XX==CHR(40)){ // [ ( ]
				Count++;
			}
			ZZ= ZZ+ XX
		}
		} //sw
	}
	If(SW==25){ // m^,length
		Switch(XX){
		Case(" "){
		}Case("0"){ Length= Length+ XX
		}Case("1"){ Length= Length+ XX
		}Case("2"){ Length= Length+ XX
		}Case("3"){ Length= Length+ XX
		}Case("4"){ Length= Length+ XX
		}Case("5"){ Length= Length+ XX
		}Case("6"){ Length= Length+ XX
		}Case("7"){ Length= Length+ XX
		}Case("8"){ Length= Length+ XX
		}Case("9"){ Length= Length+ XX

		}Default{
			Output= Output+ Length
			SW= 0
		}
		} //sw
	}
	If(SW==20){ // du,length
		Switch(XX){
		Case(" "){
		}Case("0"){ Length= Length+ XX
		}Case("1"){ Length= Length+ XX
		}Case("2"){ Length= Length+ XX
		}Case("3"){ Length= Length+ XX
		}Case("4"){ Length= Length+ XX
		}Case("5"){ Length= Length+ XX
		}Case("6"){ Length= Length+ XX
		}Case("7"){ Length= Length+ XX
		}Case("8"){ Length= Length+ XX
		}Case("9"){ Length= Length+ XX

		}Case(","){ SW= 8 // -> sw= 15
		}Default{ SW= 10
		}
		} //sw
	}
	If(SW==15){ //バラつき
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

		}Default{ SW= 10
		}
		} //sw
	}
	If(SW==10){

		Switch(Line){

		Case("prn"){	 Output= Output+ Chd
		}Case("result"){ Output= Output+ Chd

		}Default{
			If(Cmd=="up"){

				If(Value==""){ Value= #Up_set }
				Value= "-"+ Value
			}
			If(Cmd=="down"){

				If(Value==""){ Value= #Down_set }
			}

			Output= Output+ Speed_Setter(Value, Fret)+ Chd+ Length
		}
		} //sw

		SW= 0
	}
	If(SW==0){
		Switch(XX){
		Case("$"){ Exit;
		}Case(CHR(40)){ SW=3; ZZ= "" // [ ( ]

		}Case(" "){
		}Case("|"){
		}Case(";"){
		}Case(CHR(9)){ // tab
		}Case(CHR(10)){ // LF
		}Case(CHR(13)){ // CR

		}Case("."){ Output= Output+ "."
		}Case("^"){ Output= Output+ "^"; Length= ""; SW= 25
		}Case("r"){ Output= Output+ "r"; Length= ""; SW= 25
		}Case("m"){ Output= Output+ "r"; Length= ""; SW= 25

		}Case("u"){ Cmd= "up"; Length= ""; Value=""; SW= 20
		}Case("d"){ Cmd= "down"; Length= ""; Value=""; SW= 20

		}Default{ GT2_ERR({"'cut'で定義された文字以外"},XX)
		}
		} //sw
	}
	If(SW==5){
		SW= 0 // sw=0 Default ukai
	}
	If(SW==8){
		SW= 15
	}
  } //

  If(SW!=0){
	GT2_ERR({"Cutting 実行エラー"},SW)
  }Else{
	Result= Output
  }
 } //func
 
Function Number_output(){ 

	Array Num= ()

	Switch(#Arp_number){
	Case("0"){
		Num= ("r", "h", "u", "3", "2", "1" )
	}Case("1"){
		Num= ("r", "5", "4", "3", "2", "1" )
	}Case("2"){
		Num= ("6", "5", "4", "3", "2", "1" )
	}
	} //sw

	 Result= Num;
 } //func
 
Function Fret_Assgin(Array RR){ 

	Array SS= Number_output()

	Array VV= ()
	For(Int i= 0; i< 6; i++){

		If("x" != RR(i) ){
			VV= (VV, SS(i) )
		}
	} //

	Result= VV;
 } //func
 
Function Join_Arr(Array Arr){ 

  Str SS= ""
  Int Num= SizeOf(Arr)

  For(Int i= 0; i< Num; i++){

	SS= SS+ Arr(i)
  } //

  Result= SS;

 } //func
 
Function Arpeggio(Str Lmm, Str Line, Array Fret){ 

	 Lmm= Lmm+ "$";

	Array Num= Number_output()

	Array Assgin= Fret_Assgin(Fret)
	Int Assgin_length= SizeOf(Assgin)



	If(Assgin_length< 3){ GT2_ERR({"弦数が3本未満"},Cnt,{"候補コード"},Chd_gbl) End; }

	Str TT= ""
	Array Cmd= ("","","", "","","") //外部コマンド
	Int Count= 0

	Array Add= ()
	Int Togle= 0

	Array RR= ("r","r","r", "r","r","r") // 出だしの休符
	Array S0= ()
	Array S1= ()
	Array S2= ()
	Array S3= ()
	Array S4= ()
	Array S5= ()

	Int ERR= 0

	Int SW= 0
	Str SS= ""
	Str Rtn= "" // prn出力

	Int Length= SizeOf(Lmm)+1
	For(Int i=1; i< Length; i++){

		SS= MID(Lmm,i,1) // i=1~

		If(SW==3){ // 外部コマンド // 差し替えの前

			Switch(Count){
			Case(0){
				If(SS==CHR(41)){ // [ ) ]

					Rtn= Rtn+ TT
					Cmd= (Cmd(0)+ TT,Cmd(1)+ TT,Cmd(2)+ TT, Cmd(3)+ TT,Cmd(4)+ TT,Cmd(5)+ TT)
					SW= 5 // [ ) ]

				}Else{
					If(SS==CHR(40)){ // [ ( ] ネスト対策
						Count++;
					}
					TT= TT+ SS
				}

			}Default{

				If(SS==CHR(41)){ // [ ) ]
					Count--;
				}
				If(SS==CHR(40)){ // [ ( ]
					Count++;
				}
				TT= TT+ SS
			}
			} //sw
		}

		Switch(Assgin_length){ // 差し替え
		Case(3){
			Switch(SS){
			Case(Num(5)){	SS= Assgin(2)
			}Case(Num(4)){	SS= Assgin(1)
			}Case(Num(3)){	If(#Sum_chg=="off"){ ERR= 1 }Else{ SS= Assgin(0) }
			}Case(Num(2)){	If(#Sum_chg=="off"){ ERR= 1 }Else{ SS= Assgin(0) }
			}Case(Num(1)){	If(#Sum_chg=="off"){ ERR= 1 }Else{ SS= Assgin(0) }
			}Case(Num(0)){	SS= Assgin(0)
			}
			} //sw
		}Case(4){
			Switch(SS){
			Case(Num(5)){	SS= Assgin(3)
			}Case(Num(4)){	SS= Assgin(2)
			}Case(Num(3)){	SS= Assgin(1)
			}Case(Num(2)){	If(#Sum_chg=="off"){ ERR= 1 }Else{ SS= Assgin(0) }
			}Case(Num(1)){	If(#Sum_chg=="off"){ ERR= 1 }Else{ SS= Assgin(0) }
			}Case(Num(0)){	SS= Assgin(0)
			}
			} //sw
		}Case(5){
			Switch(SS){
			Case(Num(5)){	SS= Assgin(4)
			}Case(Num(4)){	SS= Assgin(3)
			}Case(Num(3)){	SS= Assgin(2)
			}Case(Num(2)){	SS= Assgin(1)
			}Case(Num(1)){	If(#Sum_chg=="off"){ ERR= 1 }Else{ SS= Assgin(0) }
			}Case(Num(0)){	SS= Assgin(0)
			}
			} //sw
		}
		} //sw

		If(ERR == 1){ GT2_ERR({"候補コード"},Chd_gbl,{"弦数"},Assgin_length,{"問題の指定"},SS) End; }

		If(SW==15){ // 和音部
			Switch(SS){
			Case("'"){	SW= 10
			}Case(Num(5)){	Add= (Add, 5)
			}Case(Num(4)){	Add= (Add, 4)
			}Case(Num(3)){	Add= (Add, 3)
			}Case(Num(2)){	Add= (Add, 2)
			}Case(Num(1)){	Add= (Add, 1)
			}Case(Num(0)){	Add= (Add, 0)
			}
			} //sw
		}

		If(SW==10){
			For(Int j= 0; j< 6; j++){

				For(Int k= 0; k< SizeOf(Add); k++){

					If(j == Add(k)){	Togle= 1 }
				} //

				If(Togle == 1){
					Switch(j){
					Case(5){	Rtn= Rtn+ Fret(5); S5= (S5, Cmd(5)+ Fret(5)); Cmd(5)= ""; RR(5)= "^"
					}Case(4){	Rtn= Rtn+ Fret(4); S4= (S4, Cmd(5)+ Fret(4)); Cmd(4)= ""; RR(4)= "^"
					}Case(3){	Rtn= Rtn+ Fret(3); S3= (S3, Cmd(5)+ Fret(3)); Cmd(3)= ""; RR(3)= "^"
					}Case(2){	Rtn= Rtn+ Fret(2); S2= (S2, Cmd(5)+ Fret(2)); Cmd(2)= ""; RR(2)= "^"
					}Case(1){	Rtn= Rtn+ Fret(1); S1= (S1, Cmd(5)+ Fret(1)); Cmd(1)= ""; RR(1)= "^"
					}Case(0){	Rtn= Rtn+ Fret(0); S0= (S0, Cmd(5)+ Fret(0)); Cmd(0)= ""; RR(0)= "^"
					}
					} //sw
				}Else{
					Switch(j){
					Case(5){	S5= (S5, RR(5))
					}Case(4){	S4= (S4, RR(4))
					}Case(3){	S3= (S3, RR(3))
					}Case(2){	S2= (S2, RR(2))
					}Case(1){	S1= (S1, RR(1))
					}Case(0){	S0= (S0, RR(0))
					}
					} //sw
				}

				Togle= 0
			} //

			Rtn= Rtn+ "'"
			SW= 5 // [ ']
		}
		If(SW==0){

			Switch(SS){
			Case("$"){

				S0= (S0, Cmd(0)) // 残処理
				S1= (S1, Cmd(1))
				S2= (S2, Cmd(2))
				S3= (S3, Cmd(3))
				S4= (S4, Cmd(4))
				S5= (S5, Cmd(5))

				Exit; //ループブレイク

			}Case(" "){
			}Case("|"){
			}Case(";"){
			}Case(CHR(9)){ // tab
			}Case(CHR(10)){ // LF
			}Case(CHR(13)){ // CR

			}Case(CHR(40)){ SW=3; TT= "" // [ ( ]

			}Case("m"){ // ALL mute

				Rtn= Rtn+ "r"
				RR= ("r","r","r", "r","r","r")
				S0= (S0, RR(0))
				S1= (S1, RR(1))
				S2= (S2, RR(2))
				S3= (S3, RR(3))
				S4= (S4, RR(4))
				S5= (S5, RR(5))

			}Case("^"){ // Tai

				Rtn= Rtn+ "^"
				S0= (S0, RR(0))
				S1= (S1, RR(1))
				S2= (S2, RR(2))
				S3= (S3, RR(3))
				S4= (S4, RR(4))
				S5= (S5, RR(5))

			}Case("'"){
				Rtn= Rtn+ "'"
				SW= 15
				Add= ()

			}Case(Num(5)){

				Rtn= Rtn+ Fret(5)
				S0= (S0, RR(0))
				S1= (S1, RR(1))
				S2= (S2, RR(2))
				S3= (S3, RR(3))
				S4= (S4, RR(4))
				S5= (S5, Cmd(5)+ Fret(5)); Cmd(5)= ""; RR(5)= "^"

			}Case(Num(4)){

				Rtn= Rtn+ Fret(4)
				S0= (S0, RR(0))
				S1= (S1, RR(1))
				S2= (S2, RR(2))
				S3= (S3, RR(3))
				S4= (S4, Cmd(4)+ Fret(4)); Cmd(4)= ""; RR(4)= "^"
				S5= (S5, RR(5))

			}Case(Num(3)){

				Rtn= Rtn+ Fret(3)
				S0= (S0, RR(0))
				S1= (S1, RR(1))
				S2= (S2, RR(2))
				S3= (S3, Cmd(3)+ Fret(3)); Cmd(3)= ""; RR(3)= "^"
				S4= (S4, RR(4))
				S5= (S5, RR(5))

			}Case(Num(2)){

				Rtn= Rtn+ Fret(2)
				S0= (S0, RR(0))
				S1= (S1, RR(1))
				S2= (S2, Cmd(2)+ Fret(2)); Cmd(2)= ""; RR(2)= "^"
				S3= (S3, RR(3))
				S4= (S4, RR(4))
				S5= (S5, RR(5))

			}Case(Num(1)){

				Rtn= Rtn+ Fret(1)
				S0= (S0, RR(0))
				S1= (S1, Cmd(1)+ Fret(1)); Cmd(1)= ""; RR(1)= "^"
				S2= (S2, RR(2))
				S3= (S3, RR(3))
				S4= (S4, RR(4))
				S5= (S5, RR(5))

			}Case(Num(0)){

				Rtn= Rtn+ Fret(0)
				S0= (S0, Cmd(0)+ Fret(0)); Cmd(0)= ""; RR(0)= "^"
				S1= (S1, RR(1))
				S2= (S2, RR(2))
				S3= (S3, RR(3))
				S4= (S4, RR(4))
				S5= (S5, RR(5))


			}Default{ GT2_ERR({"'arp'で定義された文字以外"},SS)
			}
			} //sw
		}

		If(SW==5){
			SW= 0
		}
	} //


	Array Join= (Join_Arr(S0),Join_Arr(S1),Join_Arr(S2), Join_Arr(S3),Join_Arr(S4),Join_Arr(S5))

	Array Q9= String_Assgin("Q9")
	Array V9= String_Assgin("V9")
	Array T9= String_Assgin("T9")

	Str Output= ""
	Str XX= ""
	Int n= 0

	If(SW!=0){
		GT2_ERR({"Arpeggio 実行エラー"},SW)

	}Else{

		Switch(Line){
		Case("prn"){
			Output= Rtn
		}Case("result"){
			Output= Rtn
		}Default{
			For(Int m= Assgin_length-1; m=> 0; m--){

				Switch(Assgin(m)){
				Case(Num(5)){ n= 5
				}Case(Num(4)){ n= 4
				}Case(Num(3)){ n= 3
				}Case(Num(2)){ n= 2
				}Case(Num(1)){ n= 1
				}Case(Num(0)){ n= 0
				}
				} //sw

				 XX= "q__9="+Q9(n)+ "v__9="+V9(n)+ "t__9="+ T9(n)

				If(m > 0){
					Output= Output+ XX+ "S{"+ Join(n)+ "}"
				}Else{
					Output= Output+ XX+ Join(n) // Subなし
				}
			} //
		}
		} //sw

	 	Result= Output
	}
 } //func
 
Function String_Assgin(Str TT,""){ // 弦特性 

	Array RR;

	Switch(TT){
	Case("T9"){ //arp
		Switch(#Device_set){
		Case("XG"){	RR= (-2, -2, -1,  1, 2, 2); } // 演奏モデル //ルート側の低域の立上がり遅れ分速く弾く
		Case("GS"){	RR= (-3, -2, -2,  -3, -3, -3); } //t
		Default{		RR= (1,  2,  2,   1,  1,  0); }
		} //sw

	}Case("Q9"){ //arp
		Switch(#Device_set){
		Case("XG"){	RR= (-6,-5,-4,  -2, -1, 0); } // 構造モデル
		Case("GS"){	RR= (0, 6, 18,  24, 36, 42); } //q
		Default{		RR= (0,  3,  9,  12, 18, 21); }
		} //sw

	}Case("V9"){ //arp
		Switch(#Device_set){
		Case("XG"){	RR= (0, -4,-8, -32,-40,-48); } // 演奏モデル //ルート音リリース長く
		Case("GS"){	RR= (0, -4,-12, -16,-24,-28); } //v 中域弱く
		Default{		RR= (0, -2, -6,  -8,-12,-14); }
						//r   h   u    3   2   1
		} //sw

	}Case("V"){ //cut

		Switch(#Device_set){
		Case("XG"){	RR= (0,-1,-3,  -4, -6, -7); }
		Case("GS"){	RR= (0,-2,-4,  -6, -8,-10); } //v
		Default{	RR= (0,-6,-9, -10,-13,-19); }
		} //sw

	}Case("Q"){ //cut

		Switch(#Device_set){
		Case("XG"){	RR= (-3,-3,-2, -1,0,0); }
		Case("GS"){	RR= (-3,-2,-1, 0,0,0); } //t
		Default{	RR= (-2,-2,-1, 0,1,1); }
		} //sw
	}
	} //sw

	Result= RR
} //func
  
// output_MML 
	
Function Futohgoh(Int Num,Str SS,Str LL){ 

	Str TT= ""; Str XX= ""; Int i= 0

	If(Num<0){ XX= SS; i= -Num }
	If(Num>0){ XX= LL; i= Num }

	While(1){
		If(i <=0){ Exit; }
		TT= TT+ XX
		i--
	} //
	Result= TT
} //func
 
Function Fret_Mml(Str Selector, Int Barre, Array Fret){ // ab版 

  Array Tuning= Open_Tuning(#Tune_set) // o3=n36+  4,9,12+2, 12+7,12+11,24+4

    Str TT= ""; Int Num= 0; Int NN= 0; Int DD= 0
  Str Layer= ""; Array RR= ()

  Array Note_arr =("c","d-","d","e-", "e","f","f+","g", "g+","a","b-","b")

  Int Count= 0
  For(Int i=0; i< 6; i++){

	TT= Fret(i) //for if[0,"x"] kubetsu int 0 str x

	Num= Barre+ Fret(i)+ Tuning(i)

	NN= Num/12
	If(Num < 0){ NN= NN- 1 } // [-3/12= 0]

	DD= Num%12
	If(DD < 0){ DD= DD+ 12 } //[-3%12= -3]

	If(Selector=="gousei"){

		If(TT !="x"){

			If(NN != Count){ //<> no add
				Layer= Layer+ Futohgoh(NN- Count, "<",">")
				Count= NN
			}
			Layer= Layer+ Note_arr(DD)
		}

	}Else{ // "hairetsu"

		If(TT !="x"){

			Layer= Layer+ Futohgoh(NN, CHR(34), "`")
			Layer= Layer+ Note_arr(DD)

			RR= (RR, Layer); Layer=""
		}Else{

			RR= (RR, TT) // "x"
		}
	}
  } //

  If(Selector=="gousei"){

	Result= "'"+ Layer+ Futohgoh(0-Count, "<", ">")+ "'"
  }Else{

	Result= RR
  }
 } //func
 
Function Mml_Out(Str Lmm, Str Patch, Str Barre, Array Fret){ 

	//小文字化
	Switch(Patch){
	Case(""){		Patch= #Mode_set // stk etc.
	}Case("Cut"){	Patch= "cut"
	}Case("Arp"){	Patch= "arp"

	}Case("Prn"){		Patch= "prn"
	}Case("Cut_prn"){	Patch= "cut_prn"
	}Case("Cut_Prn"){	Patch= "cut_prn"
	}Case("Arp_prn"){	Patch= "arp_prn"
	}Case("Arp_Prn"){	Patch= "arp_prn"

	}Case("Print"){	Patch= "print"
	}Case("Cut_print"){	Patch= "cut_print"
	}Case("Cut_Print"){	Patch= "cut_print"
	}Case("Arp_print"){	Patch= "arp_print"
	}Case("Arp_Print"){	Patch= "arp_print"

	}Case("Result"){	Patch= "result"
	}Case("Cut_result"){	Patch= "cut_result"
	}Case("Cut_Result"){	Patch= "cut_result"
	}Case("Arp_result"){	Patch= "arp_result"
	}Case("Arp_Result"){	Patch= "arp_result"

	}Case("Lyric"){		Patch= "lyric"
	}Case("Cut_lyric"){	Patch= "cut_lyric"
	}Case("Cut_Lyric"){	Patch= "cut_lylic"
	}Case("Arp_lyric"){	Patch= "arp_lyric"
	}Case("Arp_Lyric"){	Patch= "arp_lyric"
	}
	} //sw


	Str Line; Str Len; Int NN;

	Switch(Patch){
	Case("cut"){	Patch= "cut"; Line= "run"
	}Case("cut_prn"){	Patch= "cut"; Line= "prn"
	}Case("cut_print"){	Patch= "cut"; Line= "print"
	}Case("cut_result"){	Patch= "cut"; Line= "result"
	}Case("cut_lyric"){	Patch= "cut"; Line= "lyric"

	}Case("arp"){	Patch= "arp"; Line= "run"
	}Case("arp_prn"){	Patch= "arp"; Line= "prn"
	}Case("arp_print"){	Patch= "arp"; Line= "print"
	}Case("arp_result"){	Patch= "arp"; Line= "result"
	}Case("arp_lyric"){	Patch= "arp"; Line= "lyric"

	}Case("prn"){	Patch= "stk"; Line= "prn"
	}Case("print"){	Patch= "stk"; Line= "print"
	}Case("result"){	Patch= "stk"; Line= "result"
	}Case("lyric"){	Patch= "stk"; Line= "lyric"

	}Default{	Line= "run" // [0-9] バラつき or stk etc.
	}
	} //sw


	Str ZZ; Str TT; Str SS; Array RR;

	Switch(Patch){
	Case("cut"){

		If(Lmm==""){ Lmm= #Cut_set; }
		Lmm= Loop_Breaker(Lmm)

		ZZ= Fret_Mml("gousei",Barre,Fret)
		TT= Cutting(Lmm, Line, ZZ, Fret)

		Switch(Line){
		Case("prn"){
			Print("cut :"+ Lmm +" | "+ ZZ); Print(TT)
		}Case("result"){
			Res_gbl= TT; //result出力
		}Case("print"){
			Print(TT)
		}Case("lyric"){
			Lyric= Chd_gbl; TT;
		}Case("run"){
			TT;
		}
		} //sw

	}Case("arp"){

		If(Lmm==""){ Lmm= #Arp_set; }
		Lmm= Loop_Breaker(Lmm)

		RR= Fret_Mml("hairetsu",Barre,Fret)

		TT= Arpeggio(Lmm, Line, RR)

		Switch(Line){
		Case("prn"){
			Print("arp :"+ Lmm +" | "+ RR); Print(TT)
		}Case("result"){
			Res_gbl= TT; //result出力
		}Case("print"){
			Print(TT)
		}Case("lyric"){
			Lyric= Chd_gbl; TT;
		}Case("run"){
			TT;
		}
		} //sw

	}Default{

		ZZ= Fret_Mml("gousei",Barre,Fret)

		Switch(Line){
		Case("prn"){

			For(Int i=0;i<6;i++){ SS= SS+ Fret(i); } //

			Print("root:"+ Root_gbl+ " "+ Chd_gbl+ " / "+ Barre+ "fret "+ SS)
			Print(ZZ)

		}Case("result"){

			Res_gbl= ZZ; //result出力

		}Default{

			If(Lmm == ""){

				NN= MML(l%); Lmm= "%"+ NN
			}Else{

				NN= Lmm // int check

				If(NN==0){ GT2_ERR({"音長がない/"}+ Chd_gbl, Lmm) End; }
			}

			TT= Speed_Setter(Patch, Fret)+ ZZ+ Lmm // + " q__9=0;t__9=0;v__9=0; "
			// patch [0-9] バラつき

			Switch(Line){
			Case("lyric"){	Lyric= Chd_gbl; TT;
			}Case("run"){	TT;
			}Case("print"){	Print(TT)
			}
			} //sw
		}
		} //sw
	}
	} //sw
 } //func
 
Function Chdprint(Str Lmm, Str Patch, Str Pos){ 


	If(Patch=="" &Pos==""){ Pos= Lmm; Lmm= "" } // Posへ移動

	Int Barre; Array Keynote; Int Rootkey; Array Fret; Int Num;

	Str TT; Str XX; Str ZZ= ""

	Int Root_gen; Int Gen_Chk=0; Int j=0; //gen number


	Int Size= SizeOf(Pos)+1

	For(Int i=1; i< Size; i++){

		XX=MID(Pos,i,1) // i=1~

		If(Gen_Chk<6){

			Switch(XX){
			Case(" "){
			}Case("r"){ Root_gen= 6-j; ZZ= ZZ+"0"; j++
			}Case("s"){ Root_gen= 6-j; ZZ= ZZ+"x"; j++
			}Case("x"){ ZZ= ZZ+XX; j++
			}Case("+"){ ZZ= XX
			}Case("-"){ ZZ= XX
			}Case("0"){ ZZ= ZZ+ XX; j++
			}Case("1"){ ZZ= ZZ+ XX; j++
			}Case("2"){ ZZ= ZZ+ XX; j++
			}Case("3"){ ZZ= ZZ+ XX; j++
			}Case("4"){ ZZ= ZZ+ XX; j++
			}Case("5"){ ZZ= ZZ+ XX; j++
			}Case("6"){ ZZ= ZZ+ XX; j++
			}Case("7"){ ZZ= ZZ+ XX; j++
			}Case("8"){ ZZ= ZZ+ XX; j++
			}Case("9"){ ZZ= ZZ+ XX; j++
			}Case("a"){ ZZ= ZZ+"10"; j++
			}Case("b"){ ZZ= ZZ+"11"; j++
			}Case("c"){ ZZ= ZZ+"12"; j++
			}Default{ GT2_ERR({"フレット指定文字以外です"},XX)
			}
			} //sw

			If(j!=Gen_Chk){

				Gen_Chk= j
				Fret=(Fret,ZZ); ZZ=""
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
			}Case("s"){ ZZ= ZZ+ XX
			}Default{ GT2_ERR({"ナット、キー文字以外です"},XX)
			}
			} //sw
		}
	} //

	If(SizeOf(Fret)!=6){ GT2_ERR({"弦が6つ必要"},SizeOf(Fret) ) End; }

	Switch(ZZ){
	Case("N"){ Barre= 0
	}Case("A"){  Rootkey=9
	}Case("A#"){ Rootkey=10
	}Case("As"){ Rootkey=10
	}Case("Bb"){ Rootkey=10
	}Case("B"){  Rootkey=11

	}Case("C"){  Rootkey=0
	}Case("C#"){ Rootkey=1
	}Case("Cs"){ Rootkey=1
	}Case("Db"){ Rootkey=1
	}Case("D"){  Rootkey=2
	}Case("D#"){ Rootkey=3
	}Case("Ds"){ Rootkey=3
	}Case("Eb"){ Rootkey=3
	}Case("E"){  Rootkey=4

	}Case("F"){  Rootkey=5
	}Case("F#"){ Rootkey=6
	}Case("Fs"){ Rootkey=6
	}Case("Gb"){ Rootkey=6
	}Case("G"){  Rootkey=7
	}Case("G#"){ Rootkey=8
	}Case("Gs"){ Rootkey=8
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
		Barre= Barre_Chk(Barre, Fret)
	}

	Array GG= ("Nut","1E","2B","3G","4E","5A","6E")

	Chd_gbl = Pos;		// Global
	Root_gbl= GG(Root_gen);	// Global

	Mml_Out(Lmm, Patch, Barre, Fret)

	Result= Res_gbl;	// Global

 } //func
   
//	guitar3.h ------ 

	
Function Open_Tuning(Str Tune,""){ 

	Array Tuning;

	Switch(Tune){
	Case("dadgad"){	Tune= "DADGAD"
	}Case("Nashville"){	Tune= "nashville"
	}Case("Nash"){	Tune= "nashville"
	}Case("nash"){	Tune= "nashville"
	}Case("DropD"){	Tune= "dropD"
	}Case("OpenDm"){	Tune= "openDm"
	}Case("OpenD"){	Tune= "openD"
	}Case("OpenGm"){	Tune= "openGm"
	}Case("OpenG"){	Tune= "openG"
	}Case("Nomal"){	Tune= "nomal"
	}
	} //sw

	Switch(Tune){
	Case("drop642"){	Tuning=(4-12, 9, 14-12, 19, 23-12, 28) // "EA>"D G"B>E
	}Case("drop531"){	Tuning=(4, 9-12, 14, 19-12, 23, 28-12) // E"A>D "GB>"E

	}Case("DADGAD"){	Tuning=( 2, 9,14,19,21,26) // DAD GAD
	}Case("nashville"){	Tuning=(16,21,26,31,23,28) // >EAD G<BE
	}Case("dropD"){	Tuning=( 2, 9,14,19,23,28) // DAD GBE
	}Case("openDm"){	Tuning=( 2, 9,14,17,21,26) // DAD FAD
	}Case("openD"){	Tuning=( 2, 9,14,18,21,26) // DAD F#AD
	}Case("openGm"){	Tuning=( 2, 7,14,19,22,26) // DGD GBbD
	}Case("openG"){	Tuning=( 2, 7,14,19,23,26) // DGD GBD
	}Case("nomal"){	Tuning=( 4, 9,14,19,23,28) // EA>D GB>E
	}Default{ GT2_ERR({"チューニングリストにない Tune"},Tune) End;
	}
	} //sw

	If(SizeOf(Tuning) != 6){ GT2_ERR({"Open_Tuning; [6]調弦数が不足"},SizeOf(Tuning)) End; }

	Result= Tuning;
 } //func
 
Function Hosei_Root(Int NN, Int DD, Array Fret){ 

	DD= 6- DD- 1;  //SizeOf(Fret)

	Array RR;
	For(Int i=0; i< 6; i++){

		If(i <NN | i >DD){

			RR=(RR,"x") // hairetsu "x" sashikae
		}Else{

			RR=(RR,Fret(i))
		}
	} //

	Result= RR;
} //func

 
Function Barre_Chk(Int BB, Array FF){ 

	Int NN= 0
	Int j= 0
	For(Int i=0; i< 6; i++){

		NN= FF(i) // "x",1,0 ため

		If(j >NN){
			j= NN //最小値
		}
	} //

	If(BB+ j <0){ BB= BB+ 12 }

	Result= BB
 } //func
 
Function Pi_Chdlist(Int Rootkey, Str Chdname, Str Lmm, Str Patch, Str Pos){ 


	Int Barre= 0;
	Str Number= 0; Array Root_hosei= (0,0);
	Array Fret; Array Keynote; Array Arr; Array Brr;

//	||1E``e	|	|	|
//	||2B``c	|	|	|
//	||3G`g	|	|	|
//	||4D	|	|`e	|
//	||5A	|	|	|`c
//	||6Eo3e	|	|	|
//	N	1F	2F	3F

//	C Maj. Position
//	Barre= 0;
//	Fret=(0,3,2, 0,1,0);


  If(Pos==""){ //指定がない場合

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

	Pos= Arr(Rootkey)
  }


	Switch(Pos){
	// オープンpos.指定
	Case("a5A"){ Number= Pos
	}Case("b5A"){ Number= Pos
	}Case("c5A"){ Number= Pos
	}Case("d4D"){ Number= Pos
	}Case("e6E"){ Number= Pos
	}Case("f4D"){ Number= Pos
	}Case("f6E"){ Number= Pos
	}Case("g-6E"){ Number= Pos
	}Case("g6E"){ Number= Pos

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
		GT2_ERR({""}+ Pos+ {"ポジション指定にない Chdname"},Chdname)
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

	Barre= Barre_Chk(Barre, Fret)



	Fret= Hosei_Root(Root_hosei(0),Root_hosei(1),Fret)

	If(SizeOf(Fret)!=6){

		GT2_ERR({"Pi_Chdlist: 弦が6つ必要"},SizeOf(Fret) )
		End;
	}

	Mml_Out(Lmm, Patch, Barre, Fret)

 } //func

  
// Chord Functionマクロ 

#Gt2_Chd= { Function #?1#?3(Str Lgh,Str Spd,Str Vce){ Chd_gbl="#?1#?3"; Pi_Chdlist("#?2","#?4", Lgh,Spd,Vce); Result=Res_gbl; } }
// "#?2","#?4"が必要

#Chd_list={
#Gt2_Chd("C",  "0",#Chd_N,#Chd_Q)
#Gt2_Chd("Cs", "1",#Chd_N,#Chd_Q);	#Gt2_Chd("Db", "1",#Chd_N,#Chd_Q)
#Gt2_Chd("D",  "2",#Chd_N,#Chd_Q)
#Gt2_Chd("Ds", "3",#Chd_N,#Chd_Q);	#Gt2_Chd("Eb", "3",#Chd_N,#Chd_Q)
#Gt2_Chd("E",  "4",#Chd_N,#Chd_Q)
#Gt2_Chd("F",  "5",#Chd_N,#Chd_Q)
#Gt2_Chd("Fs", "6",#Chd_N,#Chd_Q);	#Gt2_Chd("Gb", "6",#Chd_N,#Chd_Q)
#Gt2_Chd("G",  "7",#Chd_N,#Chd_Q)
#Gt2_Chd("Gs", "8",#Chd_N,#Chd_Q);	#Gt2_Chd("Ab", "8",#Chd_N,#Chd_Q)
#Gt2_Chd("A",  "9",#Chd_N,#Chd_Q)
#Gt2_Chd("As","10",#Chd_N,#Chd_Q);	#Gt2_Chd("Bb","10",#Chd_N,#Chd_Q)
#Gt2_Chd("B", "11",#Chd_N,#Chd_Q)
 } // "C","0"が必要

// 互換性のため
#Chd_N={M9}	#Chd_Q={Maj79}	#Chd_list;
#Chd_N={m9}	#Chd_Q={min79}	#Chd_list;
#Chd_N={9}	#Chd_Q={79}	#Chd_list;

// 差し換え
#Chd_N={711}	#Chd_Q={7sus4}	#Chd_list;
#Chd_N={911}	#Chd_Q={9sus4}	#Chd_list;
#Chd_N={1113}	#Chd_Q={13sus4}	#Chd_list;
#Chd_N={913}	#Chd_Q={69}	#Chd_list;
#Chd_N={m913}	#Chd_Q={m69}	#Chd_list;
#Chd_N={s9b13}	#Chd_Q={min7s5}	#Chd_list;
#Chd_N={7s5}	#Chd_Q={aug7}	#Chd_list;


#Chd_N={}		#Chd_Q={Maj}	#Chd_list; // Major
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
 
