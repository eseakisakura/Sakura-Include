// title:        "notecnvt2.h" ver1.22 
// description:  �t�ǂ݋����@�\�t�� MML�m�[�g�R���o�[�^ (16/ 6/11)
// keywords:     SAKURA Function     Powered by 04coreworks
 
/*�@�@�T�v 


	�����f�B�̋t�ǂ݁A���������f�B�����t���邽�߂̂��̂ł��B
	�J�m���^���̃I���K���Ȃ�A�\�񉹋Z�@�Ŏg�p�ł��܂��B


	���̃w�b�_�́Amml�̈ڒ��ϊ��A�ꎞ���瑊�΃I�N�^�[�u�ϊ��A
	mml�̃��o�[�X�o�͂ƃ����f�B�̋��������T�|�[�g���܂��B



	notecnvt2.h�́A�\�����G�f�B�^�ɑΉ����Ă��܂��B


	�� Key��KeyFlag(�� )�̋@�\���ꕔ���p���܂��B


	Include�t�H���_�ɓ���Ďg���܂��B
	notecnvt2.h���A�T�N���ATW��Include�t�H���_�ɓ���ĉ������B


	�� ���l�[�����K�v�ȏꍇ

	�g���q"h"���A���炩�̃\�t�g�ɂ��o�^����Ă���P�[�X�ɂ����āA
	"notecnvt2.h.mml"�ƃ��l�[������邱�Ƃ�����܂��B

 	���̏ꍇ�A�t�H���_�I�v�V�����́A
	"�o�^����Ă���g���q�͕\�����Ȃ�"�̃`�F�b�N���ꎞ�I�ɊO���A
	�g���q��\������悤�ɂ�����A���l�[�����Ă݂ĉ������B
	
�@�����ӓ_ 

�@�G���[�`�F�b�N�͍Œ���݂̂ł��B

�@�ł���΁A�R���\�[���o�͂��g���A��x�e�X�g�A
�@�ϊ����ʂ̊m�F���s�Ȃ����Ƃ��A�������߂��܂��B
 
�@�� �Ɛӎ��� /�g�p���� /���쌠�Ȃ� 


�@�EApache���C�Z���X2.0��K�p���ĉ�����

�@�E���X�N���v�g�Q���g�p���ĉ��炩�̖�肪�N�����Ă��A
�@�@�ӔC��v�����Ȃ�����

�@�E�Ĕz�z����ۂ́A���h�L�������g�t�@�C�����ێ����ĉ�����


�@= �����g���� =
�@https://twitter.com/huangbaihonglan

�@Copyright(C) 04coreworks
�@https://github.com/eseakisakura
 
�@���ӎ� 


�@���̋@�\�́A�ȉ��̃y�[�W�l���Q�Ƃ��Ă��܂��B


�@https://ja.wikipedia.org/wiki/%E5%8D%81%E4%BA%8C%E9%9F%B3%E6%8A%80%E6%B3%95
�@https://www.senzoku-online.jp/synthetic_chair/lesson_05-03.html
�@http://d.hatena.ne.jp/f_iryo1/20070427/1177644225
 
�@������ 

 16 5 13	������ ver.0
      14	�ꎞ�I�N�^�[�u�����u���ł��t��
      15	���������f�B�ɑΉ�����
�@�@�@16	�R�[�h�̑S�ʏC�� ver.1
		���������
      18	MML��#b���̋��������ǉ�
		r�����ԈႢ����
      25	A#�̂悤��#-���w��ł̋����ɑΉ�����
      30	#b�́AKeyFlag��K�p���Ȃ��ɕύX
      31	���t���݈̂ꎞ�������Ƃ���
		rela,rev,mirror2�͒��𔽉f�����Ȃ��ɕύX
    6  2	�����ƃG���[�C��
       4	Arr_str���ċA�ɂ���
		miror2�̃I�N�^�[�u�ԈႢ�C��
      11	�t�_�ɑΉ�

 20 7 19	�h�L�������g������
 
*/ 
  
/*�@�@�戵������ 




	
�@���e�@�\�̐��� 


�@- �g���� -

�@Note_cnvt("cfga",rev,"prn")
�@�ŃR���\�[���o�͂��܂��B

�@Note_cnvt("f`g"a",rev,"run")
�@�ł͉��t�݂̂��܂��B
















	
�@���ڒ��ϊ� - Forward 


�@�w�肳�ꂽ���ƃL�[��ǂݍ���ŕϊ����܂��B
�@KeyFlag�Œ��AKey�ŃL�[���w�肵�܂�

�@����(�V){ 'gb`d' }�ł���΁A{ 'gb-`d' }�ƕϊ����܂��B

�@Key=2 { cfg }�ƂȂ��Ă���΁A{ dga }�ƕϊ����܂��B


�@key=2 Note_cnvt("cfg","prn")
 
�@�����΃I�N�^�[�u�C�� - Relative 


�@�ꎞ�I�N�^�[�u�𑊑΃I�N�^�[�u�ɏ��������܂��B
�@FMP7��ppmck�Ȃǂɓ]�p����ہA�g�p�ł��邩�Ǝv���܂��B

�@�w���"rela"�Ƃ��܂��B
�@{ c`e>g }�ł���΁A{ c>eg }�̂悤�ɏ��������܂�


�@Note_cnvt({ c`e>g },rela,"prn")
 
�@�����o�[�X�o�� - Reverse 


�@MML���t�ǂݏo�͂��܂��B�\�񉹋Z�@�ł����t�s�`�ł��B


�@�w���"rev"�ł��B
�@{ ace }�́A{ eca }�ƂȂ�܂��B
�@{ l4 d l8 fg }�́A{ l8 gf l4 d }�ƕϊ����܂�


�@Note_cnvt({ l4 d l8 fg },rev,"prn")
 
�@�������������f�B - Mirror 


�@���ʂ̏�������������A���]���������f�B�ɂ��܂��B
�@�\�񉹋Z�@�ł́A���s�`�ƂȂ�܂��B

�@���̍������w�肷�邱�ƂŁA���������܂��B
�@���S�Ɏw�肷�鉹�̕\�L�́A"��`�A#��-���܂�{c-b}�ł��B

�@���S�w��{a}�ł���΁A{ ab`c }�́A{ agf }

�@���S��{a-}�ł́A{ fa`c }���A{ bge }�ƕϊ����܂��B


�@�܂��A���ƃL�[�̎w�肪����΁A����𔽉f���܂��B
�@����(�t�@)�Œ��S{c}�ł���΁A{ "gce }���A{ f+c"a }�ƕϊ����܂�


�@����(�t�@) Note_cnvt({ "gce },{c},"prn")
 
�@�����w�I�����������f�B - Mirror2 


�@�����A���w�I�ɏ㉺�𔽓]�������̂ł���΁A
�@���S����{&a}�ƁA"&"���܂߂ċL�q���ĉ������B

 ���̏ꍇ�A���͔��f����܂���B
�@
�@{ a`c#`e }�ŁA���S{&`c}�ł���΁A{ `eba }�ƕϊ����܂�


�@Note_cnvt({ a`c#`e },{&`c},"prn")
  
�@���e�@�\�̏o�͑I���ɂ��� 


�@�f�t�H���g�ł́A�Ԓl"result"��Ԃ��܂��B


�@���Ԓl��Ԃ� "result" [default]


�@Str TT= Note_cnvt({ cfg },rev)�݂̂ł́A�Ԓl��Ԃ��܂��B



�@���Đ��̂� "run"


�@Note_cnvt({ cfg },rev,"run")�ł́A���t�݂̂ɂȂ�܂��B



�@���v�����g�o�� "prn"


�@Note_cnvt({ cfg },rev,"prn")�́A�Ԓl�t���R���\�[���o�͂ł��B



�@���f�o�b�O "print"


�@Note_cnvt({ cfg },rev,"print")���A����܂����A
�@�Đ����s���A�Ԓl�t���R���\�[���o�͂ł��B
�@��ɁA�f�o�b�N�p�r�ł��B


 
�@���g�p��̐��� 
	
//�@- �g�p�ł��镶������ - 


�@a-gr^. lqvto@, 0-9 #+- "`<> ' []�̂Ȃǂ�MML�����ɑΉ����܂��B
�@�܂��́A����ɑΉ�����X�g�g�����B
�@��{�I�ɁA�Z���߂�MML�݈̂������̂��Ǝv���ĉ������B

�@���s�̂���MML�ł������܂����A�Ȃ܂邲�Ƃ͂ł��܂���B

�@TrackKey �����o�[�X�o�͂ŕϊ�����ƁA
�@yeKkcarT�Əo�͂���G���[�ƂȂ邽�߂ł��B
 
//�@- ���[�v�̑Ή� - 


�@���[�v�Ȃǂ̌J��Ԃ��ɂ��A�I�N�^�[�u�ω��́A
�@���S�ɂ͑Ή��ł��Ă��܂���B���Έʒu�̊���o�����ӊO�Ɠ�����߂ł��B

�@���ۂɕ����Ċm�F����A�Ȃ����̓R���\�[���o�͂���̏C�����K�v�ƂȂ�܂��B
 
//�@- �����f�B�������ɂ�����L�[�ƒ��̓K�p���ɂ��� - 


�@�������ł́A�܂������f�B�̔��]���s������ɁA
�@�L�[�ƒ���K�p���܂��B�������E�̂Ȃ��ɁA�[�߂邽�߂ł��B
 
//�@- ���ƃL�[�̉e���ɂ��� - 


�@���ƃL�[�̒l��ǂނ̂́A�ڒ��Ƌ������̂Ƃ��ł��B

�@#��b���܂߂��ɁA�L������K�v������܂��B
�@{ df#a } -> ����(f){ dfa }



�@���w�I�����������f�B�ɂ����ẮA
�@�Đ����ɂ�����AKeyFlag�̉e����h�����߁A

�@���炩���߁A����K�p���������f�B��p�ӂ���K�v������܂��B
�@����(f){ dfa } -> ����(){ df#a }{&a}
 
//�@- �A���ϊ�����ۂ̒��ӎ��� - 


�@�܂邲�ƕϊ�����ۂɂ́A
�@�Ō�̏o�͂��A���̒l���Q�Ƃ�����́A

�@�ڒ��ϊ��Ȃ����������ɂȂ�悤�ɍs�Ȃ����ق������S�ł��B


�@�Ⴆ�Έȉ��̂悤�Ɏw�肵�܂��B

�@Include(notecnvt2.h);

�@#TT={ cfga }

�@Key=2; ����(�V)

�@Str TT= Note_cnvt(#TT,rev)		// ���o�[�X�o�͂���

�@        //Note_cnvt(TT,,"run") 	// �ڒ��̏ꍇ�@ | �t�s�`
�@        Note_cnvt(TT,{a},"run") 	// ������ 	| �t���s�`


�@��L�A�t���s�`���������ƁA

�@"rev"�w��ɂ��A�t�ǂݏo�͂�����A
�@�����f�B{ cfga }��{a}�𒆐S�Ƃ��ċ��������A

�@����(�V)�̎w���Ǎ��݁A�V������΁�V�ƕύX�A
�@Key=2�ɂ���āA�S�̂��ڒ��ϊ��̂����t����B

�@�Ƃ����ϊ����s�������ƂɂȂ�܂��B


�@�������C�i�[�̏ꍇ�́A�ȉ��̂悤�ɂȂ�܂��B

�@Include(notecnvt2.h);
�@#TT={ cfga }

�@Key=2; ����(�V)

�@//Note_cnvt(Note_cnvt(#TT,rev),,"run")	// �ڒ��̏ꍇ�@ | �t�s�`
�@Note_cnvt(Note_cnvt(#TT,rev),{a},"run")	// ������ 	| �t���s�`
  
*/ 
  
/*�@�@�N�C�b�N���t�@�����X 
	 
�@�������\ 

�@Note_cnvt([{ �X�g�g��|MML }],[ rela | rev | {(&)c-b} ],[ run | prn | print ])
 
�@���e�@�\�̋L�q�� 






















	
�@���ڒ��ϊ� - (fwd) 

�@Include(notecnvt2.h);
�@Key=2; ����(�t�@)

�@Note_cnvt({ cfga },,"prn")

�@Print: dg+ab // f -> g+
 
�@���ꎞ�A���΃I�N�^�[�u�ϊ� - rela 

�@Include(notecnvt2.h);
�@Note_cnvt({ >c>f'`g"a' },rela,"prn")

�@Print: >c>f'>g<<a'<
 
�@�����o�[�X�o�� - rev 

�@Include(notecnvt2.h);
�@Note_cnvt({ [f2>g8"a4,100] },rev,"prn")

�@Print: [ "a4,100g8<f2]
 
�@�������������f�B - {a-~g#} 

�@Include(notecnvt2.h);
�@Key=2; ����(�t�@)
�@Note_cnvt({ <efga> },{"g},"prn")

�@Print: d-"b"a"g+
 
�@�����w�I�����������f�B - {&a-~&g#} 

�@Include(notecnvt2.h);
�@Note_cnvt({ <efga> },{&"g},"prn")

�@Print: "b-"a"g"f

  
�@����{���^ 


�@Include(gs.h) ResetGS()r4
�@Include(notecnvt2.h);

�@#SS= { "a"b cde fga }

�@Note_cnvt(#SS,rela,"prn")	// �ꎞ�A����oct�ϊ�

�@Note_cnvt(#SS,rev,"prn")	// ���o�[�X

�@Str TT;

�@Key=2
�@TT= Note_cnvt(#SS)	// �ڒ�
�@Print(TT)

�@Key=0 ����(�t�@)
�@TT= Note_cnvt(#SS)	// �ڒ�
�@Print(TT)

�@Key=0 ����()
�@TT= Note_cnvt(#SS,{e})	// ������
�@Print(TT)

�@TT= Note_cnvt(#SS,{&e})	// ���w�I������
�@Print(TT)
 
*/ 
  
// �@�ȉ��A�v���O������ 



 
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

 
Function Arr_str(Str ZZ,Int i,Array RR){ // �ċA 

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
					Default{ Print({"�w�肪��"}) End; }
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
				Case("+"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } } // �ȊO
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
				Case("+"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } } // �ȊO
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
				Case("+"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } } // �ȊO
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
				Case("#"){ Print({"��������#+-�͕s��"}) End; }
				Case("+"){ Print({"��������#+-�͕s��"}) End; }
				Case("-"){ Print({"��������#+-�͕s��"}) End; }
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
				Case("+"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } } // �ȊO
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
				Case("+"){ If(Odr!=-2&Odr!=5){ Val= Val+ XX } } // �ȊO
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

 
//�@�ȏ�v���O�������A�I��� 
 
/* 

//Key=2 ����(��)
//Note_cnvt({ l6 `a#4,100 l8 >@3[4 'a>ce'] l12 <"a>>a },rev)



	�������Ă��܂���..
	�v���O�������̃Q���ł��A
	�Ă��M�����I�ȁA�L�^������������B



	- �ڒ��ϊ������������A�Ō�ɂ��闝�R -


	�T�N����KeyFlag�d�l�ł́A����(�h)�̂Ƃ��A
	c �� c+, c+ �� d�Ƃ��čĐ����邽�߁A
	�������₷���B

	���������邽�߁A�ڒ��ϊ��Ƌ������ł́A�Đ����A
	�ꎞ�I�ɒ���L�[�̎w�����������B
	���̂��߁A���̉e�����󂯂Â炢�B



	- �����ɂ��� -


	�z��̓Y���Ƀ}�C�i�X�l�͂Ȃ��̂ł����A
	RR( 2)=`c
	RR( 1)= b
	RR( 0)= a
	RR(-1)= g
	RR(-2)= f

	��s�ł���΁ARR(0) -> RR(2)�Ȃ̂ŁA

	���������������ƁA
	RR(0) -> RR(-2)�ł���Ί������܂��B

	���S����a#��a-�ł́A���ꂼ��ꉹ�㉺���܂��B



	- ���΃I�N�^�[�u�C���ɂ��� -


	���ꂪ���ׂĂȂ̂ł����A
	Num= Num+Oct-Ocv; Ocv= Ocv+ Num

	Ocv�́A���Βl�ƈꎞ�l�̉��z�I�N�^�[�u�̋L�^�ł��B
	Oct�́A���Βl�̋L�^�ŁA
	Num�͈ꎞ�l�̋L�^�ł��B

	Num�́A���΃I�N�^�[�u�̌��o�͂ōė��p������B



	- ���o�[�X�o�͂ɂ��� -


	��{�I�ɂ́A�ǂݍ��񂾒l�����̂܂܁A
	�O�ɑ����������ł��B

	�R�c��<>��><�Ɣ��]���邱�Ƃ��炢

	l�̒l�Ƃ��͂܂��A�X�^�b�N��
	l��������x������A�X�^�b�N�l��Ԃ��đO�ɑ����Ƃ�


	�����̂ӂ��� �z��d�l�̕����Œ�������������A��Ɍ����ځA

	���̏�� j%7<0�ɋC�t���̂ɁA���Ԃ����������肵�Ă��܂��B
	 j<0�ŁAc=0��c=7�ƂȂ��Ă��܂��Ă����B

*/


 	
