// title:        "tuner2.h" ver1.23 
// description:  �ÓT�����@�\�t���X�P�[���`���[�j���O�t�@�C�� (16/ 6/ 8)
// keywords:     SAKURA Function     Powered by 04coreworks
 
/*�@�@�T�v 


	�X�P�[���`���[�j���O��ύX����w�b�_�ł��B
	�ÓT�����̍Č��A�}�X�^�[�`���[�j���O��ύX����Ƃ��g�p���܂��B


	�����̌v�Z�́A�ȉ��̂Ƃ���s���܂����B
	https://eseakisakura.wordpress.com/2016/02/27/kotenn/



	tuner2.h�́A�\�����G�f�B�^�ɑΉ����Ă��܂��B

	�� GS���Z�b�g���K�v�ƂȂ�܂��B
	�� ������-50.00,50.00 cent�O�ɂȂ�ꍇ�ACoarseTune�g�p���܂��B


	Include�t�H���_�ɓ���Ďg���܂��B
	tuner2.h���A�T�N���ATW��Include�t�H���_�ɓ���ĉ������B


	�� ���l�[�����K�v�ȏꍇ

	�g���q"h"���A���炩�̃\�t�g�ɂ��o�^����Ă���P�[�X�ɂ����āA
	"tuner2.h.mml"�ƃ��l�[������邱�Ƃ�����܂��B

 	���̏ꍇ�A�t�H���_�I�v�V�����́A
	"�o�^����Ă���g���q�͕\�����Ȃ�"�̃`�F�b�N���ꎞ�I�ɊO���A
	�g���q��\������悤�ɂ�����A���l�[�����Ă݂ĉ������B
	
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


�@�ÓT�����ɂ��ẮA�ȉ��̃y�[�W�l���Q�l�ɂ��Ă��܂��B

�@http://voce.main.jp/MameChisiki/Tyouritu.htm
�@http://homepage1.nifty.com/musica/enharmonic.htm
�@http://www.fugue.us/Pitch.html
�@http://kazuo23.real-sound.net/sub1.htm
 
�@������ 

16 3 20		�h�����g���b�N�w���ǉ�����
   4  1		Cent_tune��50cent+-�ɏC��
		Tuning�̑Ύ��g���̕�������������
		��������aug4��I���ł���悤�ɂ���
      2		���������ďo���Ƃ���
      7		����L�� ver.1.11 upload
   5 17		������������A�R�[�h�̐��`
     23		Tuning��Js�Ƃ̃o�b�e�B���O�����������߁A
		Tuning���ATotal_tune�Ƃ����B
		Js�ł͂Ȃ��AJs_tune�ƕύX����
     27		TR����Lyric�o�̓~�X�C��
   6  8		�������}�N����

20 7 19		�h�L�������g������
 
*/ 
  
/*�@�@�戵������ 


�@�@@81,8�T�C���g�ȂǂŁA
�@�����ɂ��ʑ��Y���̊m�F������Ƃ��ǂ��ł��B


	
�@�������ɂ��ďo�� 


�@- �g���� -

�@Eq_tune("a","442")�̂悤�ɃZ�b�g���܂��B
	
�@�����Y���g���b�N�̃L�����Z�� 


�@{a}	�ŁATR10�̂݃L�����Z��
�@{a-c}	�́ATR10-TR12�̊Ԃ��L�����Z�����܂�
�@{1-9}	�́ATR1-TR9�܂ŃL�����Z��
�@{g}	�ŁATR16���L�����Z�����܂�

�@�������͂��Ȃ���΁A16�`�����l���S�Ē������܂�

�@Mt_tune("a")  �ł���΁ATR10�ȊO�̃`�����l���𒆑S�����ŁA
�@Js_tune("8-b")�ł���΁ATR8-TR11�ȊO�̃`�����l�����������Ƃ��Ē���
 
�@�������̑I�� 


�@Eq_tune()	���ϗ�			:440Hz
�@Kb_tune()	�L�����x���K�[��R�����@:430
�@Wm_tune()	���F���N�}�C�X�^�[iii	:422.5
�@Mt_tune()	�~�[���g�[��(���S����)	:392
�@Js_tune()	������			:466
�@Py_tune()	�s�^�S���X����		:490


�@�J�b�R�̒��ɉ����L�ڂ��Ȃ��ꍇ�A
�@�����g��ꂽ�ł��낤�A��L�̎��g���� A:�Ƃ��ăA�T�C�����܂�
�@Eq_tune()�̂ݏ������ނƁAEq_tune(,"440")�����ƂȂ�܂�
 
�@��A(��)�̎��g�� Hz��ύX 


�@���l�́A430�`450Hz�܂ŕύX�ł��܂��B

�@�����ɂ����g���w����\�ł��B

�@"�I���K��"		:490Hz
�@"�x�l�`�A��"		:466	// ���l�T���X����[������]
�@"�o���b�N"		:415	// �o�b�n�A�p�b�w���x��[���S����]
�@"�x���T�C��"		:392	// �o���b�N������
�@"�w���f��"		:422.5
�@"���[�c�@���g"	:422	// ���[�c�A���g[�L�����x���K�[�A���F���N�}�C�X�^�[]

�@"�ÓT�h"		:430	// �n�C�h���A�x�[�g�[�x��
�@"�t�����X"		:435
�@"�C�^���A"		:432
�@"ISO"			:440	//[���ϗ�]
�@"�J������"		:446

�@���l�w��̏ꍇ�AKb_tune("a-c","422.5")

�@�����ɂ��w��AWm_tune("a-c","�w���f��")
 
�@��#Aug4 ���l�x�I�� 


�@�������̑��l�x�́A����̑I����������܂��B

�@#Aug4="45/32"�Ƃ��邱�ƂŁA���l�x�̏�������ύX�ł��܂��B

�@�����̃}�N���́A�������g�p���̂݋@�\���܂��B

�@"25/18"
�@"45/32"	:C���W���[�L�[����
�@"24/17"
�@"17/12"
�@"64/45"	:A�}�C�i�[�L�[����
�@"36/25"


�@�K���A#Aug4 ��Js_tune() �̑O�ɒu���ĉ������B

�@Include(tuner2.h)
�@#Aug4="45/32" Js_tune("a-c","440")


�@�w�肪�Ȃ��ꍇ�́A#Aug4= "64/45"�ƂȂ�܂��B

�@Include(tuner2.h)
�@Js_tune("a-c","440") // "64/45"�Ƃ��ă`���[�j���O
  
�@��Total_tune�ɂ��ďo�� 


�@- �g���� -

�@Total_tune���_�C���N�g�ɒ@�����Ƃ��ł��܂��B
�@���̏ꍇ�A�I�v�V�������ЂƂǉ�����܂��B

	
�@�����Y���g���b�N�̃L�����Z�� 

�@�����ɂ��ďo���Q�Ƃ̂���
 
�@��A(��)�̎��g�� Hz��ύX 

�@�����ɂ��ďo���Q�Ƃ̂���
 
�@�������̑I�� 

�@�����ɂ��ďo���ɏ����ƂȂ�܂��B
�@�ŏ��̂ӂ������ɂ�蒲�����w�肵�܂��B

�@Eq_tune() -> Eq

�@Total_tune("a","440",Eq)
 
�@�������̃��[�e�[�V�����@�\ 


�@Total_tune("a-c","440",Kb,0)�̍Ō�ɂ��� "0"���A
�@[-11~11]�̊Ԃ֕ύX���邱�Ƃɂ��A�����̃��[�e�[�V���������܂��B


�@�ʏ��"A" �𒆐S�Ƃ��������ƂȂ�܂����A
�@�����"2" �Ƃ��邱�Ƃ�"B" �𒆐S�Ƃ����������E�ɕύX���܂��B

�@�Ⴆ��ƃC�Z��(A)�ł́A�L�����x���K�[�̒������E��ς����A
�@���̂܂܁A�C�Z�����E�� B����n�܂�L�[�Ƃ��Ē������Ă��܂����̂ł��B


�@���ʂ�A�𒆐S�Ƃ��Ē�������邽�߁A���肦�Ȃ������Ȃ̂ł����A
�@DTM �ł̓L�[�ύX�����ʂȂ̂ŁA�����I�ɑg�ݍ��݂܂����B

�@�ǂ��������ăs���Ƃ��Ȃ��Ƃ��ȂǂɁA
�@�L�[�̐��l�Ɠ����l�ɁA�ύX���Ă݂�Ɨǂ���������܂���B


�@���S��100cent�P�ʂ̕��ϗ� Eq�ɂ����ẮA���̋@�\�͕K�v�Ȃ��ł��B
�@�z��"64,64,64,.. " �̃��[�e�[�V�����ƂȂ�A�����ς��Ȃ����߂ł��B
  
*/ 
  
/*�@�@�N�C�b�N���t�@�����X 
	
�@�������\ 

�@Js_tune("a-c","442")

�@Total_tune("cancelTR", ["440" | "�o���b�N"], [ Py | Js | Mt | Wm | Kb | Eq ], [-11~11])
 
�@�����g�����X�g 

�@[430 ~ 450]

�@�I���K��:490   | �x�l�`�A��:466   | �o���b�N:415 | �x���T�C��:392 |

�@�w���f��:422.5 | ���[�c�@���g:422 | �ÓT�h:430   | �t�����X:435   | �C�^���A:432

�@ISO:440        | �J������:446
 
�@���e�@�\�̋L�q�� 


�@- �����ɂ��ďo��

�@Include(gs.h) ResetGS()r4
�@Include(tuner2.h) Kb_tune()


�@- Total_tune�ɂ��ďo��

�@Include(gs.h) ResetGS()r4
�@Include(tuner2.h) Total_tune(,,Kb)
 
�@����{���^ 


�@//�����ɂ��ďo��//

�@Include(gs.h) ResetGS()r4

�@Include(tuner2.h)
�@#Aug4="45/32" Js_tune("a-c","440")

�@Tempo=88 Time=(!2) TrackSync

�@#TT={ @81,8 l2 o7 aa+b cc+dd+eff+gg+ }

�@TR=1  #TT
�@//TR=12 #TT //��r�̂��߂̒����Ȃ�TR


�@------------------------------------

�@//Total_tune�ɂ��ďo��//

�@Include(gs.h) ResetGS()r4

�@Include(tuner2.h)
�@#Aug4="45/32" Total_tune("a-c","440",Js,0)

�@Tempo=88 Time=(!2) TrackSync

�@#TT={ @81,8 l2 o7 aa+b cc+dd+eff+gg+ }

�@TR=1  #TT
�@//TR=12 #TT //��r�̂��߂̒����Ȃ�TR
 
*/ 
  
// �@�ȉ��A�v���O������ 
 
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

	//2���ŋ�s��܂�߂Ŏl�̌ܓ�
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
			Default{ Print({"�g���b�N�w��O�̕���: 1-g�̊Ԃ̂�"}) End; }
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

	If(Key_chg<-11|Key_chg>11){ Print({"���l�����: [-11~11]"}) End; }

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

	Case("Wm"){ Arr=(1026,   49, 342,  440, 196,  831,   49, 684,  244,  0, 645, 391) Lyr={"���F���N�}�C�X�^�[iii"} }
	Case("Kb"){ Arr=(1026,   49, 342,  440,-342,  831,   49, 684,  244,  0, 635,-147) Lyr={"�L�����x���K�[��R�����@"} }
	Case("Mt"){ Arr=(1026,-1369, 342, 2053,-342, 1369,-1026, 684,-1711,  0,1711,-684) Lyr={"�~�[���g�[��(���S����)"} }
	//                  c          d          e     f          g         a         b
	Case("Js"){ Arr=(1564,-1369,-196,   NN, 196, 1369,-1564,1760,-1173,  0,1173, 391) Lyr={"������(aug4��"}+#Aug4+{")"} }
	Case("Py"){ Arr=(-587,  782,-196,-1173, 196, -782,  587,-391,  978,  0,-978, 391) Lyr={"�s�^�S���X����"} }
	Default{    Arr=(   0,    0,   0,    0,   0,    0,    0,   0,    0,  0,   0,   0) Lyr={"���ϗ�"} }

	} //sw

	Switch(Onnsa){
		Case("�I���K��"){	Onnsa="490" }
		Case("�x�l�`�A��"){	Onnsa="466" }	// ���l�T���X���� [������]
		Case("�o���b�N"){	Onnsa="415" }	// �o�b�n�A�p�b�w���x�� [���S����]
		Case("�x���T�C��"){	Onnsa="392" }	// �o���b�N������
		Case("�w���f��"){	Onnsa="422.5" }
		Case("���[�c�@���g"){	Onnsa="422" }	// ���[�c�A���g [�L�����x���K�[�A���F���N�}�C�X�^�[]

		Case("�ÓT�h"){		Onnsa="430" }	// �n�C�h���A�x�[�g�[�x��
		Case("�t�����X"){	Onnsa="435" }
		Case("�C�^���A"){	Onnsa="432" }
		Case("ISO"){		Onnsa="440" }	// [���ϗ�]
		Case("�J������"){	Onnsa="446" }
	} //sw

	Switch(Onnsa){
		// cent��31.19 �ł���� 3119
		// -50.00,50.00 cent�O�́ACoarseTune�g�p [+100cent= +1CoarseTune]

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

		Default{ Print({"���̂����g�������: �w���f�� or 430~450"}) End; }
	} //sw

	Array C_tune= Cent_tune(Num)
	Array New_tune= Tune_enzann(Key_chg,C_tune(0),Arr)
	Array RR= GS_ScaleTuning_Kai(Not_tr,C_tune(1),New_tune)

	TR=1 // Lyric�o�͂̂��ߐ�ɔ��s / TR0�O�ł̂�lyric���t���T�N���̎d�l
	Lyric= Lyr
	Lyric= {"A: "}+ Onnsa+ {"Hz"}
	Lyric= {""}+ Num+ {"/100cent= "}+ C_tune(0)+ {"*0.01cent + "}+ C_tune(1)+ {":CoarseTune(*100.00cent)"}
	Lyric= {"64+- c~b: "}+ New_tune
	Lyric= {"cancel("}+ RR(0)+ {"-"}+ RR(1)+ {")TR"}
	Lyric= {"Key_chg: "}+ Key_chg


} //func

 
// Tune Function�}�N�� 

#Tn2_Tune= {Function #?1_tune(Str Not_tr,Str Onnsa){ If(Onnsa==""){ Onnsa= "#?2" } Total_tune(Not_tr,Onnsa,"#?1") }}

#Tn2_Tune("Eq","440")	//���ϗ�
#Tn2_Tune("Kb","430")	//�L�����x���K�[
#Tn2_Tune("Wm","422.5")	//���F���N�}�C�X�^�[
#Tn2_Tune("Mt","392")	//�~�[���g�[��
#Tn2_Tune("Js","466")	//������
#Tn2_Tune("Py","490")	//�s�^�S���X
 
//�@�ȏ�v���O�������A�I��� 



 
/*	�����ł� 


	ScaleTuning�́A�l�ЂƂ�1cent�ƂȂ��Ă��܂��B
	���́A+-64cent�O�̒�����v�����ꂽ���̑Ή��ł����A

	CoarseTune�Ńh���h#�ɂ��Ă��܂��΁A100cent����邽�߁A
	������g���A�A���I�Ƀ`���[�j���O���܂��B

	64+50�ɂȂ�����ACoarseTune��������A
	64-50�փ`���[�j���O����A���̌J��Ԃ��ł��B


	cent�̍��Z�l�ɂ��ẮA0.50�ł͐؂�グ�A
	0.49�Ő؂�̂ĂƂȂ��Ă܂��B


*/
 	
