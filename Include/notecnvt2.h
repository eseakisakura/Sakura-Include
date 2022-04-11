// title:        "notecnvt2.h" ver1.22 
// description:  逆読み鏡像機能付き MMLノートコンバータ (16/ 6/11)
// keywords:     SAKURA Function     Powered by 04coreworks
 
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

 
