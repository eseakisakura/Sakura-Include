// title:        "guitar2.h" ver6.3beta 
// description:  diagramMML�ϊ��t��guitar�x���X�N���v�g (22/ 1/ 5)
// keywords:     SAKURA Function     Powered by 04coreworks
 
/*  �@�T�v 


	�M�^�[��MML�������݂��T�|�[�g����w�b�_�ł��B
	�R�[�h�����L�����邱�Ƃɂ���ĉ��t���܂��B

	�M�^�[���L�̃J�b�e�B���O��A���y�W�I���A
	�ȒP�Ȏw��ɂ��Č��ł���悤�ɂ��܂����B


	guitar2.h�́A�\�����G�f�B�^�ɑΉ����Ă��܂��B
	�� guitar.h�Ƃ͈ꕔ�݊���������܂��B


	Include�t�H���_�ɓ���Ďg���܂��B
	guitar2.h���A�T�N���ATW-music2�́AInclude�t�H���_�ɓ���ĉ������B


	�� ���l�[�����K�v�ȏꍇ

	�g���q"h"���A���炩�̃\�t�g�ɂ��o�^����Ă���P�[�X�ɂ����āA
	"guitar2.h.mml"�̂悤�Ƀ��l�[������邱�Ƃ�����܂��B

 	���̏ꍇ�A�t�H���_�I�v�V�����́A
	"�o�^����Ă���g���q�͕\�����Ȃ�"�̃`�F�b�N���ꎞ�I�ɊO���A
	�g���q��\������悤�ɂ�����A���l�[�����Ă݂ĉ������B
	 
�@�����ӓ_ 


//�@# ��s �ɁA�u�����ċL�q���ĉ������B
//�@�T�N���ł́A#�̓}�N�����Ӗ����邽�߂ł��B

//�@�@F#m7b5  -> Fsm7b5
//�@�@Bm7#5   -> Bm7s5
//�@�@Abb9#11 -> Abb9s11


//�@��6���J��E��o3e�Ƃ��Ă��邽�߁A
//�@�g���b�N�n�߂ɁAo3�L�q������K�v������܂��B

//�@����������t�����邽�߁Aq__9,v__9,t__9�͎g�p�ς݂ƂȂ�܂��B



//�@TimeBase=192 �̂悤�ȍׂ����`�b�N�ݒ�ɂ����āA
//�@�Q�[�g�w���q120 �ȏ�̎w�肪����ƁA

//�@�m�[�g�I���A�m�[�g�I�t�̃^�C�~���O�̊֌W��A
//�@�����r�؂���肪����܂��B

//�@�ł��邾���Aq120 �ȉ��ŉ^�p���ĉ������B

 
�@���Ɛӎ��� /�g�p���� /���쌠�Ȃ� 


�@�EApache���C�Z���X2.0��K�p���ĉ�����

�@�E���X�N���v�g�Q���g�p���ĉ��炩�̖�肪�N�����Ă��A
�@�@�ӔC��v�����Ȃ�����

�@�E�Ĕz�z����ۂ́A���t�@�C�����ێ����ĉ�����


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
	11	Cutting�ŕt�_�ɂ���
     7	14	Arpeggio�̃p�����[�^����
	28	Cutting�̃p�����[�^���� ->9.13�p�~
     8	1	Arpeggio�̃p�����[�^����
	27	Fretnote�̔p�~�ɔ����C��
     9	13	Cutting��tqv__8�p�~
	24	Arpeggio�̃T���w�莩���`�F���W�ǉ�
	25	sus2�L�q�ł�add9�Ƃ����Asus4�̊ԈႢ�C��

  20 6 19	ver5.0c��p�~�Aver4.5�n����̔h����ver6.0�Ƃ���
	29	�e���V�����R�[�h�̒ǉ�
	30	#��p�łȂ�s�Ƃ����A���ԈႢ�h�~�̂���
     7	1	5.0c�n����K�v�ȋ@�\�݈̂ڐA����
		(�`)�ɂ��R�}���h�L�q�̓Z�L�����e�B�I�ɕs���Ȃ��ߔp�~
		�����}�N����""�����G���[�C��
	2	�h�L�������g������
	4	�����̍œK��
	14	mM7b5��ǉ�����

  21 12 8	�����������𑝂₵��
		(A911)->A9sus4�A(A1113)->A13sus4�A(Am913)->Am69
		Arpeggio�̃p�����[�^�����ACutting��r-�ւ̑Ή�������
	18	�I���R�[�h��Lyric�o�͂�ǉ�����
	20	�O���R�}���h�́A(�����ʂ̒�)�ɋL�q����悤�ɁA�ύX����
	27	XG���[�h��arp�^�C�~���O���̏C��������

  22 1 5	Arpeggio�̏o�͕������V����
		m��mute�Ƃ��Ēǉ�
		cutting��du�ɑ���������Length,�o�����Ƃ���
		stroke�̎d�l��Length,�o�����Ə��Ԃ��t�ɂ���
		Fret_Mml�Ń}�C�i�X�l�ɑΉ�����
		upper,drop��open_tuning��ǉ�����

 	
*/ 
  
/*�@�@�戵������ 


�@�@�e�@�\�̊ȈՃ}�j���A���ł��B

�@�@�ڍא������ɂ��܂��ẮA
�@�@�X�N���v�g�����Q�Ƃ̂��ƁB
	 
�@���g�p��̐��� 


	
�@���J�b�R���ł̋L�q�ɂ��� 


//�@"" �Ȃ����A{}�ŋ���őΏ����܂��B

//�@�L���A�A���t�@�x�b�g�����݂��邽�߁A
//�@string�����łȂ���΁A�G���[�ƂȂ邽�߂ł��B

//�@-> Am7("du^u") or Am7({du^u})
//�@-> Am7("r1^3") or Am7({r1^3})
 
�@��print�@�\�ɂ��� 


//�@"Print"�R�}���h�Ƃ̏Փ˂�����邽�߁A
//�@�g�p����ۂ́A��������"print"�ƋL�ڂ̂��ƁB

//�@-> Am(3,print)
 
�@�����F�`�F���W�ł̒��� 


//�@�e�@�\�̓��A�����̂��߁A4step���x���߂鏈�������Ă��܂��B
//�@���̂��߁A���F�`�F���W���x��邱�Ƃ�����܂��B

//�@���̏ꍇ�́A���炩���߉��F��ς��Ă����A
//�@�Ȃ����߂��x���Ȃǂ��g���A�Ή����ĉ������B

//�@-> r-8 @25 r8  Em7
//�@-> r-8 @26 r8  FM7
 
�@���A���y�W�I�̎d�l 


//�@�A���y�W�I�́A����2�{�ȉ��ƂȂ�ꍇ�A
//�@�o�͂��Ȃ��d�l�ł��B

//�@->Fpw2("r1^1",arp,6) // 2���݂̂��ƁA�G���[�o��


//�@�A���y�W�I�ł́A4���R�[�h�ł���΁A
//�@�ׂ�������A1,2,3,r�Ǝ����ŃA�T�C�����܂��B���̂��߁A

//�@4���R�[�h�ŁA5����6�����Ȃ��ꍇ�A

//�@�����I��[r]���A[h],[u]�̑��ɍ���������d�l�ƂȂ��Ă��܂��B
//�@(�f�t�H���g���[�h��#Sum_chg= "off"�Ƃ���΁A�蓮�w�����)

//�@Am7("rhu 321",arp, 4) | x, x, `a, ``e, ``g, ```c

//�@-> rrr321�@
//�@-> `a`a`a ``e``g```c
 
�@���A���y�W�I�ƃ��[�v�J�E���^ 


//�@�A���y�W�I�ł́A�����Ŏw�肷�邽�߁A
//�@�L�q�ɂ���ẮA���[�v�J�E���^�̐����ƌ����������܂���B

//�@���������邽�߁Aspace�Ŗ����I�ɕ�������K�v������܂��B


//�@-> [ 123r]  // [ space 123]
//�@-> [4 123r] // [4 space 123r]
 
�@��Chdprint�̍��񂹋L�q�ɂ��� 


//�@Chdprint�ł́A�����ӂ��ɋL�q���Ȃ��ꍇ�A
//�@���񂹋L�q���ł��܂��B

//�@Chdprint(,,"x02 55x  N") -> Chdprint("x02 55x  N")


//�@�����#Mode_set="prn"�Ȃǂ𕹗p�����ہA
//�@","�́A�L�q�����炷���߂̎d�l�ƂȂ��Ă܂��B

//�@-> #Mode_set="prn" Chdprint("x02 55x  N")
  
�@���e�@�\�̐��� 


	 
�@- Stroke �X�g���[�N  - 


//�@�X�g���[�N�v���C�����t���܂�
//�@�R�[�h����w�肷��ƁA��� "�W����"�Ɩ�܂��B

//�@guitar.h�ƌ݊����Ƃ邽�߂̋@�\�ł��B

�@-- Stroke�̓��͗� --

�@�@A7(4)

�@�@E7(1,2)
�@�@Dm7(2,3,6)


�@���������̎w�� / l2


�@�@G7(2)�Ǝw�肷��ƁA
�@�@G7�̃R�[�h��2���������A�ێ����܂�


�@���o�������w�� / 3,-2


�@�@F7(2,3)�̂悤�ɁA
�@�@3�ƃ_�E���X�g���[�N���w�肵�܂��B
�@�@����ɂ��A�j���A���X��t���邱�Ƃ��ł��܂��B

�@�@F7(2,-3)�ł���΁A
�@�@�A�b�v�X�g���[�N���x�� 3�ƂȂ�܂�


�@�����[�g���̎w�� / 6,5,4


�@�@�M�^�[�ł́A�|�W�V�����ɂ���āA
�@�@�������Ⴄ�R�[�h�����t�ł��܂��B

�@�@���̃|�W�V������I�����邽�߂ɁA
�@�@�O�{���郋�[�g������A�ЂƂ��w�肵�܂��B

�@�@E7(2,3,6)�ł���΁A
�@�@6�����[�g�̋��������R�[�h���I������܂�



 
�@- Cutting �J�b�e�B���O - 


//�@�J�b�e�B���O�����t���܂�
//�@�_�E���A�b�v�L�q�݂̂ŁA�X�g���[�N������̂ł��B

�@-- Cutting�̓��͗� --

�@�@A7("d^^u d^d^^ ")

�@�@E7("du^m du^^",cut)
�@�@Dm7("d^^^ ^mdu",cut,5)


�@���J�b�e�B���O�̎w�� / dumr

�@�@FM7("d^^u  ^ud^",cut)

�@�@�R�[�h���W���J�W�����ƁA�炷���߂ɂ́A
�@�@ d(own)�Au(p)�X�g���[�N���J��Ԃ��܂��B

�@�@���̂��߁A��Ԃ�d�A�����Ԃ�u�A�Ƒł��ƂŁA
�@�@��X�g���[�N�̂��鎩�R�ȉ��t�ƂȂ�܂��B


�@�@l2 FM7("d8u8^4^  d4d4^ ",cut)

�@�@��������ɕt����ƁA�������ɂȂ�܂��B


�@�@l2 FM7("d8u8,7^4^  d4d4,11^ ",cut)

�@�@�W���������ƃo������t�������̂ł���΁A
�@�@�������̌�ɐ����������܂��B


�@�@"m","r"�́A�~���[�g�ƂȂ�܂��B


�@���J�b�e�B���O���[�h�̎w�� / cut

�@�@G7("du^u",cut)�Ǝw�肵�܂��B
�@�@����ɂ��A�J�b�e�B���O���[�h�Ƃ��ē����܂��B



�@�����[�g���̎w�� / 6,5,4

�@�@E7("du^u",cut,6)�ł���΁A
�@�@6�����[�g�̋��������R�[�h���I������܂��B


 
�@- Arpeggio �A���y�W�I - 


//�@���w������邱�ƂŁA
//�@�A���y�W�I��ł����݂ŉ��t���܂��B

�@-- Arpeggio�̓��͗� --

�@�@A7("r321 u321")

�@�@E7("r231 u231",arp)
�@�@Dm7("r131 3131",arp,5)


�@���A���y�W�I�̎w�� / rhu321m

�@�@E7("r13m u131",arp)

�@�@�A���y�W�I���|���|���炷�ɂ́A
�@�@"r"(oot)���w�肵�A����"123"���̂ǂꂩ��e���܂��B

�@�@�Ⴆ�΁A���� 1���Œe���̂ł���΁A��{4��"r131"������A
�@�@�����{�ɂ��āA"r131 2131"�̂悤�Ɏw�肵�܂��B

�@�@�R�[�h�̌����ɂ��܂����A5�������� "h"(armony)�A4�������� "u"(nison)���A
�@�@�g�p�ł���ꍇ������܂��B

�@�@"m"�́A�S���~���[�g�ƂȂ�܂��B


�@���A���y�W�I���[�h�̎w�� / arp

�@�@G7("r232",arp)�Ǝw�肵�܂��B
�@�@����ŁA�A���y�W�I���[�h�Ƃ��ē����܂��B



�@�����[�g���̎w�� / 6,5,4

�@�@�X�g���[�N�Ɠ����ŁA�����̑I���ł��B

�@�@FM7("r321",arp,6)�ł���΁A
�@�@6�����[�g�̋��������R�[�h���I������܂��B



 
�@- Chdprint �_�C�A�O�����ďo�� - 


//�@�M�^�[�|�W�V�����ɂ��A
//�@���ڎw�������Ƃ��Ɏg�p���܂��B

�@-- Chdprint�̓��͗� --

�@�@Chdprint(,prn,"x02 55x  N") // �J�����̃|�W�V����

�@�@Chdprint({d^du},cut,"rx0 0-1x  F#") // "r"�Ǝw���A�L�["F#"
�@�@Chdprint({r321},arp,"sx0 0-1x  F#") // "s"�T�C�����g���[�g


�@���i�b�g�Œ� / N(ut)

�@�@��Ƀw�b�h�̃i�b�g"N"���N�_�Ƃ��܂��B

	Chdprint("x02 55x  N") // A

	1E x||   |   |   |   |   |
	2B  ||   |   |   |   |  e|
	3G  ||   |   |   |   |  c|
	4D  ||   |  e|   |   |   |
	5A a||   |   |   |   |   |
	6E x||   |   |   |   |   |
	   N    1   2   3F  4   5F


	10F�ȍ~�̎w��́A���� 9,a,b,c �Ƒ����܂��B(12F��c�܂�)



�@���L�[�w�� / A-G# [root,silent]

�@�@�o���[����L�[[A-G#]���N�_�Ƃ��܂��B

	Chdprint("rx0 0-1x  F#") // F#m7b5

	1	x|   |   |   |
	2	 | b5|   |   |
	3	 |   | b3|   |
	4	 |   | b7|   |
	5	x|   |   |   |
	6	 |   |r,s|   |
		   -1   0   1

	���[�g�w�� r,s ���K�v�ƂȂ�܂��B(s: ���[�g��e���Ȃ�)



  
�@���e���[�h���ʂ̃R�}���h�����ɂ��� 


	r	| �x���ł����A�A���y�V�I�ł̓��[�g���Ӗ����܂�
	^	| �^�C
	m	| �~���[�g

	[:]	| �l�X�g�̂��郋�[�v���g�p�ł��܂�


	d^du v90 d^^^ �̂悤�ɁA�O���R�}���hv90��}������ꍇ�A
	d^du (v90) d^^^ �̂悤�ɏ����ʂ̒��֋L�q���ĉ������B

	�}��
	A7("d^du (v90) d^^^",cut)


�@���J�b�e�B���O Cutting

�@"r" �x���A"." �t�_���g�p�ł��܂��B

�@l8 A7(" du^u (l12) [du^ u^u] ",cut) // �Ȍ�"l12"�ƂȂ�B

// "'"[�a��]�͕s�ł��B


�@���A���y�W�I Arpeggio

�@"r"�́A�x���ł͂Ȃ����[�g�w��ƂȂ�܂��B

�@'21'�Ȃǂ̘a���w��ɂ��A�_�u���X�g�b�v���ł��܂��B

�@l8 A7({ r 3'21'3 u 3'21'3 },arp)

// "l"[����]�͕s�ł��B


�@�O���R�}���h�́Amml�W�J�̖��ōD�܂�������܂���B
�@�g���ꍇ�́A�ύX�l�������Ŋ�������悤�ɋL�q����K�v������܂��B

�@A7("r321 (v_+11) r321") ���Ɩ�肪���邽�߁A
�@A7("r321 (v_+11) r321(v_-11)") �̂悤�ɋL�q����B

�@(�Q�� : �ڍא����� / �A���y�W�I�ɂ�����mml�W�J�A�O���R�}���h�̎d�l)


�@���_�C�A�O�����ďo�� Chdprint

�@�_�C�A�O�����̃|�W�V�����ɂ́A
�@�ȉ��̕����ɂ��w�肵�Ă��������B

�@rsx +-0123456789abc NABCDEFGbp#


�@-- �e��}�� --

 Include(guitar2.h)

�@//Cut
�@l8 v77 Fadd9(" [4 d4u3[d3u2]:d6u5] ",cut)
�@l8 v77 Fadd9(" [ (@28,0 q66) du2 (Key(-5)@29 v-11 <) d (> Key=0) ] ",cut)
�@l8 v77 Fadd9("(Key(-5)@29 v-11 <) d",cut)

�@//Arp
�@l8 Em7b5(" [r321 ^: 232] 321 ",arp)
�@l8 Em7b5(" (q_=0)r 323 (q_+11) 'u (q_-11) 1'",arp)

�@//Chdprint
�@Chdprint("x02 55x  N")
�@Chdprint(,prn,"x02 55x  N")

�@Chdprint("d^du",cut,"r2-1 102  C")
�@Chdprint("r321",arp,"s2-1 102  C")

 
�@���e�@�\�̃��[�h�I���ɂ��� 


//�@�ʏ�́A���t�݂̂��s���܂����A
//�@�X�C�b�`��t���邱�ƂŁA�R���\�[���֏o�͂ł����肵�܂��B

�@-- �X�C�b�`�̗� --

�@Fsm7b5("r131",arp_lyric) // �����b�N�փR�[�h�o��
�@Fsm7b5("d^du",cut_prn)   // prn�̓R�[�h���e�̕\��

�@Str TT= Fsm7b5("d^du",cut_result) // �ϐ��m��
�@Print(TT)


�@���v�����g�o�� "prn"

�@�\���a����Ԓl�t���ŃR���\�[���o�͂��܂��B
�@��Ƀ`�F�b�N�p�r�ł��B

//�@E7(3,prn)
//�@prn | cut_prn | arp_prn


�@���f�o�b�O�o�� "print"

�@���ۂɍĐ�����MML���R���\�[���o�͂��܂��B

//�@E7(3,print)
//�@print | cut_print | arp_print


�@���Ԓl "result"

�@�\���a���̕Ԓl�݂̂�Ԃ��܂��B
�@�ϐ��Ɋm�ۂ��A�ė��p����Ƃ��ȂǂɎg���܂��B

//�@E7(3,result)
//�@result | cut_result | arp_result


�@���R�[�h�o�� "lyric"

�@�I���R�[�h��Lyric�֏o�͂��܂��B

//�@E7(3,lyric)
//�@lyric | cut_lyric | arp_lyric



 
�@���f�t�H���g���[�h�̕ύX�ɂ��� 

//�@�f�t�H���g���[�h��ύX���邱�Ƃɂ��A
//�@�ȗ��L�q���Ă��܂��B


�@��#Device_set= "XG" //default [ GM | GS | XG ]

�@�@�����^�C�~���O�̑I�������܂��B

�@�@XG�́AMs synth.�p�ɒ��������^�C�~���O���g�p���܂��B
�@�@GS�́A���^�����̂Ȃ��A�\���b�h�ȃ^�C�~���O�ɂ��܂��B
�@�@GM�́A���o�[�W�����̃T�E���h���Č����܂��B


�@��#Mode_set= "stk" //default

�@cut��arp�L�q���Ȃ��Ƃ��Ɏg�p���܂��B

�@A7("d^^u",cut)

�@->#Mode_set="cut"
�@->A7("d^^u")

//�@stk | prn     | print     | result     | lyric
//�@cut | cut_prn | cut_print | cut_result | cut_lyric
//�@arp | arp_prn | arp_print | arp_result | arp_lyric



�@��#Cut_set= "d^du^udu" //default
�@�@#Arp_set= "r323 1232"

�@�J��Ԃ��̉��t�w����Ȃ��ȂǂŎg�p���܂��B

�@A7("d^^u",cut)

�@->#Cut_set={d^^u}
�@->#Mode_set="cut"
�@->A7


�@��#Sum_chg= "on" //default [on | off]

�@�ʏ�́A���[�g���������A�T�C�����܂����A

�@�����A�T�C�������A�蓮�Ŏw�������ꍇ�A"off"�ɂ��܂��B
�@("off"�ɂ���ƃG���[���o�͂���܂�)



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

�@#Tune_set= "openG";	// openG�֕ύX
�@#Mode_set= "cut";		// ���[�h�ύX

�@[ Am Dm7 Em7 : FM7("d4^ ^^^^ u4r ") ] l1 FM7("d5") l8

  @25 q97

  #Tune_set= "openDm";	// openDm�֕ύX
  #Mode_set="arp";		// ���[�h�ύX
  #Arp_set="r131 u212";	// ���t�w��

  [ Am9 Gbm9 Gm9 : Abm9 ] Abm9



 
*/ 
  
/*�@�@�N�C�b�N���t�@�����X 
	 
�@���w��ł���R�[�h���X�g 

  [# �́As�֒u��������]
�@[pw�̓M�^�[���t�ŁAomit3�R�[�h]

 �@A     |AM7  |AM79   |(AM9)   |AM7s11 |AM713  |AM913
   Am    |Am7  |Am79   |(Am9)   |Am711  |Am911 |(Am913)
 �@A7    |A7b9 |A79    |(A9)    |A7s9   |(A711) |A7s11 |A7b13 |A713
   Ab9s11 |(A911) |(A1113) |(As9b13) |(A913)

   AM7b5 |Am7b5  |Am7b511 |A7b5
   AM7s5 |Am7s5  |(A7s5)
   AmM7  |AmM7b5 |AmM7s5 |AmM79
   A6    |A69    |Am6     |Am69

   Aadd9 |Aadd911 |Amadd9 |Amadd911
   Asus2 |A6sus2  |Asus4  |A7sus4   |A9sus4 |A13sus4
 �@Adim  |Adim7   |Aaug   |Aaug7
 �@Apw2  |Apw3

  [�������߁A����������](�e���V�����R�[�h�Q��)
	(AM9)	->AM79
	(Am9)	->Am79
	(A9)		->A79
	(A711)	->A7sus4
	(A911)	->A9sus4
	(A1113)	->A13sus4
	(A913)	->A69
	(Am913)	->Am69
	(As9b13)->Am7s5
	(A7s5)	->Aaug7
 
�@���}�N�������\ 

�@#Device_set= "XG" // [GM(old)| GS | XG(new)]

�@#Mode_set= "stk" // stk��stroke

�@stk | prn     | print     | result     | lyric
�@cut | cut_prn | cut_print | cut_result | cut_lyric
�@arp | arp_prn | arp_print | arp_result | arp_lyric


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

�@Am("(l8) d^du ^udu (v88 q18) d3u2^^^")
 
�@���A���y�W�I Arpeggio 

�@Include(guitar2.h);

�@@25 o3 q108 Time=(!4) l8 #Mode_set="arp"
�@E7sus4

  Am("(t+1) r232 (t-1) 1232 u^^^")
 
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

#Device_set= "XG" // [GM(old)| GS | XG(new)]

#Mode_set= "stk" // [stroke]

// stk | prn     | print     | result     | lyric
// cut | cut_prn | cut_print | cut_result | cut_lyric
// arp | arp_prn | arp_print | arp_result | arp_lyric


�@#Cut_set= "d^du ^udu" // "cut"�̉��t�f�t�H���g
�@#Arp_set= "r323 1232" // "arp"

// #Cut_set= "d4^^u ru3^^"
// #Arp_set= "r131 u212"


�@#Down_set= "2" // "cut"�̃_�E���o����
�@#Up_set  = "2" // "cut"�̃A�b�v�o����

  #Sum_chg= "on" // on | off �T���w�莩���`�F���W


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

	 
Function Loop_Breaker(Str TT,""){ //�ċA�^ 

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

  If(SW!=0){ GT2_ERR({"'[:]' �̌`�ƈႤ err"},SW) }

  ZZ= ZZ+ AB1;

  Result= ZZ;

 } //func

// Print( Loop_Breaker("q[e:[h:y]]t[[w:[k]]:r]u[a[b[:c]]][z]q") )
// q ehyhe t wkkwr wkkw u abcbc abcbc zzq


 
Function Speed_Setter(Int Spd, Array Fretting){ 


	// ������
	Array V= String_Assgin("V")
	Array Q= String_Assgin("Q")

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

	Str TT= "t__9%.N("+ QQ+ ")q__9%.N("+ PP+ ")v__9.N("+ RR+ ")" //�S���~���[�g

	Result= TT;

} //func

 
Function Cutting(Str Lmm, Str Line, Str Chd, Array Fret){ 

  Lmm= Lmm+ "$";


  Int SW= 0; Str XX= ""; Str Output= ""

  Str ZZ= ""; Int Count= 0

  Str Cmd= ""; Str Length= ""; Str Value= ""

  Int Size= SizeOf(Lmm)+1
  For(Int i=1; i< Size; i++){

	XX= MID(Lmm,i,1) // i=1~

	If(SW==3){ // �O���R�}���h
		Switch(Count){
		Case(0){
			If(XX==CHR(41)){ // [ ) ]

				Output= Output+ ZZ
				SW= 5 // [ ) ]

			}Else{
				If(XX==CHR(40)){ // [ ( ] �l�X�g�΍�
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

		}Case(","){ SW= 8
		}Default{ SW= 10
		}
		} //sw
	}
	If(SW==15){ //�o����
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
		}Case("."){ Output= Output+ "."
		}Case("^"){ Output= Output+ "^"; Length= ""; SW= 25
		}Case("r"){ Output= Output+ "r"; Length= ""; SW= 25
		}Case("m"){ Output= Output+ "r"; Length= ""; SW= 25

		}Case("u"){ Cmd= "up"; Length= ""; Value=""; SW= 20
		}Case("d"){ Cmd= "down"; Length= ""; Value=""; SW= 20

		}Default{ GT2_ERR({"'cut'�Œ�`���ꂽ�����ȊO"},XX)
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
	GT2_ERR({"Cutting ���s�G���["},SW)
  }Else{
	Result= Output
  }
 } //func
 
Function Fret_Assgin(Array RR){ 

	Array SS= ("r","h","u", "3","2","1")
	Array VV= ()
	For(Int i= 0; i< 6; i++){

		If("x" != RR(i)){ VV= (VV,SS(i)) }
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

  Int ERR= 0
  Array Assgin= Fret_Assgin(Fret)
  Int Assgin_length= SizeOf(Assgin)

  If(Assgin_length< 3){ GT2_ERR({"������3�{����"},Cnt,{"���R�[�h"},Chd_gbl) End; }

  Str TT= ""
  Array Cmd= ("","","", "","","") //�O���R�}���h
  Int Count= 0

  Array Add= ()
  Int Togle= 0

  Array RR= ("r","r","r", "r","r","r") // �o�����̋x��
  Array S0= ()
  Array S1= ()
  Array S2= ()
  Array S3= ()
  Array S4= ()
  Array S5= ()

  Int SW= 0
  Str SS= ""
  Str Rtn= "" // prn�o��

  Int Length= SizeOf(Lmm)+1
  For(Int i=1; i< Length; i++){

	SS= MID(Lmm,i,1) // i=1~

	If(SW==3){ // �O���R�}���h // �����ւ��̑O
		Switch(Count){
		Case(0){
			If(SS==CHR(41)){ // [ ) ]

				Rtn= Rtn+ TT
				Cmd= (Cmd(0)+ TT,Cmd(1)+ TT,Cmd(2)+ TT, Cmd(3)+ TT,Cmd(4)+ TT,Cmd(5)+ TT)
				SW= 5 // [ ) ]

			}Else{
				If(SS==CHR(40)){ // [ ( ] �l�X�g�΍�
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

	Switch(Assgin_length){ // �����ւ�
	Case(3){
			Switch(SS){
			Case("1"){	SS= Assgin(2)
			}Case("2"){	SS= Assgin(1)
			}Case("3"){	If(#Sum_chg=="off"){ ERR= 1 }Else{ SS= Assgin(0) }
			}Case("u"){	If(#Sum_chg=="off"){ ERR= 1 }Else{ SS= Assgin(0) }
			}Case("h"){	If(#Sum_chg=="off"){ ERR= 1 }Else{ SS= Assgin(0) }
			}Case("r"){	SS= Assgin(0)
			}
			} //sw
	}Case(4){
			Switch(SS){
			Case("1"){	SS= Assgin(3)
			}Case("2"){	SS= Assgin(2)
			}Case("3"){	SS= Assgin(1)
			}Case("u"){	If(#Sum_chg=="off"){ ERR= 1 }Else{ SS= Assgin(0) }
			}Case("h"){	If(#Sum_chg=="off"){ ERR= 1 }Else{ SS= Assgin(0) }
			}Case("r"){	SS= Assgin(0)
			}
			} //sw
	}Case(5){
			Switch(SS){
			Case("1"){	SS= Assgin(4)
			}Case("2"){	SS= Assgin(3)
			}Case("3"){	SS= Assgin(2)
			}Case("u"){	SS= Assgin(1)
			}Case("h"){	If(#Sum_chg=="off"){ ERR= 1 }Else{ SS= Assgin(0) }
			}Case("r"){	SS= Assgin(0)
			}
			} //sw
	}
	} //sw

	If(ERR == 1){ GT2_ERR({"���R�[�h"},Chd_gbl,{"����"},Assgin_length,{"���̎w��"},SS) End; }

	If(SW==15){ // �a����
		Switch(SS){
		Case("'"){		SW= 10
		}Case("1"){	Add= (Add, 5)
		}Case("2"){	Add= (Add, 4)
		}Case("3"){	Add= (Add, 3)
		}Case("u"){	Add= (Add, 2)
		}Case("h"){	Add= (Add, 1)
		}Case("r"){	Add= (Add, 0)
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

			S0= (S0, Cmd(0)) // �c����
			S1= (S1, Cmd(1))
			S2= (S2, Cmd(2))
			S3= (S3, Cmd(3))
			S4= (S4, Cmd(4))
			S5= (S5, Cmd(5))

			Exit; //���[�v�u���C�N

		}Case(" "){
		}Case("|"){
		}Case(";"){

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

		}Case("1"){

			Rtn= Rtn+ Fret(5)
			S0= (S0, RR(0))
			S1= (S1, RR(1))
			S2= (S2, RR(2))
			S3= (S3, RR(3))
			S4= (S4, RR(4))
			S5= (S5, Cmd(5)+ Fret(5)); Cmd(5)= ""; RR(5)= "^"

		}Case("2"){

			Rtn= Rtn+ Fret(4)
			S0= (S0, RR(0))
			S1= (S1, RR(1))
			S2= (S2, RR(2))
			S3= (S3, RR(3))
			S4= (S4, Cmd(4)+ Fret(4)); Cmd(4)= ""; RR(4)= "^"
			S5= (S5, RR(5))

		}Case("3"){

			Rtn= Rtn+ Fret(3)
			S0= (S0, RR(0))
			S1= (S1, RR(1))
			S2= (S2, RR(2))
			S3= (S3, Cmd(3)+ Fret(3)); Cmd(3)= ""; RR(3)= "^"
			S4= (S4, RR(4))
			S5= (S5, RR(5))

		}Case("u"){

			Rtn= Rtn+ Fret(2)
			S0= (S0, RR(0))
			S1= (S1, RR(1))
			S2= (S2, Cmd(2)+ Fret(2)); Cmd(2)= ""; RR(2)= "^"
			S3= (S3, RR(3))
			S4= (S4, RR(4))
			S5= (S5, RR(5))

		}Case("h"){

			Rtn= Rtn+ Fret(1)
			S0= (S0, RR(0))
			S1= (S1, Cmd(1)+ Fret(1)); Cmd(1)= ""; RR(1)= "^"
			S2= (S2, RR(2))
			S3= (S3, RR(3))
			S4= (S4, RR(4))
			S5= (S5, RR(5))

		}Case("r"){

			Rtn= Rtn+ Fret(0)
			S0= (S0, Cmd(0)+ Fret(0)); Cmd(0)= ""; RR(0)= "^"
			S1= (S1, RR(1))
			S2= (S2, RR(2))
			S3= (S3, RR(3))
			S4= (S4, RR(4))
			S5= (S5, RR(5))


		}Default{ GT2_ERR({"'arp'�Œ�`���ꂽ�����ȊO"},SS)
		}
		} //sw
	}
	If(SW==5){
		SW= 0
	}
  } //

  Str AA= "S{"
  Str ZZ= "}"

  Array Join= (Join_Arr(S0),Join_Arr(S1),Join_Arr(S2), Join_Arr(S3),Join_Arr(S4),Join_Arr(S5))

  Array Q9= String_Assgin("Q9")
  Array V9= String_Assgin("V9")
  Array T9= String_Assgin("T9")

  Str Output= ""
  Str XX= ""
  Int n= 0

  If(SW!=0){
	GT2_ERR({"Arpeggio ���s�G���["},SW)

  }Else{

	Switch(Line){
	Case("prn"){
		Output= Rtn
	}Case("result"){
		Output= Rtn
	}Default{
		For(Int m= Assgin_length-1; m=> 0; m--){

			Switch(Assgin(m)){
			Case("1"){ n= 5
			}Case("2"){ n= 4
			}Case("3"){ n= 3
			}Case("u"){ n= 2
			}Case("h"){ n= 1
			}Case("r"){ n= 0
			}
			} //sw

			 XX= "q__9="+Q9(n)+ "v__9="+V9(n)+ "t__9="+ T9(n)

			If(m > 0){
				Output= Output+ XX+ AA+ Join(n)+ ZZ
			}Else{
				Output= Output+ XX+ Join(n) // Sub�Ȃ�
			}
		} //
	}
	} //sw

 	Result= Output
  }
 } //func
 
Function String_Assgin(Str TT,""){ // ������ 

	Array RR;

	Switch(TT){
	Case("T9"){ //arp
		Switch(#Device_set){
		Case("XG"){	RR= (-3, -2, -1,  0, 0, 0); } // ���t���f��
		Case("GS"){	RR= (-3, -2, -2,  -3, -3, -3); } //t
		Default{		RR= (1,  2,  2,   1,  1,  0); }
		} //sw

	}Case("Q9"){
		Switch(#Device_set){
		Case("XG"){	RR= (-21,-14,-7,  -5, -3, -1); } // ���t���f��
		Case("GS"){	RR= (0, 6, 18,  24, 36, 42); } //q
		Default{		RR= (0,  3,  9,  12, 18, 21); }
		} //sw

	}Case("V9"){
		Switch(#Device_set){
		Case("XG"){	RR= (0, -4,-8, -12,-20,-28); } // �\�����f��
		Case("GS"){	RR= (0, -4,-12, -16,-24,-28); } //v ����キ
		Default{		RR= (0, -2, -6,  -8,-12,-14); }
						//r   h   u    3   2   1
		} //sw

	}Case("V"){ //cut

		Switch(#Device_set){
		Case("XG"){	RR= (0,-1,-3,  -4, -6, -7); }
		Case("GS"){	RR= (0,-2,-4,  -6, -8,-10); } //v
		Default{	RR= (0,-6,-9, -10,-13,-19); }
		} //sw

	}Case("Q"){

		Switch(#Device_set){
		Case("XG"){	RR= (-2,-2,-1, 0,1,1); }
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
 
Function Fret_Mml(Str Selector, Int Barre, Array Fret){ // ab�� 

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

	//��������
	Switch(Patch){
	Case(""){			Patch= #Mode_set // stk etc.
	}Case("Cut"){		Patch= "cut"
	}Case("Arp"){		Patch= "arp"

	}Case("Prn"){		Patch= "prn"
	}Case("Cut_prn"){	Patch= "cut_prn"
	}Case("Cut_Prn"){	Patch= "cut_prn"
	}Case("Arp_prn"){	Patch= "arp_prn"
	}Case("Arp_Prn"){	Patch= "arp_prn"

	}Case("Print"){		Patch= "print"
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
	Case("cut"){		Patch= "cut"; Line= "run"
	}Case("cut_prn"){	Patch= "cut"; Line= "prn"
	}Case("cut_print"){	Patch= "cut"; Line= "print"
	}Case("cut_result"){	Patch= "cut"; Line= "result"
	}Case("cut_lyric"){	Patch= "cut"; Line= "lyric"

	}Case("arp"){		Patch= "arp"; Line= "run"
	}Case("arp_prn"){	Patch= "arp"; Line= "prn"
	}Case("arp_print"){	Patch= "arp"; Line= "print"
	}Case("arp_result"){	Patch= "arp"; Line= "result"
	}Case("arp_lyric"){	Patch= "arp"; Line= "lyric"

	}Case("prn"){		Patch= "stk"; Line= "prn"
	}Case("print"){		Patch= "stk"; Line= "print"
	}Case("result"){		Patch= "stk"; Line= "result"
	}Case("lyric"){		Patch= "stk"; Line= "lyric"

	}Default{			Line= "run" // [0-9] �o���� or stk etc.
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
			Res_gbl= TT; //result�o��
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
			Res_gbl= TT; //result�o��
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

			Res_gbl= ZZ; //result�o��

		}Default{

			If(Lmm == ""){

				NN= MML(l%); Lmm= "%"+ NN
			}Else{

				NN= Lmm // int check

				If(NN==0){ GT2_ERR({"�������Ȃ�/"}+ Chd_gbl, Lmm) End; }
			}

			TT= Speed_Setter(Patch, Fret)+ ZZ+ Lmm // + " q__9=0;t__9=0;v__9=0; "
			// patch [0-9] �o����

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


  If(Patch=="" &Pos==""){ Pos= Lmm; Lmm= "" } // Pos�ֈړ�

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
		}Default{ GT2_ERR({"�t���b�g�w�蕶���ȊO�ł�"},XX)
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
		}Default{ GT2_ERR({"�i�b�g�A�L�[�����ȊO�ł�"},XX)
		}
		} //sw
	}
  } //

  If(SizeOf(Fret)!=6){ GT2_ERR({"����6�K�v"},SizeOf(Fret) ) End; }

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
	}Default{ GT2_ERR({"[A,N]���݂��Ȃ��L�[�w��A�������i�b�g�������Ȃ�"},ZZ)
	}
  } //sw


  If(ZZ!="N"){

	Switch(Root_gen){
	Case(3){ Keynote=(5,6,7,8,9, 10,11,0,1,2,3,4)		// 3G
	}Case(4){ Keynote=(10,11,0,1,2, 3,4,5,6,7,8,9)	// 4D
	}Case(5){ Keynote=(3,4,5,6,7, 8,9,10,11,0,1,2)	// 5A
	}Case(6){ Keynote=(8,9,10,11,0, 1,2,3,4,5,6,7)	// 6E
	}Default{ GT2_ERR({"[3-6]���[�g���w�� r,s ������܂���"},Root_gen) End;
	}
	} //sw

	Barre= Keynote(Rootkey)
	Barre= Barre_Chk(Barre, Fret)
  }

  Array GG= ("Nut","1E","2B","3G","4E","5A","6E")

  Chd_gbl = Pos;			// Global
  Root_gbl= GG(Root_gen);	// Global

  Mml_Out(Lmm, Patch, Barre, Fret)

  Result= Res_gbl;	// Global

 } //func


   
//	guitar2.h ------ 

	 
Function Open_Tuning(Str Tune,""){ 

	Array Tuning;

	Switch(Tune){
	Case("dadgad"){	Tune= "DADGAD"
	}Case("Nashville"){	Tune= "nashville"
	}Case("Nash"){		Tune= "nashville"
	}Case("nash"){		Tune= "nashville"
	}Case("DropD"){	Tune= "dropD"
	}Case("OpenDm"){	Tune= "openDm"
	}Case("OpenD"){	Tune= "openD"
	}Case("OpenGm"){	Tune= "openGm"
	}Case("OpenG"){	Tune= "openG"
	}Case("Nomal"){	Tune= "nomal"
	}
	} //sw

	Switch(Tune){
	Case("upper642"){ Tuning=(4+12, 9, 14+12, 19, 23+12, 28) // `EA>`D G`B>E
	}Case("upper531"){ Tuning=(4, 9+12, 14, 19+12, 23, 28+12) // E`A>D `GB>`E
	}Case("drop642"){ Tuning=(4-12, 9, 14-12, 19, 23-12, 28) // "EA>"D G"B>E
	}Case("drop531"){ Tuning=(4, 9-12, 14, 19-12, 23, 28-12) // E"A>D "GB>"E

	}Case("DADGAD"){	Tuning=( 2, 9,14,19,21,26) // DAD GAD
	}Case("nashville"){	Tuning=(16,21,26,31,23,28) // >EAD G<BE
	}Case("dropD"){	Tuning=( 2, 9,14,19,23,28) // DAD GBE
	}Case("openDm"){	Tuning=( 2, 9,14,17,21,26) // DAD FAD
	}Case("openD"){	Tuning=( 2, 9,14,18,21,26) // DAD F#AD
	}Case("openGm"){	Tuning=( 2, 7,14,19,22,26) // DGD GBbD
	}Case("openG"){	Tuning=( 2, 7,14,19,23,26) // DGD GBD
	}Case("nomal"){		Tuning=( 4, 9,14,19,23,28) // EA>D GB>E
	}Default{ GT2_ERR({"�`���[�j���O���X�g�ɂȂ� Tune"},Tune) End;
	}
	} //sw

	If(SizeOf(Tuning) != 6){ GT2_ERR({"Open_Tuning; [6]���������s��"},SizeOf(Tuning)) End; }

	Result= Tuning;
 } //func
 
Function Hosei_Root(Int NN, Int DD, Array Fret){ // hairetsu "x" sashikae 

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

 
Function Barre_Chk(Int BB, Array FF){ 

	Int j= 0;
	For(Int i=0; i< 6; i++){

		If(j> FF(i)){

			j= FF(i)
		}
	} //

	If(BB< j){ BB= BB+ 12 }

	Result= BB;
 } //func
 
Function Pi_Chdlist(Int Rootkey, Str Chdname, Str Lmm, Str Patch, Str Pos){ 


	Int Barre= 0;
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

  If(Pos==""){ //�w�肪�Ȃ��ꍇ

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

	Pos= Arr(Rootkey)
  }


	Switch(Pos){
	// �I�[�v��pos.�w��
	Case("a5A"){ Number= Pos
	}Case("b5A"){ Number= Pos
	}Case("c5A"){ Number= Pos
	}Case("d4D"){ Number= Pos
	}Case("e6E"){ Number= Pos
	}Case("f4D"){ Number= Pos
	}Case("f6E"){ Number= Pos
	}Case("g-6E"){ Number= Pos
	}Case("g6E"){ Number= Pos

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
		GT2_ERR({""}+ Pos+ {"�|�W�V�����w��ɂȂ� Chdname"},Chdname)
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

	Barre= Barre_Chk(Barre, Fret)


	Fret= Hosei_Root(Root_hosei(0),Root_hosei(1),Fret)

	If(SizeOf(Fret)!=6){

		GT2_ERR({"Pi_Chdlist: ����6�K�v"},SizeOf(Fret) )
		End;
	}

	Mml_Out(Lmm, Patch, Barre, Fret)

 } //func

  
// Chord Function�}�N�� 

#Gt2_Chd= { Function #?1#?3(Str Lgh,Str Spd,Str Vce){ Chd_gbl="#?1#?3"; Pi_Chdlist("#?2","#?4", Lgh,Spd,Vce); Result=Res_gbl; } }
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

// ��������
#Chd_N={711}	#Chd_Q={7sus4}	#Chd_list;
#Chd_N={911}	#Chd_Q={9sus4}	#Chd_list;
#Chd_N={1113}	#Chd_Q={13sus4}	#Chd_list;
#Chd_N={913}	#Chd_Q={69}	#Chd_list;
#Chd_N={m913}	#Chd_Q={m69}	#Chd_list;
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
�@�@Gm7("(q88 v+36) d2u3  (q18 v-36) [3 d1u2]",cut,"5x")
�@�@Gm7("(q88 v+36) d2^d2",cut,"5x")
�@�@Dm7("u2^^",cut,4)
�@�@]


 
// Arpeggio / �A���y�W�I�̃o���G�[�V���� 


�@�@�R���g���[���`�F���W��II-V�����ɂ��A
�@�@�A���y�W�I�p�^�[����ł��B


�@���Z�O�x���7th��II-V���[�V����


�@�@Include(guitar2.h); @27 o3 q108 Time=(!1)

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


�@�@Include(guitar2.h); @27 v101 l8 q88 o3 Time=(!1)

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
�@�@@26 o3 q96 v99 l8 Time=(!1)
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


�@�@�R�[�h�l�[���͏o�͊m�F����B

 
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



//�@guitar.h�Ƃ̊��S�Ȍ݊��́A����Ă܂���B

�@F#�̏ꍇ�Agt.h�ł�Fp�ƋL�ڂ��܂����Agt2.h�ł́AFs�ƋL�ڂ��܂��B
�@p��b���ǂ����Ă��邽�ߕύX���܂����B

�@guitar.h�̓R�[�h���ǂݍ��܂��ƁA�ŏI�I�� o5���������܂�܂��B
�@guitar2.h�ł͍���������邽�߁A�R�[�h���ǂݍ��܂�Ă��A
�@o�w��l�͂��̂܂܂ƂȂ��Ă��܂��B



 
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

//�@�A���y�W�I�ɂ�����mml�W�J�A�O���R�}���h�̎d�l


�@�@�A���y�W�I�ł́A

�@�@A("r321") | 'a>ea>d-e<<'

�@�@S{rrr``e}
�@�@S{rr``d-^}
�@�@S{r`a^^}
�@�@S{rrrr}
�@�@�@a^^^

�@�@���̂悤�ɁAmml�W�J�����Ă��܂��B

�@�@�O���R�}���h������ꍇ�A�d�l�Ƃ���

�@�@A("r (v_+10) 321")

�@�@S{rrrv_+10``e}
�@�@S{rrv_+10``d-^}
�@�@S{rv_+10`a^^}
�@�@S{rrrrv_+10}
�@�@�@a^^^v_+10

�@�@��L�̂悤�ɓW�J���܂����A
�@�@Sub�R�}���h�̓�����A�ŉ�����" a^^^ "�ɂ��A
�@�@(v_+10)���K�p����Ă��܂��܂��B

�@�@������I�񂷂邽�߂ɂ́A������������悤�ɋL�q���܂��B

�@�@A("r (v_+10) 321(v_-10)")

�@�@S{rrrv_+10``ev_-10}
�@�@S{rrv_+10``d-^v_-10}
�@�@S{rv_+10`a^^v_-10}
�@�@S{rrrrv_+10v_-10}
�@�@�@a^^^v_+10v_-10


//�@�A���y�W�I�������[�v�̖͎��}

�@�@�ʏ�A���y�W�I�̖͎��}

�@�@C7("r32123 r123") C7("r123 r32123")

�@�@| C7:         | C7:
�@      1-----1---|  1-----1---
�@     2-2-----2--|   2---2-2--
�@    3---3-----3-|    3-3---3-
�@  R-------R-----|R----R------


�@�@�r�؂�̂Ȃ��A���y�W�I�̖͎��}

�@�@C7("[r32123 r123]")

�@�@| C7:
�@      1-----1---|----1-----1---
�@     2-2-----2--|---2-2-----2--
�@    3---3-----3-|--3---3-----3-
�@  R-------R-----|R-------R-----
  
*/ 


  
