// title:        "guitar2.h" ver6.0beta 
// description:  diagram��MML�ϊ��t��guitar�x���X�N���v�g (20/ 7/ 14)
// keywords:     SAKURA Function     Powered by 04coreworks



 
/*  �@�T�v 


	�M�^�[��MML�������݂��T�|�[�g����w�b�_�ł��B
	�R�[�h�����L�����邱�Ƃɂ���ĉ��t���܂��B

	�M�^�[���L�̃J�b�e�B���O��A���y�W�I���A
	�ȒP�Ȏw��ɂ��Č��ł���悤�ɂ��܂����B


	guitar2.h�́A�\�����G�f�B�^�ɑΉ����Ă��܂��B

	�� guitar.h�Ƃ͏�ʌ݊���������܂��B
	��q__8,q__9,t__9,v__9�͎g�p�ς݂ƂȂ�܂��B


	Include�t�H���_�ɓ���Ďg���܂��B
	guitar2.h���A�T�N���ATW��Include�t�H���_�ɓ���ĉ������B


	�� ���l�[�����K�v�ȏꍇ

	�g���q"h"���A���炩�̃\�t�g�ɂ��o�^����Ă���P�[�X�ɂ����āA
	"guitar2.h.mml"�ƃ��l�[������邱�Ƃ�����܂��B

 	���̏ꍇ�A�t�H���_�I�v�V�����́A
	"�o�^����Ă���g���q�͕\�����Ȃ�"�̃`�F�b�N���ꎞ�I�ɊO���A
	�g���q��\������悤�ɂ�����A���l�[�����Ă݂ĉ������B
	
�@�����ӓ_ - ���ݔ����Ă����� 


�@TimeBase=480 �̂悤�ȍׂ����`�b�N�ݒ�ɂ����āA
�@�Q�[�g�w�肪q80 �ȏ�̎w�肪����ƁA

�@�m�[�g�I���A�m�[�g�I�t�̃^�C�~���O�̊֌W��A
�@�����r�؂���肪����܂��B

�@�ł��邾���ATimeBase=192 �����������Ƃ��ĉ^�p���ĉ������B

 
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


�@�R�[�h�|�W�V�����́A�ȉ��̃y�[�W�l���Q�Ƃ��Ă��܂��B

�@http://www9.ocn.ne.jp/~knatsu/chords/chords.html
�@http://www.ishibashi.co.jp/academic/Chord_Guitar/C.htm
�@�h�~�i���g9th - 8monji-guitar.com

�@http://www.naru-gakki.com/guitar-opentuning/
�@http://guitar-hakase.com/tuning/
�@http://www.aki-f.com/kouza/b_kouza/kouza5/kouza5_2.htm
 
�@������ 

�@15 10 28	���W���[�A�b�v�f�[�g�I�� -- ver.4
�@   11	4	#Mode_def -> #Mode_set�̂悤�Ƀ}�N������ύX

�@16 1	9	BARATUKI��up_stroke�𑁂߂� t__8=-2
�@   5	13	For���[�v�ASizeOf���̍œK��
		�����������
	20	Cut_prn,Arp_prn��ǉ��A�y�эœK��
		MML������Int g err�̉��� TT;�ƒ@���Ȃ�����
		#Oct_set��ǉ� ->8.27�p�~
     6	4	result�o�͂�ǉ�
		prn�͍Đ��Ȃ��Ԓl�t���Ƃ���
		Chord Function���}�N����
		Cutting�����������ォ�狭��
		Chdprint��result�����C��
	11	CUTTING�ŕt�_�ɂ���
     7	14	ARPEGGIO�̃p�����[�^����
	28	CUTTING�̃p�����[�^���� ->9.13�p�~
     8	1	ARPEGGIO�̃p�����[�^����
	27	Fretnote�̔p�~�ɔ����C��
     9	13	CUTTING��tqv__8�p�~
	24	ARPEGGIO�̃T���w�莩���`�F���W�ǉ�
	25	sus2�L�q�ł�add9�Ƃ����Asus4�̊ԈႢ�C��

  20 6	19	ver5.0c��p�~�Aver4.5�n����̔h����ver6.0�Ƃ���
	29	�e���V�����R�[�h�̒ǉ�
	30	#��p�łȂ�s�Ƃ����A���ԈႢ�h�~�̂���
     7	1	5.0c�n����K�v�ȋ@�\�݈̂ڐA����
		(�`)�ɂ��R�}���h�L�q�̓Z�L�����e�B�I�ɕs���Ȃ��ߔp�~
		�����}�N����""�����G���[�C��
	2	�h�L�������g������
	4	�����̍œK��
	14	mM7b5��ǉ�����
 
*/ 
  
/*�@�@�戵������ 


�@�@�e�@�\�̊ȈՃ}�j���A���ł��B

�@�@�ڍא������ɂ��܂��ẮA
�@�@�X�N���v�g�����Q�Ƃ̂��ƁB
	
�@���e�@�\�̐��� 



//�@�e�@�\�����ɐ������܂��B


//�@6���J����E��o3e�Ƃ��Ă��邽�߁A
//�@�g���b�N�n�߂ɁAo3�L�q������K�v������܂��B


//�@# ��s �ɁA�u�����ċL�q���ĉ������B
//�@�T�N���ł́A#�̓}�N�����Ӗ����邽�߂ł��B

//�@�@F#m7b5  -> Fsm7b5
//�@�@Bm7#5   -> Bm7s5
//�@�@Abb9#11 -> Abb9s11
	
�@- guitar.h�݊� / �X�g���[�N - 



//�@�X�g���[�N�v���C�����t���܂��B
//�@�R�[�h����w�肷��ƁA��� "�W����"�Ɩ�܂�


�@���o�������w�� / 3,-2


�@�@F7(3)�̂悤�ɁA
�@�@3�ƃ_�E���X�g���[�N���w�肵�܂��B
�@�@����ɂ��A�j���A���X��t���邱�Ƃ��ł��܂�

�@�@F7(-2)�ł���΁A
�@�@�A�b�v�X�g���[�N���x�� 2�ƂȂ�܂�


�@���������̎w�� / l2


�@�@G7(3,2)�Ǝw�肷��ƁA
�@�@G7�̃R�[�h��2���������A�ێ����܂�


�@�����[�g���̎w�� / 6,5,4


�@�@�M�^�[�ł́A�|�W�V�����ɂ���āA
�@�@�������Ⴄ�R�[�h�����t�ł��܂��B

�@�@���̃|�W�V������I�����邽�߂ɁA
�@�@�O�{���郋�[�g������A�ЂƂ��w�肵�܂��B

�@�@E7(3,2,6)�ł���΁A
�@�@6�����[�g�̋��������R�[�h���I������܂�



 
�@- Cutting �J�b�e�B���O - 


//�@�J�b�e�B���O�����t���܂�
//�@�_�E���A�b�v�L�q�݂̂ŁA�X�g���[�N������̂ł��B


�@���J�b�e�B���O���[�h�̎w�� / cut


�@�@G7("du^u",cut)�Ǝw�肵�܂��B
�@�@����ɂ��A�J�b�e�B���O���[�h�Ƃ��ē����܂��B


�@���J�b�e�B���O�̎w�� / D(own) U(p)


�@�@�R�[�h���W���J�W�����ƁA�炷���߂ɂ́A
�@�@�_�E���A�A�b�v�X�g���[�N���J��Ԃ��܂��B

�@�@���̂��߁A��Ԃ�d�A�����Ԃ�u�A�Ƒł��ƂŁA
�@�@��X�g���[�N�̂��鎩�R�ȉ��t�ƂȂ�܂��B

�@�@FM7("d^^u  ^ud^",cut)


�@�@�W���������ƃo������t�������̂ł���΁A
�@�@"du"�̌�ɐ����������܂��B

�@�@FM7("d12^^u  ^ud4^ ",cut)




�@�����[�g���̎w�� / 6,5,4


�@�@E7("du^u",cut,6)�ł���΁A
�@�@6�����[�g�̋��������R�[�h���I������܂��B



 
�@- Arpeggio �A���y�W�I - 


//�@���w������邱�ƂŁA
//�@�A���y�W�I��ł����݂ŉ��t���܂��B


�@���A���y�W�I���[�h�̎w�� / arp


�@�@G7("r232",arp)�Ǝw�肵�܂��B
�@�@����ŁA�A���y�W�I���[�h�Ƃ��ē����܂��B


�@���A���y�W�I�̎w�� / rhu321


�@�@�A���y�W�I���|���|���炷�ɂ́A
�@�@r(oot)���w�肵�A����123���̂ǂꂩ��e���܂��B

�@�@�Ⴆ�΁A���� 1���Œe���̂ł���΁A��{4��"r131"������A
�@�@�����{�ɂ��āA"r131 2131"�̂悤�Ɏw�肵�܂��B

�@�@�R�[�h�̌����ɂ��܂����A5�������� h(armony)�A4�������� u(nison)���A
�@�@�g�p�ł���ꍇ������܂��B

�@�@E7("r131 u131",arp)



�@�����[�g���̎w�� / 6,5,4


�@�@�X�g���[�N�Ɠ����ŁA�����̑I���ł��B

�@�@FM7("r321",arp,6)�ł���΁A
�@�@6�����[�g�̋��������R�[�h���I������܂��B



 
�@- Chdprint �_�C�A�O�����ďo�� - 



//�@�M�^�[�̃|�W�V��������A
//�@���ڎw�肷��Ƃ��Ɏg�p���܂��B



�@���i�b�g�Œ� / N(ut)

�@�@�w�b�h�̃i�b�g"N"���N�_�Ƃ��܂��B


	1E x||   |   |   |   |   |
	2B  ||   |   |   |   |  e|
	3G  ||   |   |   |   |  c|
	4D  ||   |  e|   |   |   |
	5A a||   |   |   |   |   |
	6E x||   |   |   |   |   |
	   N    1   2   3F  4   5F

	Chdprint("x02 55x  N") // A

	10F�ȍ~�̎w��́A���� 9,a,b,c �Ƒ����܂��B(12F��c�܂�)



�@���L�[�w�� / A-G# [root,silent]

�@�@�L�[[A-G#]���w�肷�邱�ƂŁAMML�o�͂��܂��B


	1	x|   |   |   |
	2	 | b5|   |   |
	3	 |   | b3|   |
	4	 |   | b7|   |
	5	x|   |   |   |
	6	 |   |r,s|   |
		   -1   0   1

	Chdprint("rx0 0-1x  F#") // F#m7b5

	���[�g�w�� r,s ���K�v�ƂȂ�܂��B(s: ���[�g�͒e���Ȃ�,���cut�p)



�@-- Chdprint�̓��͗� --


�@�@Include(guitar2.h) l8 q93 o3 Time=(!4)

�@�@Chdprint(,prn,"x02 55x  N") // �J�����̃|�W�V����
�@�@Chdprint({d^du},cut,"rx0 0-1x  F#") // "r"�Ǝw���A�L�["F#"
�@�@Chdprint({r321},arp,"sx0 0-1x  F#") // "s"�T�C�����g���[�g



  
�@���e�@�\�̏o�͑I���ɂ��� 



//�@�ʏ�́A���t�݂̂��s���܂����A
//�@�X�C�b�`��t���邱�ƂŁA�R���\�[���֏o�͂ł����肵�܂��B


�@���v�����g�o�� "prn"

�@�\���a����Ԓl�t���ŃR���\�[���o�͂��܂��B

//�@E7(3,prn)
//�@prn | cut_prn | arp_prn


�@���f�o�b�O�o�� "print"

�@���ۂɍĐ�����MML���R���\�[���o�͂��܂��B
�@��Ƀ`�F�b�N�p�r�ł��B

//�@E7(3,print)
//�@print | cut_print | arp_print


�@���Ԓl "result"

�@�\���a���̕Ԓl�݂̂�Ԃ��܂��B
�@�ϐ��Ɋm�ۂ��A�ė��p����Ƃ��ȂǂɎg���܂��B

//�@E7(3,result)
//�@result | cut_result | arp_result



�@-- prn,print�o�̗͂� --

�@Include(guitar2.h); @27 q93 o3 Time=(!4) l8

�@Fsm7b5("d^du",cut_prn)   // prn�̓R�[�h���e�̕\��
�@Fsm7b5("r131",arp_print) // �f�o�b�N�o��
�@Str TT= Fsm7b5("d^du",cut_result) // �ϐ��m��
�@Print(TT)


 
�@���f�t�H���g�}�N���̕ύX�ɂ��� 

//�@�f�t�H���g�}�N����ύX���邱�Ƃɂ��A
//�@�ȗ��L�q���Ă��܂��B


�@��#Device_set= "MS" //default [ GM | GS | MS ]

�@�@�����^�C�~���O�̑I�������܂��B

�@�@MS�́AMs synth.�p�ɒ��������^�C�~���O���g�p���܂��B
�@�@GS�́A���^�����̂Ȃ��A�\���b�h�ȃ^�C�~���O�ɂ��܂��B
�@�@GM�́A���o�[�W�����̃T�E���h���Č����܂��B


�@��#Mode_set= "std" //default

�@cut��arp�L�q���Ȃ��Ƃ��Ɏg�p���܂��B

�@A7("d^^u",cut)

�@->#Mode_set="cut"
�@->A7("d^^u")

// std | prn     | print     | result     |
// cut | cut_prn | cut_print | cut_result |
// arp | arp_prn | arp_print | arp_result |



�@��#Cut_set= "d^du^udu" //default
�@�@#Arp_set= "r323 1232"

�@�J��Ԃ��̉��t�w����Ȃ��ȂǂŎg�p���܂��B

�@A7("d^^u",cut)

�@->#Cut_set={d^^u}
�@->#Mode_set="cut"
�@->A7


�@��#Sum_chg= "on" //default [on | msg | off]

�@�ʏ�́A���[�g���������A�T�C�����܂����A

�@�����A�T�C�������A�蓮�w��̏ꍇ�A"off"�ɂ��܂��B
�@�������ύX���b�Z�[�W�t��"msg"�ɐؑւ��܂��B



�@��#Down_set= "2" //default
�@�@#Up_set  = "2"

�@�f�t�H���g�̃o�����̑��x��ύX���܂��B

�@A7({d(�o����2)^^u2},cut)

�@->#Down_set= "4"
�@->A7({d(�o����4)^^u2},cut)



�@��#Tune_set= "nomal" //default (regular-tune)

�@�M�^�[�̃`���[�j���O��ς��܂��B
�@�I�[�v���`���[�j���O�̋Ȃ�ł����ލۂɎg�p���܂�

//�@nomal  | openG | openGm      | openD  |
//  openDm | dropD | nash(ville) | DADGAD |



�@-- �}�N���ύX�� --

 Include(guitar2.h)

  @26 q94 l8 o3

�@#Tune_set= "openG";		// openG�֕ύX
�@#Mode_set= "cut";		// ���[�h�ύX

�@[ Am Dm7 Em7 : FM7("d4^ ^^^^ u4r ") ] l1 FM7("d5") l8

  @25 q97

  #Tune_set= "openDm";		// openDm�֕ύX
  #Mode_set="arp";		// ���[�h�ύX
  #Arp_set="r131 u212";		// ���t�w��

  [ Am9 Gbm9 Gm9 : Abm9 ] Abm9



 
�@���e���[�h���ʂŎg�p�ł��镶���ɂ��� 



//�@��{�I��MML�ł���΁A���ʂ��Ďg�p�ł��܂��B


	^    | �^�C���g�p�ł��܂�
	v-11 | ���ʂ̑��Εω����g�p�ł��܂�
	[:]  | �l�X�g�̂��郋�[�v���g�p�ł��܂�

	a- g# qvto q_v_t_o_<>@ ^0-9+-(=) ,|;[:]
	PrintTime,TrackKey,Key�R�}���h���g�p�ł��܂��B
	����ɑΉ�����X�g�g�����ł��B



�@���J�b�e�B���O Cutting

�@"r" �x���A"l" �����A"." �t�_���g�p�ł��܂��B

�@l8 A7({ du^u l12 [du^ u^u] },cut) // �Ȍ�"l12"�ƂȂ�B

// ''[�a��]�͕s�ł��B



�@���A���y�W�I Arpeggio

�@'21'�Ȃǂ̘a���w��ɂ��A�_�u���X�g�b�v���ł��܂��B

�@l8 A7({ r 3'21'3 u 3'21'3 },arp)

// "l"[����]�͕s�ł��B
// "r"�́A�x���ł͂Ȃ����[�g�w��ƂȂ�܂��B



�@���_�C�A�O�����ďo�� Chdprint

�@�_�C�A�O�����̃|�W�V�����ɂ́A
�@�ȉ��̕����ɂ��w�肵�Ă��������B

�@rsx +-0123456789abc NABCDEFGbp#



�@-- �e��}�� --

�@//Cut
�@l8 v77 Fadd9({ [4 d4u3[d3u2]:d6u5] },cut)
�@l8 v77 Fadd9({ [@28,0 q66 du2 Key(-5)@29 <v-11 d> Key=0 ] },cut)

�@//Arp
�@l8 Em7b5({ [r321 ^: 232] 321 },arp)
�@l8 Em7b5({ r 323 > v-11 @29,0 Key=7 'u t6 1' Key(0)< },arp)

�@//Chdprint
�@Chdprint("x02 55x  N")
�@Chdprint(,prn,"x02 55x  N")

�@Chdprint({d^du},cut,"r2-1 102  C")
�@Chdprint({r321},arp,"s2-1 102  C")
 
�@���g�p��̐��� 


	
�@���J�b�R���̋L�q�ɂ��� 


�@�@"" �Ȃ����A{}�ŋ���őΏ����܂��B

�@�@�L���A�A���t�@�x�b�g�����݂��邽�߁A
�@�@string�����łȂ���΁A�G���[�ƂȂ邽�߂ł��B

�@�@Am7(du^u)	->Am7("du^u") or Am7({du^u})
�@�@Am7(r1^3)	->Am7("r1^3") or Am7({r1^3})
 
�@��print�@�\�ɂ��� 


�@�@"Print"�R�}���h�Ƃ̏Փ˂�����邽�߁A
�@�@�g�p����ۂ́A��������"print"�ƋL�ڂ̂��ƁB

�@�@-> Am(3,print)
 
�@�����F�`�F���W�ł̒��� 


�@�@�e�@�\�̓��A�����̂��߁A4step���߂鏈�������Ă��܂��B
�@�@���̂��߁A���F�`�F���W���x��邱�Ƃ�����܂��B

�@�@���̏ꍇ�́A���炩���߉��F��ς��Ă����A
�@�@�Ȃ����߂��x���Ȃǂ��g���A�Ή����ĉ������B

�@�@->r%-4 @25 r%4  Em7
�@�@->r%-4 @26 r%4  FM7
 
�@���A���y�W�I�̎d�l 


�@�@�A���y�W�I�́A����2�{�ȉ��ƂȂ�ꍇ�A
�@�@�o�͂��Ȃ��d�l�ł��B

�@�@->Fpw2("r1^1",arp,6) // 2���݂̂��ƁA�G���[�o��


�@�@�A���y�W�I�ł́A4���R�[�h�ł���΁A
�@�@�ׂ�������A1,2,3,r�Ǝ����ŃA�T�C������܂��B���̂��߁A

�@�@4���R�[�h�ŁA[h]��[u]���Ȃ��ꍇ�A

�@�@�����I��[r]���A[h],[u]�̑��ɍ���������d�l�ƂȂ��Ă��܂��B

�@�@Am7("rhu 321",arp_prn,4)

�@�@->arp :rhu321 | x, x, `a, ``e, ``g, ```c
�@�@->`a`a`a``e``g```c

�@�@Am7("rhu321",arp_prn,5) //5���̏ꍇ�́A[h]��[u]�ɍ�����

�@�@->arp :rhu321 | x, a, `e, `g, ``c, ``e
�@�@->a`e`e`g``c``e
 
�@���A���y�W�I�ƃ��[�v�J�E���^ 


�@�@�A���y�W�I�ł́A�������g�����߁A
�@�@�L�q�ɂ���Ă̓��[�v�J�E���^�̐����ƁA�����������܂���B

�@�@���������邽�߁A�󔒂Ŗ����I�ɕ�������K�v������܂��B


�@�@-> [ 123r]  // [�� 123]
�@�@-> [4 123r] // [4�� 123r]
 
�@��Chdprint�̍��񂹋L�q�ɂ��� 


�@�@Chdprint�ł́A�����ӂ��ɋL�q���Ȃ��ꍇ�A
�@�@���񂹋L�q���ł��܂��B

�@�@Chdprint(,,"x02 55x  N") -> Chdprint("x02 55x  N")


�@�@�����#Mode_set="prn"�Ȃǂ𕹗p�����ہA
�@�@","�́A�L�q�����炷���߂̎d�l�ƂȂ��Ă܂��B

�@�@-> #Mode_set="prn" Chdprint("x02 55x  N")
  
*/ 
  
/*�@�@�N�C�b�N���t�@�����X 
	
�@���w��ł���R�[�h���X�g 

  [# �́As�֒u��������]
�@[pw�̓M�^�[���t�ŁAomit3�R�[�h]
  [(A711)�w��� ->A7sus4�֎���������]

 �@A     |AM7  |AM79   |(AM9)   |AM7s11 |AM713  |AM913
   Am    |Am7  |Am79   |(Am9)   |Am711  |Am911
 �@A7    |A7b9 |A79    |(A9)    |A7s9   |(A711) |A7s11
   A7b13 |A713 |Ab9s11 |(As9b13)|(A913)

   AM7b5 |Am7b5  |Am7b511 |A7b5
   AM7s5 |Am7s5  |(A7s5)
   AmM7  |AmM7b5 |AmM7s5 |AmM79
   A6    |A69    |Am6     |Am69

   Aadd9 |Aadd911 |Amadd9 |Amadd911
   Asus2 |A6sus2  |Asus4  |A7sus4   |A9sus4 |A13sus4
 �@Adim  |Adim7   |Aaug   |Aaug7
 �@Apw2  |Apw3
 
�@���}�N�������\ 

�@#Device_set= "MS" // [GM(old)| GS | MS(new)]

�@#Mode_set= "std" // std��stroke�̂�

�@std | prn     | print     | result     |
�@cut | cut_prn | cut_print | cut_result |
�@arp | arp_prn | arp_print | arp_result |


�@#Cut_set= { d^du ^udu }
�@#Arp_set= { r323 1232 }


�@#Down_set= "2"
�@  #Up_set= "2"


  #Sum_chg= "on"

  on | msg | off |


�@#Tune_set= "nomal" // nomal��regular�`���[�j���O

�@nomal  | openG | openGm      | openD  |
  openDm | dropD | nash(ville) | DADGAD |

 
�@���o�͑����\ 

�@A7(3,2,6)	// guitar.h�݊��X�g���[�N
�@G7(,prn,6)	// �R���\�[���o��
�@F7("d^du",cut,6)	// �J�b�e�B���O
�@E7("r321",arp,5)	// �A���y�W�I

�@Chdprint(-5,2,"x02 55x  N")
�@Chdprint(,prn,"r2-1 102 C")
�@Chdprint("d^du ^udu"     ,cut,"x02  210  N")
�@Chdprint("r[u3:1]r[u2:1]",arp,"r2-1 102  C")

 
�@���e�@�\�̋L�q�� 




	
�@���X�g���[�N / guitar.h�݊� 

�@Include(guitar2.h);

�@@27 q93 o3 Time=(!4) l2
�@Em7b5 A7(11)  Dm7 G7(-5,,6)  C(12,1,5)
 
�@���J�b�e�B���O Cutting 

�@Include(guitar2.h);

�@@26 o3 q96 v99 Time=(!4) l8 #Mode_set="cut"
�@E7sus4

�@Am("l8 d^d^ v88 q18 d3u2^^^")
 
�@���A���y�W�I Arpeggio 

�@Include(guitar2.h);
�@@25 o3 q108 Time=(!4) l8 #Mode_set="arp"
�@E7sus4

  Am("r t+1 232 1 t-1 232 u^^^")
 
�@���_�C�A�O�����ďo�� Chdprint 

�@Include(guitar2.h);

�@@27 o3 v99 Time=(!4) l8
�@Chdprint(" x02 55x  N") // �i�b�g���[�h
�@Chdprint("r2-1 102  C") // �L�[�w�胂�[�h

�@q108 Chdprint(" [r323 123:2]2^^^ ",arp,"x02 55x  N")
�@q96  Chdprint(" [d^d:u^udu]u^^^^ ",cut,"r21 1xx  B")
  
�@����{���^ 

�@Include(gs.h) ResetGS()r4
�@Include(guitar2.h)
�@Time=(!2)


�@//�J�b�e�B���O//

�@#Mode_set="cut"
�@#Cut_set={ d^du ^udu }

�@r%-4 @26 o3 q93 v86 l8 r%4
  Dm7b5 E7 Am7 D7


�@//�A���y�W�I//

�@#Mode_set="arp"
�@#Arp_set={ r131 2131 }

�@r%-4 @25 o3 q115 v106 l8 r%4
  Dm7b5 E7 Am7 D7


�@//Chdprint�̃o�b�L���O//

�@Chdprint(" d^du ",cut,"577 655 N")
�@Chdprint(" r321 ",arp,"r22 100 A")
 
*/ 
  
// �ȉ��A�v���O������ 



 
// �}�N���ݒ� 

#Device_set= "MS" // [GM(old)| GS | MS(new)]

#Mode_set= "std" // [stroke]

// std | prn     | print     | result     |
// cut | cut_prn | cut_print | cut_result |
// arp | arp_prn | arp_print | arp_result |


�@#Cut_set= "d^du ^udu" // "cut"�̉��t�f�t�H���g
�@#Arp_set= "r323 1232" // "arp"

// #Cut_set= "d4^^u ru3^^"
// #Arp_set= "r131 u212"


�@#Down_set= "2" // "cut"�̃_�E���o����
�@#Up_set  = "2" // "cut"�̃A�b�v�o����

  #Sum_chg= "on" // on | msg | off | �T���w�莩���`�F���W


�@#Tune_set= "nomal" // [regular]�`���[�j���O

// nomal  | openG | openGm      | openD  |
// openDm | dropD | nash(ville) | DADGAD |


//  Global�ϐ�

 Str Res_gbl; // �Ԓl
 Str Chd_gbl; // �R�[�h��
 Str Root_gbl; // ���[�g���̎擾



 
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
		}Case("]"){ GT2_ERR({"���[�v�݂̂����Ȃ�"})
		}Default{ If(Loop==""){ Loop=2 } SW=2
		}
		} //sw
	}
	If(SW==0){
		Switch(XX){
		Case("["){ SW=1
		}Case(":"){ GT2_ERR({"':' ����Ɍ����"})
		}Case("]"){ GT2_ERR({"']' ����Ɍ����"})
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
					GT2_ERR({"':' ����������"})
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

  If(SW!=0){ GT2_ERR({"'[:]' �̌`�ƈႤ err"},SW) }

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
		}Default{ GT2_ERR({"�R�}���h�������X�g�ɂȂ�"},Cmd) End;
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
	}Default{ GT2_ERR({"���l�w��~�X�̉\��"},Cmd) End;
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
	}Default{ GT2_ERR({"���l�w�肪�Ȃ��\��"},Cmd) End;
	}
	} //sw
  }

  RR(0)= SW; RR(1)= Cmd; RR(2)= Value; RR(3)= Kigoh;

  Result= RR;

 } //func



 
Function JIKKOH(Array RR){ 

	If(RR(2)==""){
		GT2_ERR({"Jikkoh: ���l���Ȃ�"},RR(1) ) End;
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


	// ������
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

	//While(1){ Num--; PP= (-QQ(Num),PP ); If(Num<=0){ Exit; }  } //Zerominus ->PP: �W�J�ςݐ���

	Str TT= " t__9%.N("+ QQ+ ") q__9%.N("+ PP+ ") v__9.N("+ RR+ ") " //�S���~���[�g

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
		}Default{ GT2_ERR({"'cut'�Œ�`���ꂽ�����ȊO"},XX)
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

	GT2_ERR({"CUTTING ���s�G���["},SW)
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

  Int S_size= SizeOf(S_fret) // �Y���̒��o�̂���

  If(S_size<3){ GT2_ERR({"������3�{����"},S_size,{"���R�[�h"},Chd_gbl) End; }


  Array Fret_value=(" ", Fret); // [^] no bunn

  Array T9value= STRING_ASSGIN("T9R")
  Array Q9value= STRING_ASSGIN("Q9R")
  Array V9value= STRING_ASSGIN("V9R")

  Array W_stuck= ( 0,   0,  0,  0,   0,  0,  0); // waon
  Array G_stuck= (-1,  -1, -1, -1,  -1, -1, -1); // gate
  // ������	   ^    r   h   u    3   2   1

  Int Num; //�Y��
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
			TT= TT+ "r" // [^ -> r] �Q�[�g3��"^"�{��6�ƂȂ�L�щ߂��邽��
			Q9=(Q9, 0);
			V9=(V9, 0);

			If(G_stuck(Num)!=-1){ Gate_number(G_stuck(0))= 0 } //�����T�C�N���x�点��
			// G_num(2)..G_num(4) <- G_num(3)���ォ��ǉ�

		}Else{
			TT= TT+ Fret_value(Num)
			T9=(T9, T9value(Num))
			Q9=(Q9, Q9value(Num))
			V9=(V9, V9value(Num))

			If(G_stuck(Num)!=-1){ Gate_number(G_stuck(Num))= JJ- W_stuck(Num) } //���ݒl�������
		}

		G_stuck(Num)= DD; DD++; // �Q�[�g�J�E���^
		W_stuck(Num)= JJ; If(NF==0){ JJ++; } // �Ō���̏ꏊ
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
		}Default{ GT2_ERR({"'arp'�Œ�`���ꂽ�����ȊO"},XX)
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

				GT2_ERR({"���R�[�h"},Chd_gbl,{"����"}+ (Num+1)+ {"�K�v"},S_size,{"���̎w��"},XX) End;

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

					GT2_ERR({"���R�[�h"},Chd_gbl,{"����"},S_size,{"�w��̕ύX"},XX+ {" -> "}+ Chk)
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


  // ��n��
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

	GT2_ERR({"ARPEGGIO ���s�G���["},SW)
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

		If(Len==0){ GT2_ERR({"�������Ȃ�/"}+ Chd_gbl, Len) End; }

		TT= SPEED_SETTER(Junban,Fret)+ ZZ+ Len+ " q__9=0;t__9=0;v__9=0; "
	}Case("print"){

		If(Len==0){ GT2_ERR({"�������Ȃ�/"}+ Chd_gbl, Len) End; }

		TT= SPEED_SETTER(Junban,Fret)+ ZZ+ Len+ " q__9=0;t__9=0;v__9=0; "
	}
	} //sw

	Result= TT;
 } //func
 
Function STRING_ASSGIN(Str TT,""){ // ������ 

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
		Case("GS"){	RR= ( 0,   0, -4,-12, -16,-24,-28); } //v ����キ
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

 
Function FRETMML(Str Selector, Int Barre, Array Fret){ // ab�� 

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

	//���[�h��������
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
	// ���[�h�s���������ʉ߁A�����ăG���[
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
			Res_gbl= TT; //result�o��
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
			Res_gbl= TT; //result�o��
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
			Res_gbl= TT; //result�o��
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


  If(Cnv=="" &Pos==""){ Pos= Junban; Junban= "" } // Pos�ֈړ�

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
		}Default{ GT2_ERR({"�t���b�g�w�蕶���ȊO�ł�"},XX)
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
		}Default{ GT2_ERR({"�i�b�g�A�L�[�����ȊO�ł�"},XX)
		}
		} //sw
	}
  } //

  If(SizeOf(Fret)!=6){ GT2_ERR({"����6�K�v"},SizeOf(Fret) ) End; }

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
	}Default{ GT2_ERR({"[A,N]���݂��Ȃ��L�[�w��A�������i�b�g�������Ȃ�"},ZZ)
	}
	} //sw


  If(ZZ!="N"){

	Switch(Root_gen){
	Case(3){ Keynote=(5,6,7,8,9, 10,11,0,1,2,3,4)	// 3G
	}Case(4){ Keynote=(10,11,0,1,2, 3,4,5,6,7,8,9)	// 4D
	}Case(5){ Keynote=(3,4,5,6,7, 8,9,10,11,0,1,2)	// 5A
	}Case(6){ Keynote=(8,9,10,11,0, 1,2,3,4,5,6,7)	// 6E
	}Default{ GT2_ERR({"[3-6]���[�g���w�� r,s ������܂���"},Root_gen) End;
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
	}Default{ GT2_ERR({"�`���[�j���O���X�g�ɂȂ� Tune"},Tune) End;
	}
	} //sw

	If(SizeOf(Tuning)!=6){ GT2_ERR({"Open_tuning; [6]���������s��"},SizeOf(Tuning)) End; }

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

  If(Vce==""){ //�w�肪�Ȃ��ꍇ

	Switch(Chdname){

	// Arr= ("5","5","4","5","6",  "6","6","6","6",  "5","5","5") def.

	// Arr= ("5","5","5","4","5",  "5","6","6","6",  "6","5","5") sumi
	// 4D:1 | 5A:1 | 6E:2 �o���[���Ε␳�l


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
		GT2_ERR({"���[�t���b�g�ɂȂ��R�[�h Chdname"},Chdname)
	}
	} //sw

	Vce= Arr(Rootkey)
  }


	Switch(Vce){
	// �I�[�v��pos.�w��
	Case("a5A"){ Number= Vce
	}Case("b5A"){ Number= Vce
	}Case("c5A"){ Number= Vce
	}Case("d4D"){ Number= Vce
	}Case("e6E"){ Number= Vce
	}Case("f4D"){ Number= Vce
	}Case("f6E"){ Number= Vce
	}Case("g-6E"){ Number= Vce
	}Case("g6E"){ Number= Vce

	// �N���[�Y�hpos.�w��
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
		GT2_ERR({""}+ Vce+ {"�|�W�V�����w��ɂȂ� Chdname"},Chdname)
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
	//}Default{ //����͕s��
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
		GT2_ERR({""}+ Number+ {"�ɂȂ��R�[�h Chdname"},Chdname)
	}
	} //sw


	Root_gbl= Number // Global


	Num= BARRE_CHK(Fret)

	If(Barre< Num){ Barre= Barre+ 12 }

	Fret= ROOTHOSEI(Root_hosei(0),Root_hosei(1),Fret)

	If(SizeOf(Fret)!=6){

		GT2_ERR({"PI_CHDLIST: ����6�K�v"},SizeOf(Fret) )
		End;
	}

	MML_OUT(Cnv,Junban,Barre,Fret)

 } //func

  	
// Chord Function�}�N�� 


#Gt2_Chd= {Function #?1#?3(Str Spd,Str Lgh,Str Vce){ Chd_gbl="#?1#?3"; PI_CHDLIST("#?2","#?4", Spd,Lgh,Vce) Result=Res_gbl; }}
// "#?2","#?4"���K�v

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
 } // "C","0"���K�v

// �݊����̂���
#Chd_N={M9}	#Chd_Q={Maj79}	#Chd_list;
#Chd_N={m9}	#Chd_Q={min79}	#Chd_list;
#Chd_N={9}	#Chd_Q={79}	#Chd_list;

#Chd_N={711}	#Chd_Q={7sus4}	#Chd_list;
#Chd_N={913}	#Chd_Q={69}	#Chd_list;
#Chd_N={s9b13}	#Chd_Q={min7s5}	#Chd_list;
#Chd_N={7s5}	#Chd_Q={aug7}	#Chd_list;


#Chd_N={}	#Chd_Q={Maj}	#Chd_list; // Major
#Chd_N={M7}	#Chd_Q={Maj7}	#Chd_list; // M7,m7�����Ă邽��
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
 
//�@�ȏ�v���O�������A�I��� 



 
/*�@�@�ڍא����� 


�@���ڂ��������y�сA
�@�g�����̃m�E�n�E�Ȃǂ��ڂ��܂���



	
�@���e���V�����R�[�h 


//�@�R�[�h�ďo���̎d�l�ɂ���


�@- �e���V�����̃Z�I���[ -


�@�@�s�A�m�́A9�x�̏ꍇ���[�g���Ȃ��܂����A
�@�@�M�^�[�ł͕��ʃ��[�g�͏Ȃ��܂���B

�@�@9,11,13�ł����Ă��ȗ��́A5�x�Ƃ��܂����B
�@�@M913�̂悤��6�a���ł́A�����t�H�[���Ɍ���3�x���Ȃ��܂��B

�@�@�������������肵�Ă���e���V�����̂݁A�Z���N�g���܂����B
�@�@�|���g�[�i���ȃe���V�����ɂ��ẮAChdprint���g�p���ĉ������B



�@/ �ʗ�Ƃ͈Ⴄ�R�[�h�ɂ��� /

�@�@�ʏ� add9�́Asus2�̃R�[�h����p����܂����A
�@�@add9�ɂ́A3�x��t�����Ă��܂��B

�@�@Csus2 + "e" -> Cadd9


�@/ �����\���̃R�[�h /

�@�@�ȉ��̃R�[�h�́A�������̂ƂȂ��Ă���A
�@�@�����Œu�������Ă��܂��B

�@�@AM9		= AM79
�@�@Am9		= Am79
�@�@A9		= A79

�@�@A711	= A7sus4
�@�@A913	= A69
�@�@As9b13	= Am7s5
�@�@A7s5	= Aaug7


�@/ �\�����������ł���㗝�R�[�h /

�@�@G b9#11�́A���R�[�h�Ɠ����ł��B

�@�@G b9s11  = Db7


�@�@�ȉ��́A�Z�O�x��̃R�[�h�Ɠ����ł��B
�@�@�����̍D���Ȃق���I�����ĉ������B

�@�@Am7      = C6
�@�@Am711    = C69
�@�@Am7b5    = Cm6
�@�@Am7b511  = Cm69


�@�@mM7b5�́A��2�x���̑㗝�R�[�hM7�Ɠ����ł��B

�@�@CmM7b5   = BbM7


�@�@m911�́A11th�ɂ��m3���Ȃ���邽�߁A
�@�@��2�x���̑㗝�R�[�hadd9�Ɠ����ł��B

�@�@Cm911    = Bbadd9


�@�@7b9�͋����ɓ����A�@�\��dim7�ƕς��Ȃ����߁A
�@�@�\�������߂��A������̑㗝�R�[�hdim7���g���ق����A
�@�@�ǂ���������܂���B

�@�@G7b9    -> G#dim7
 
�@�����t�Z�@�Ƃ̌��ˍ��� 



//�@�M�^�[�炵�����邽�߂́A
//�@�t���b�g��ɂ����鉉�t�Z�@�̃R�c�ł�

	
�@- �n�C�R�[�h�|�W�V�����ŉ^�w - 


�@�@�ʏ�A�J�������g�������[�R�[�h�Œe���̂ł����
�@�@���[�g���͎����I�ɑI������܂����A

�@�@�n�C�R�[�h�|�W�V�����ł̉^�w������ꍇ�A
�@�@���[�g���̎w��őΉ����邱�ƂɂȂ�܂�



�@�@�Ⴆ�΁A| D | A | G �Ȃǂ̃R�[�h�`�F���W�ł���΁A

	1E ||   |   |   |   |   |
	2B ||   |   |   |   |   |
	3G ||   |   |   |   |   |
	4D ||   |   |   |   |   |
	5A ||   |   |   |   |  d|
	6E ||   |   |  g|   |  a|
	  N    1   2   3F  4   5F


�@�@D(,,5) A(,,6) G(,,6) �ƃ|�W�V�����w���t���܂��B
�@�@����ŁAd>a>g�ƃ��[�g����ς��ĉ��t���܂��B

�@�@Flet���ێ����A5������ 6���ւ�
�@�@4�x�̃��[�g�ړ������邱�ƂŁA����炵���Ȃ�܂�


 
�@- �n�C�R�[�h�w��ɂ����錷���̉��� - 


�@�@�n�C�R�[�h�ŁA1���A�܂��̓��[�g�����Ȃ��A
�@�@�܂��̓h�~�i���g�{�g���ɂȂ�ቹ���̒ǉ��ȂǁA
�@�@�ׂ����w����������ꍇ�A�ȉ��̃I�v�V�����őΉ����܂��B



�@�@�w��̊�{�X�^�C���͈ȉ��̂Ƃ���ł��B

	"#"�t���ŁA����΁A�ቹ����ǉ�
	"b"�t���́A���[�g�����Ȃ�
	"x"���t���ƁA1�����~���[�g���܂�

�@�@"4#"  | 4�����[�g 5���t���A         5,4,3,2,1����e��
�@�@"4x"  | 4�����[�g �~���[�g1���A     4,3,2���̂�
�@�@"4b"  | 4�����[�g ���[�g���Ȃ��A    3,2,1���̂�
�@�@"4bx" | 4�����[�g �~���[�g1���A���[�g���Ȃ��A3,2���̂�


�@�@D(,,"5#x") A(,,"6x") G(,,"6x") �̂悤�ɋL�q���܂�


�@�@���������̃o���G�[�V�����ꗗ

�@�@6,6x, 6b,6bx |  5#,5#x, 5,5x, 5b,5bx | 4#,4#x, 4,4x, 4b,4bx


 
�@- �ܒe���w��̎d�l - 


�@�@�R�[�h�\�������猩���A�e���̑Ή��\�ł��B



//�@�@r	| 6������ : (���[�g���ƂȂ�܂�)
//�@�@h	| 5������ : (�ܓx�̃n�[���j�[��l�x�ł��邱�Ƃ����� )
//�@�@u	| 4������ : (���x�̃��j�]���Ⓑ�Z���x������ )
//�@�@3	| 3������ : (�l�x�Ⓑ�Z�O�x������)
//�@�@2	| 2���@�@ : (�n�[���j�[��Z�x�̒S��������)
//�@�@1	| 1���@�@ : (��x�̃e���V���������j�]��������)


�@�@��{�I�ɁA�ׂ����̗D��x�������A
�@�@�A���y�W�I��͂����d�l�ƂȂ��Ă���A
�@�@�����ɉ����āArhu�Ȃǂ������ŃA�T�C������܂��B
�@�@��ԒႢ�����A�K���Ar�ƂȂ�܂��B

�@�@�|�W�V������6�́Arhu321�A
�@�@�|�W�V������5�́A ru321�A
�@�@�ȉ��Ar321, r21�ƁA�g����������d�l�ł��B



  
�@�����H�I�Ȗ}�� 



//�@�����H�I�Ȏg�p�@���ڂ��܂���


	
// Cutting / 16beat�J�b�e�B���O 


�@�@�Q�[�g�≹�ʁA���΃I�N�^�[�u����g���āA
�@�@�V���R�y�[�V������u���b�V���O���A
�@�@����邱�ƂŎ��������o���܂��B


�@��16beat���b�N�J�b�e�B���O�̗�


�@�@Include(guitar2.h); @28 l16 q88 o3 v101 Time=(!4)
�@�@[
�@�@Dm7("d1",cut,4)'>db-<'
�@�@Gm7("q88 v+36 d2u3  q18 v-36 [3 d1u2]",cut,"5x")
�@�@Gm7("q88 v+36 d2^d2",cut,"5x")
�@�@Dm7("u2^^",cut,4)
�@�@]


 
// Arpeggio / �A���y�W�I�̃o���G�[�V���� 


�@�@�R���g���[���`�F���W��II-V�����ɂ��A
�@�@�A���y�W�I�p�^�[����ł��B


�@���Z�O�x���7th��II-V���[�V����


�@�@Include(guitar2.h); @27 o3 q108 Time=(!4)

�@�@#A= "[r 321 u 321]"		l8 EbM7( #A,arp) // P1
�@�@#B= "[r 323 1 232]"		l8  Am7( #B,arp) // P2
�@�@#C= "[r 312 u 312]"		l8   D7( #C,arp, 5) // P3 5�����[�g
�@�@#D= "[r 3'21'3 u 3'21'3]"	l8  GM7( #D,arp) // P4
�@�@#E= "['r21'3'21'3 'u21'3'21'3]"	l8  Bb7( #E,arp) // P5
�@�@#F= "[r 321 ^232]"		l8  EbM7(#F,arp) // P6
�@�@#G= "['r1'232 'u1'232]"	l8  Fs7( #G,arp) // P7
�@�@#H= "[r 32123 u 32123]"	l12 BM7( #H,arp) // P8
�@�@#I= "[r32 h32 u1]"		l8  Fm7( #I,arp) // P9
�@�@#J= "[r32 u12 32]"		l8  Bb7( #J,arp) // P10
�@�@#K= "['r2'3u 1^:23^]^^^"	l8  DsM7(#K,arp) // P11


//�@�Q�lURL
�@-- http://guitar.zashiki.com/practice/gd03.html


 
// Arpeggio / �{�T�m�o�p�^�[�� 


�@�@����̂���e���V������
�@�@�����ƁA��肻��炵���Ȃ�܂��B


�@����{�{�T�m�o���Y��


�@�@Include(guitar2.h); @27 v101 l8 q88 o3 Time=(!4)

�@�@AM9(   " 'u13'^'123'^ r'13'^ "       ,arp,"5")
�@�@Asdim7(" '123'  u'13'^'13' r^'123'^ ",arp,"5#")
�@�@Bm9(   " 'u13'^'123'^ r'13'^ "       ,arp,"5#")
�@�@E9(    " '123'  u'13'^'13' r^'123'^ ",arp, 6)

//�@�Q�lURL
�@-- https://www.youtube.com/watch?v=89EALHQy3T0


 
// Chdprint"N" / �i�b�g���[�h�ł̕����R�[�h 


�@�@6���h�~�i���g�y�_����t�����A
�@�@2���̉������̂݃`�F���W����A��Ԃ̓����N���V�F�ł��B

�@�@�t���b�g��"8765"�ƕω����邱�ƂŁA�R�[�h���ω����܂��B


�@���y�_���t���N���V�F�����ړ��̗�


�@�@Include(guitar2.h)
�@�@@26 o3 q96 v99 l8 Time=(!4)
�@�@#Mode_set="cut"

�@�@Chdprint("557 785 N") // Dsus4/A
�@�@Chdprint("557 775 N") // D/A
�@�@Chdprint("557 765 N") // Dm/A
�@�@Chdprint("557 755 N") // Dadd9/A

�@�@@25 q108 v106
�@�@#Mode_set="arp"

�@�@Chdprint("557 785 N") // Dsus4/A
�@�@Chdprint("557 775 N") // D/A
�@�@Chdprint("557 765 N") // Dm/A
�@�@Chdprint("557 755 N") // Dadd9/A


 
// Chdprint"A" / �L�[�w�胂�[�h�ł̃e���V���� 


�@�@�J�|�^�X�g�I�ɁAA���[�g���Œ肵���܂܁A
�@�@������K���ɕ��ѕς��A�e���V�������������̂ł��B


�@���e���V�����̑����


�@�@Include(guitar2.h)

�@�@@26 o3 q96 v99 l8 Time=(!4)
�@�@#Mode_set="cut"

�@�@Chdprint("r22 102 A")  // Aadd9
�@�@Chdprint("r22 010 A")  // F/A
�@�@Chdprint("r20 202 A")  // A9sus4
�@�@Chdprint("r20 013 A")  // Am7 b13

�@�@@25 q108 v106
�@�@#Mode_set="arp"

�@�@Chdprint("r22 102 A")  // Aadd9
�@�@Chdprint("r22 010 A")  // F/A
�@�@Chdprint("r20 202 A")  // A9sus4
�@�@Chdprint("r20 013 A")  // Am7 b13


�@�@�R�[�h�l�[���͌�t���ƂȂ��Ă܂��B//�o�͂Ŋm�F

 
// #Tune_set / �{�g���l�b�N�t�@ 


�@�@�܂��A�I�[�v���`���[�j���O�ɂ��܂��B

�@�@#Tune_set= "openG"; �Ɠ��͂��A
�@�@�J����G ����悤�ɁA�ύX���ĉ�����



�@���X���C�h�M�^�[�A�{�g���l�b�N�t�@�̗�


�@�@Include(guitar2.h)
�@�@#Tune_set= "openG"
�@�@@27 l8 o3 q108

�@�@BR=7
�@�@Sub{ p%.T(0,8191,!8^16) r16 rr  r2 p%.T(8191,0,!8) }
�@�@Sub{ rrr M.T(88,16,!2) }
�@�@Chdprint({ d^d^ ^^^^ ^u^^ },cut,"xr0 000  D" })


  
�@���X�N���v�g�̊T�v�ɂ��� 



//�@guitar2.h�X�N���v�g�́A
//�@�K�v�Ǝv����T�v�݂̂����ɋL���܂���


	
�@- �X�g���[�N / guitar.h�݊� - 



//�@guitar.h�Ƃ̊��S�Ȍ݊��́A�����ɂ͂����Ď���Ă܂���B

�@F#�̏ꍇ�Agt.h�ł�Fp�ƋL�ڂ��܂����Agt2.h�ł́AFs�ƋL�ڂ��܂��B
�@p��b���ǂ����Ă��邽�ߕύX���܂����B

�@guitar.h�̓R�[�h���ǂݍ��܂��ƁA�ŏI�I�� o5���������܂�܂��B
�@guitar2.h�ł͍���������邽�߁A�R�[�h���ǂݍ��܂�Ă��A
�@o�w��l�͕ς��Ă͂��܂���B



 
�@- �J�b�e�B���O Cutting - 



//�@�e���A�܂��̓X�g���[�N�����ɂ���āA
//�@�^�C�~���O�ƁA���ʕω��������Ă܂�


�@guitar.h�́A"t"�݂̂Ńo�������Č����Ă��܂��B
�@���ꂾ�Ɖ��ƂȂ��A���t�I�Ɉ�a�������������߁Aguitar2.h�ł́A
�@"t__9%"��"q__9%"�̑��Βl�ɂ��Q�[�g���␳��ǉ����܂����B

�@����ɂ��R�[�h�̃|�W�V�����`�F���W���A�����I��
�@�S���~���[�g��������A�M�^�[�炵�������Č�����܂��B

�@Dm      D    �@�@�@�@Dm      D
�@------|======�@�@�@�@------|======
�@  ----|--    �@���@�@  ----|
�@      |  ====�@�@�@�@      |  ====
�@    --|----==�@�@�@      --|    ==

�@�܂����X�e�b�v�ł����Aguitar.h��艉�t�^�C�~���O�𑁂߂Ă��܂��B
�@�����^�C�~���O��x�点�����Ƃ��́At�ł̒�����A
�@r%1�̂悤�ȋx����ǉ����Ă�������


 
�@- �A���y�W�I Arpeggio - 


//�@�A���y�W�I�̖͎��}


�@�@�ʏ�A���y�W�I�́A�ܒe���̖͎��}


�@�@C7({ r32123 r123 }) C7({ r123 r32123 })

�@�@| C7:         | C7:
�@      1-----1---|  1-----1---
�@     2-2-----2--|   2---2-2--
�@    3---3-----3-|    3-3---3-
�@  R-------R-----|R----R------


�@�@�r�؂�̂Ȃ��A���y�W�I�́A�������[�v�W�J�͎��}


�@�@C7({ [r32123 r123] })

�@�@| C7:
�@      1-----1---|----1-----1---
�@     2-2-----2--|---2-2-----2--
�@    3---3-----3-|--3---3-----3-
�@  R-------R-----|R-------R-----



//�@�A���y�W�I�ɂ�����A�Q�[�g���̎d�l

�@�@'ac^^'e �̂悤�ȁAc�����̂΂��a���w��́A�d�l��ł��܂���B

�@�@�A���y�W�I�ł́A��s�w��ŃQ�[�g������t���Ă���d�l��A
�@�@^ �́A�����ŁAr �ɕϊ����Ă��܂��܂��B

�@�@'ac^'e -> 'acr'e // ���̂悤�ɏo�͂��܂�


�@�@�����A�ϊ������A^ �̂܂܏�������ƁA
�@�@�T�N���̃^�C�́A�Q�[�g����ύX���邱�ƂőΏ����邽�߁A
�@�@�ȉ��̗l�ɂȂ��Ă��܂��A�_�����o�͂𓾂��Ȃ����߂ł�


�@�@    1---|        |�@�@�@    1---|        |
�@�@2-------|----    |�@���@2-------|--------|--------|
�@�@r-------|        |�@�@�@r-------|        |







  
*/ 


  
