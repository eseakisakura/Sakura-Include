// title:        "guitar2.h" ver5.0c 
// description:  diagram��MML�ϊ��t��guitar.h�݊��t�@�C�� (17/8/2)
// keywords:     SAKURA Function     Powered by �M�\works


/*	�@���ڏ�ACC���C�Z���X�́A�\��-�p���Ƃ��܂������A
	�R�[�h�������C���Ȃ̂�GPL���C�Z���X��K�p���ĉ�����
	sted�Ȃǂ̍\�����G�f�B�^�Ő������Ă��܂�

	�� guitar.h�݊��C���N���[�h�t�@�C���ł�
	��q__8,q__9,t__9,v__9�͎g�p�ς݂ƂȂ�܂�


	Include�t�H���_�ɓ���Ďg���܂�
	guitar2.h�ƃ��l�[����A�T�N����TW��Include�t�H���_�ɓ���ĉ�����

	-- �g���q"h"���A���炩�̃\�t�g�ɂ��o�^����Ă���ꍇ�A
	"guitar2.h.mml"�ƃ��l�[������邱�Ƃ�����܂�

 	���̏ꍇ�A�t�H���_�I�v�V������"�o�^����Ă���g���q�͕\�����Ȃ�"
	�̃`�F�b�N���ꎞ�O���A���l�[�����Ă݂ĉ����� --

*/


 
/*�@�@�T�v 


�@�@�@�M�^�[��MML�L�q���T�|�[�g����w�b�_�ł��B
�@�@�R�[�h�����L�����邱�Ƃɂ���ĉ��t���܂�

�@�@�M�^�[���L�̃J�b�e�B���O��A���y�W�I���A
�@�@�ȒP�Ȏw��ɂ��Č��ł���悤�ɂȂ��Ă܂�



�@- �w��ł���R�[�h���X�g 16/12/ 2 -

//�@A     |AM7   |AM79  |AM7p11|AM713 |AM913 |
//�@Am    |Am7   |Am79  |Am711 |(Am911)      |
//�@Aadd9 |Amadd9|Aadd9sus4    |

//�@Asus2 |Asus4 |A7sus4|A9sus4|A13sus4      |
//�@A7    |(A7b9)|A79   |A7p9  |A711  |A7p11 |A7b13 |A713  |
//�@A_b9p11      |A_p9b13      |A913  |

//�@A6    |A69   |Am6   |Am69  |
//�@AmM7  |AmM79 |AmM7p5|

//�@Aaug  |Aaug7 |A7p5  |Am7p5 |AM7p5 |
//�@Adim  |Adim7 |A7b5  |Am7b5 |(Am7b511)    |

//�@A_pwr2|A_pwr3|A_omit3      |


�@�@�e���V�����d�l�ɂ��ẮA�ڍא������Q�Ƃ��Ă��������B
�@�@�Ȃ��A�R�[�h�|�W�V�����͈ȉ����Q�l�ɂ��Ă��܂�

�@http://www9.ocn.ne.jp/~knatsu/chords/chords.html
�@http://rittor-music.jp/guitar/column/guitarchord/416
�@http://www.ishibashi.co.jp/academic/Chord_Guitar/C.htm

�@http://www.aki-f.com/kouza/b_kouza/kouza5/kouza5_2.htm
�@http://www.naru-gakki.com/guitar-opentuning/
�@http://guitar-hakase.com/tuning/



�@- ��{���^ -

�@�@Include(gs.h) ResetGS()r4
�@�@Include(guitar2.h)
�@�@Time=(!2)


�@�@#Mode_set="cut"
�@�@//#Cut_set={ d^^u ^udu }
�@�@r%-2 @26 o3 q93 v86 l8 r%2
�@
�@�@Dm7b5 | E7 | Am7 | D7 //�R�[�h�L�q


�@�@#Mode_set="arp"
�@�@//#Arp_set={ r313 2131 }
�@�@@25 o3 q115 v106 l8

�@�@#TT= { Dm7b5 | E7 | Am7 | D7 }
�@�@#TT

�@�@//Chdprint({ d^du },cut,"577 655 N")
�@�@//Chdprint({ r321 },arp,"r22 100 A")



�@- �o�͋@�\�����\ -

//�@A7(3,  2,6)	// �݊��X�g���[�N
//�@G7( ,prn,6)	// �R���\�[���o��
//�@F7({ d^du },cut,6)	// �J�b�e�B���O
//�@E7({ r321 },arp,5)	// �A���y�W�I

//�@Chdprint(-5,  2,"x02 55x  N")
//�@Chdprint(  ,prn,"r2-1 102 C")
//�@Chdprint({ d^du ^udu }     ,cut,"x02  210  N")
//�@Chdprint({ r[u3:1]r[u2:1] },arp,"r2-1 102  C")



�@- �f�t�H���g�ݒ葁���\ -

//�@#Mode_set= ""

//�@st [stroke] | prn | print | result     |
//�@cut | cut_prn | cut_print | cut_result |
//�@arp | arp_prn | arp_print | arp_result |


//�@#Cut_set= { d^du ^udu }
//�@#Arp_set= { r323 1232 }

//�@#Down_set= "2"
//�@#Up_set  = "2"

//  #Sum_chg = "" // msg | off |


//�@#Tune_set= ""
//�@nomal[regular] | openG | openGm | openD | openDm | dropD | nash(ville) | DADGAD |



�@- ���ݔ����Ă����� -

�@�@�����ɂ���ẮA�m�[�g�I���A�I�t�̃^�C�~���O�̊֌W�ŁA
�@�@�����r�؂���肪����܂��B

�@�@���̂���TimeBase=192 �����������Ƃ��āA�^�p����̂��]�܂����ł�


�@�@TimeBase=480 �ׂ����`�b�N�ݒ�A�Q�[�g��q80�ȏ�̂Ƃ��ȂǁA
�@�@MSGS�́A�����u�c�؂�ɂȂ邱�Ƃ������ł�



�@- �C�����X�g -

     15 10 28	���W���[�A�b�v�f�[�g -- ver.4

	11  4	#Mode_def -> #Mode_set�̂悤�Ƀ}�N�����ύX
     16  1  9	Baratuki��up_stroke�𑁂߂� t__8=-2
	 5 13	For���[�v�ASizeOf���̍œK��
		�����������
	   20	Cut_prn,Arp_prn��ǉ��A�y�эœK��
		MML������Int g err�̉��� TT;�ƒ@���Ȃ�����
		#Oct_set��ǉ� ->8.27�p�~
	 6  4	result�o�͂�ǉ�
		prn�͍Đ��Ȃ��Ԓl�t���Ƃ���
		Chord Function���}�N����
		Cutting�����������ォ�狭��
		Chdprint��result�����C��
	   11	Cutting�ŕt�_�ɂ���
	 7 14	Arpeggio�̃p�����[�^����
	   28	Cutting�̃p�����[�^���� ->9.13�p�~
	 8  1	Arpeggio�̃p�����[�^����
	   27	Fretnote�̔p�~�ɔ����C��
	 9 13	Cutting��tqv__8�p�~
	   24	Arpeggio�̃T���w�莩���`�F���W�ǉ�
	   25	sus2�L�q�ł�add9�Ƃ��� -> 10.20�C��
		sus4�̊ԈႢ�C�� -- ver4.5

	10 20	sus2��add9�͕ʂɂ����A69,m69,m7p5�ǉ�
	11 15	�e���V�����R�[�h�ǉ��A�ԈႢ�̏C��
		M9/M79,m9/m79,9/79�̂悤��79�L�q�֕ύX
	   22	Pi_chdlist�ȂǍœK��
	12  2	�㗝�R�[�h�ʒmPi_errlist�ǉ�
	   14	MML_compile����̍œK��
		�f�t�H���g�ݒ�͂ł��邾�������l����l�Ƃ���
	   23	�v�Z�ς݃f�[�^��ver.5a���s
	   25	�ғ��� -- ver.5b���s

     17	 8  2	#Device_set�̒ǉ�,Cm7�̊ԈႢ���� --5c
*/


 
/*�@�@�戵������ 


�@�@�@�e�@�\�̎菇�����ڂ��܂��B

�@�@����ȊO�̏ڍא����ɂ��܂��ẮA
�@�@�X�N���v�g�ȍ~�ɏ������݂܂���

�@�@sted�Ȃǂ̍\�����G�f�B�^���g�p����ƁA
�@�@�ǂ݂₷���Ǝv���܂�

�@�@�Ȃ����̓T�N���̂����肩��A
�@�@�S�p��+���ŗ񋓁A�ł����₷���ł�



	
�@���g�p��̐��� 



//�@- �R�[�h�L�ڏ�̎d�l�ɂ��� -


�@�@6���J���̋N�_���Ao3e�Ƃ��Ă��邽�߁A
�@�@�g���b�N�n�߂ɁAo3�L�q���K�{�ł�

�@�@-> o3 Fpm7b5(,cut)


�@�@# ��p �ɁA�u�����ċL�q���܂�

�@�@F#m7b5  -> Fpm7b5
�@�@Bm7#5   -> Bm7p5


�@�@�R�[�h�l�[���̎n�߂�p,b,o ������ꍇ�A
�@�@_ �������ĉ�����

�@�@Abb9p11 -> Ab_b9p11
�@�@Appwr2  -> Ap_pwr2
�@�@Apomit3 -> Ap_omit3



//�@- �J�b�R���̋L�q�ɂ��� -


�@�@�L���A�A���t�@�x�b�g�̍��݂̓G���[�ƂȂ�܂��B
�@�@"" �Ȃ����A{}�ŋ���őΏ����ĉ�����

�@�@-> "5#x",{5#x}�A-> "1^2",{1^2}



//�@- print�@�\�ɂ��� -


�@�@Print�R�}���h�Ƃ̏Փ˂�����邽�߁A
�@�@�g�p����ۂ́A��������print�ƋL�ڂ̂���

�@�@-> Am(3,print)



//�@- ���F�`�F���W�ł̒��� -


�@�@�X�g���[�N�A�J�b�e�B���O�ł́A
�@�@���A�������o�����߁A2step���߂鏈�������܂��B

�@�@���̂��߁A���O�ɉ��F�`�F���W����ƊԂɍ����܂���B
�@�@���̏ꍇ�́A���炩���߉��F��ς��Ă������A
�@�@�߂��x���Ȃǂ��g���A�Ή����ĉ�����

�@�@-> r%-2 @25 r%2  Em7 | r%-2 @26 r%2  FM7



//�@- �A���y�W�I�ł̒��� -


�@�@�A���y�W�I�́A�|�W�V�����\����
�@�@2�{�ȉ��ƂȂ�ꍇ�A�o�͂��Ȃ��d�l�ł�

�@�@-> FM7(,arp,"4bx") // 2,3���݂̂́A�G���[�o��



//�@- �A���y�W�I�̃��[�v�J�E���^ -


�@�@�A���y�W�I�ł́A���������̈ʒu��\���֌W��A
�@�@�L�q�ɂ���ẮA���[�v�J�E���^�ƌ����������܂���B
�@�@���������邽�߁A�󔒂Ŗ����I�ɕ�������K�v������܂�

�@�@-> [ 123r],[4 123r] //[�� 123],[4�� 123r]



//�@- Chdprint�̍��񂹋L�q -


�@�@Chdprint�ł́A�����ӂ��ɋL�q���Ȃ��ꍇ�A
�@�@���񂹋L�q���ł��܂��B

�@�@Chdprint(,,"x02 55x  N") -> Chdprint("x02 55x  N")


�@�@����͐ݒ�ύX�𕹗p�����ۂɁA","�̋L�q�����炷���߂̎d�l�ł�

�@�@-> #Mode_set="prn" Chdprint("x02 55x  N")


 
�@���e�@�\�̐��� 



//�@�e�@�\�����ɐ������܂�


	
�@- guitar.h�݊� / �X�g���[�N - 



//�@�X�g���[�N�v���C�����t���܂��B
//�@�R�[�h����w�肷��ƁA��� �W�����Ɩ�܂�


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



//�@�_�E���A�b�v���L�q���邱�Ƃɂ���āA
//�@�J�b�e�B���O�����t���܂�


�@���J�b�e�B���O�̎w�� / D own U p


�@�@�R�[�h���W���J�W�����ƁA�炷���߂ɂ́A
�@�@�_�E���A�A�b�v�X�g���[�N���J��Ԃ��܂�

�@�@���̂��߁A��Ԃ�d�A�����Ԃ�u�A�Ƒł��ƂŁA
�@�@��X�g���[�N�̂��鎩�R�ȉ��t�ƂȂ�܂�

�@�@FM7({ d^^u  ^ud^ })


�@�@�W���������ƃo������t�������̂ł���΁A
�@�@"du"�̌�ɐ����������܂�

�@�@FM7({ d3^^u  ^ud4^ })


�@���J�b�e�B���O���[�h�̎w�� / cut


�@�@G7({ du^u },cut)�Ǝw�肵�܂��B
�@�@����ɂ��A�J�b�e�B���O���[�h�Ƃ��ē����܂�


�@�����[�g���̎w�� / 6,5,4


�@�@�X�g���[�N�Ɠ����ŁA�����̑I���ƂȂ�܂��B

�@�@E7({ du^u },cut,6)�ł���΁A
�@�@6�����[�g�̋��������R�[�h���I������܂�



 
�@- Arpeggio �A���y�W�I - 



//�@���w������邱�ƂŁA
//�@�A���y�W�I��ł����݂ŉ��t���܂�


�@���A���y�W�I�̎w�� / rhu321


�@�@�A���y�W�I���|���|���炷�ɂ́A
�@�@r���w�肵�A����123���̂ǂꂩ��e���܂�

�@�@�Ⴆ�΁A���� 1���Œe���̂ł���΁A
�@�@��{4��{ r131 }������A�����{�ɂ���{ r131 2131 }�̂悤�Ɏw�肵�܂�

�@�@�R�[�h�ɂ��܂����A5�������� h�A4�������� u���A
�@�@�g�p�ł���ꍇ������܂��B

�@�@E7({ r131 u131 })


�@���A���y�W�I���[�h�̎w�� / arp


�@�@G7({ r232 },arp)�Ǝw�肵�܂��B
�@�@����ŁA�A���y�W�I���[�h�Ƃ��ē����܂�


�@�����[�g���̎w�� / 6,5,4


�@�@�X�g���[�N�Ɠ����ŁA�����̑I���ł�

�@�@FM7({ r321 },arp,6)�ł���΁A
�@�@6�����[�g�̋��������R�[�h���I������܂�



 
�@- Chdprint �_�C�A�O�����ďo�� - 



//�@�M�^�[�̃|�W�V��������A
//�@���ڎw�肷��Ƃ��Ɏg�p���܂�



�@���i�b�g�Œ� / N ut

�@�@�w�b�h�̃i�b�g"N"���N�_�Ƃ��܂��B


	1E x||   |   |   |   |   |
	2B  ||   |   |   |   |  e|
	3G  ||   |   |   |   |  c|
	4D  ||   |  e|   |   |   |
	5A a||   |   |   |   |   |
	6E x||   |   |   |   |   |
	   N    1   2   3F  4   5F

	Chdprint("x02 55x  N") // A

	10F�ȍ~�̎w��́A���� 9,a,b,c �Ƒ����܂� (12F��c�܂�)



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

	���[�g�w�� r,s ���K�v�ƂȂ�܂� (s�̓��[�g��e���Ȃ�)



�@-- Chdprint�̓��͗� --


�@�@Include(guitar2.h) l8 q93 o3 Time=(!4)

�@�@Chdprint(,prn,"x02 55x  N") // �J�����̃|�W�V����
�@�@Chdprint({d^du},cut,"rx0 0-1x  F#") // "r"�Ǝw���A�L�["F#"
�@�@Chdprint({r321},arp,"sx0 0-1x  F#") // "s"�T�C�����g���[�g



  
�@���L�q�T���v�� / �@�\�� 



//�@�e�@�\�̋L�q��


�@-- guitar.h�݊� / �X�g���[�N --


�@�@Include(guitar2.h); @27 q93 o3 Time=(!4)

�@�@l2 Em7b5 A7(11) | Dm7 G7(-5,,6) | C(12,1,5)


�@-- Cutting �J�b�e�B���O --


�@�@Include(guitar2.h); @26 o3 q96 v99 Time=(!4)

�@�@l8 E7sus4(,cut) // �ŏ��w��
�@�@l8 Am({ l8 d^d^ v88 q18 d3u2^^^ },cut)


�@-- Arpeggio �A���y�W�I --


�@�@Include(guitar2.h); @25 o3 q108 Time=(!4)

�@�@l8 E7sus4(,arp) // �ŏ��w��
 �@ l8 Am({ r t+1 232 1 t-1 232 u^^^ },arp)



�@-- Chdprint �_�C�A�O�����ďo�� --


�@�@Include(guitar2.h); @27 o3 v99 Time=(!4)

�@�@Chdprint(" x02 55x  N") // �i�b�g�Œ�
�@�@Chdprint("r2-1 102  C") // �L�[�w��

�@�@l8 q108 Chdprint({ [r323 123:2]2^^^ },arp,"x02 55x  N")
�@�@l8 q96  Chdprint({ [d^d:u^udu]u^^^^ },cut,"r21 1xx  B")


 
�@���e�@�\�̏o�͑I���ɂ��� 



//�@�ʏ�́A���t�݂̂��s���܂����A
//�@�X�C�b�`��t���邱�ƂŁA�o�͂�ς��邱�Ƃ��ł��܂�


�@�����t�o�� / ""


�@�@E7(3,)�@�ʏ�͉��t�݂̂��܂�

�@�@//�@[^0-9] | cut | arp


�@���v�����g�o�� / prn


�@�@E7(3,prn)�́A�\���a�����R���\�[���o�͂��܂�

�@�@//�@prn | cut_prn | arp_prn


�@���f�o�b�O�o�� / print


�@�@E7(3,print)�ł́A���t����mml���R���\�[���o�͂��܂�
�@�@��Ƀ`�F�b�N�p�r�ƂȂ�܂�

�@�@//�@print | cut_print | arp_print


�@���Ԓl�o�� / result


�@�@E7(3,result)�ŁA�\���a����mml�̂ݕԂ��܂�
�@�@�ϐ��ւ̊m�ۓ��ɁA�g�p���܂�

�@�@//�@result | cut_result | arp_result



�@-- prn,print�o�̗͂� --


�@�@Include(guitar2.h); @27 q93 o3 Time=(!4)

�@�@Fpm7b5({d^du},cut_prn)   // prn�̓R�[�h���e�̕\��
�@�@Fpm7b5({r131},arp_print) // �f�o�b�N�o��



 
�@���f�t�H���g�ݒ�ύX�ɂ��� 



//�@�f�t�H���g�ݒ���A�ύX���邱�Ƃɂ��A
//�@�L�q���Ȃ����Ƃ��ł��܂�


�@��#Device_set= "GS"	// [(GM default),GS]

�@�@�����^�C�~���O�̑I�������܂��B
�@�@GS�ł́A���^�����̂Ȃ��\���b�h�ȃ^�C�~���O�ɂ��܂�
�@�@�v�Z�ς݃f�[�^���g�p���Ȃ����߁A�����͏d�߂ł�


�@��#Mode_set= "cut"

�@�@st [stroke](default) | prn | print | result     |
�@�@cut        | cut_prn | cut_print   | cut_result |
�@�@arp        | arp_prn | arp_print   | arp_result |

�@�@cut�Aarp�w����Ȃ��Ƃ��Ɏg�p�B
�@�@����Ȍ�Aarp���[�h�Ƃ��ċ@�\���܂�

�@�@A7({r131},arp) Em({3131},arp)

�@�@�@-> #Mode_set="arp"; A7({r131}) Em({3131})




�@��#Cut_set= {d^du ^udu} (default)
�@�@#Arp_set= {r323 1232} (default)

�@�@���t�w����ȗ�����ہA�g�p�B
�@�@����Ȍ�A�������t�w�肪�g�p����܂�

�@�@A7({d^du^udu},cut) Em({d^du^udu},cut)

�@�@�@-> #Cut_set={d^du^udu}; A7(,cut) Em(,cut)



�@��#Sum_chg= "msg" / [""(default),msg,off]

�@�@�A���y�W�I���A���[�g��e���T���̎����ύX�̉����A
�@�@�������A�ύX���b�Z�[�W�t���ɐؑւ��܂��B
�@�@�����Ȍ��w�莞�ȂǂɎg�p���܂�



�@��#Down_set= "2"
�@�@#Up_set  = "2"

�@�@�X�g���[�N�̃o�������x��ύX���܂�

�@�@A7({d^^u},cut) //d2

�@�@�@-> #Down_set= "4"; A7({d^^u},cut) //d4�ƂȂ�



�@��#Tune_set= "openG" / �`���[�j���O�ݒ�

�@�@nomal[regular](default) | openG  | openGm | openD  | openDm |
�@�@dropD     | nash(ville) | DADGAD |

�@�@�`���[�j���O��ύX����A�I�[�v���`���[�j���O�̑I��



�@-- �f�t�H���g�ύX�� --


�@�@Include(guitar2.h)

�@�@@26 q94 l8 o3

�@�@#Device_set= "GS"		// �\���b�h�Ȍ�����

�@�@#Tune_set= "openG"		// openG�֕ύX
�@�@#Mode_set= "cut"		// �J�b�e�B���O���[�h

�@�@[ Am |Dm7 |Em7 : | FM7("d4^ ^^^^ u4r ") ] l1 FM7("d5") l8

�@�@@25 q97

�@�@#Tune_set= "openDm";
�@�@#Mode_set="arp";
�@�@#Arp_set="r131 h212";

�@�@#Sum_chg= "msg";		// �ύX���b�Z�[�W�t��

�@�@[ Am9 |Gbm9 |Gm9 : |Abm9(,,5) ] Abm9





 
�@���e���[�h���ʂŎg�p�ł��镶�� 


//�@��{�I��MML�R�}���h�̂݁A���ʂ��Ďg�p�ł��܂��B


	^    | �^�C
	v-11 | ���ʂ̑��Εω�
	[[]:]| �l�X�g�̂��郋�[�v

	qvto q_v_t_o_<>@ ^0-9+-(=) ,|;[:]
	TrackKey�AKey�́A���ڋL�q����

	r, l, '' �Ɍ���A���[�h�ɂ���Ă͕s��



�@- Cutting �J�b�e�B���O -


�@�@r �x���Al �����A"." �t�_����

�@�@l8 A7({ d^^^ l12 d4u0d4 u4d0u4 },cut) // �Ȍ�"l12"�ƂȂ�



�@- Arpeggio �A���y�W�I -


�@�@r �͋x���ł͂Ȃ��A���[�g�w��ƂȂ�܂��B
�@�@'21'�Ȃǂ̘a���w��ɂ��A�_�u���X�g�b�v����

�@�@A7({ r 3'21'3 u 3'21'3 },arp)



�@- �w��O�̃R�}���h�ɂ��� -


�@�@���ڋL�q�s�̎w��O�R�}���h�́A�����ʂň݂͂܂�

�@�@A7({ d^^u  ^(�������牉�t)udu },cut)
�@�@A7({ r2131 (PrintTime) u231 },arp) //�v�����g�^�C�������s�����

�@�@Int i=0; l8 o3 A7({ [3 r3'u1'2 (i++ Key=i) u2'1h'1 ] },arp) //������



�@- Chdprint �_�C�A�O�����ďo�� -


�@�@�_�C�A�O�����̃|�W�V�����ɂ́A
�@�@�ȉ��̕����̂ݎg���܂�

�@�@rsx +-0123456789abc NABCDEFGbp#



�@-- �e��}�� --


�@�@l8 v77 Fadd9({ [4 d4u3[d3u2]:d6u5] },cut)
�@�@l8 v77 Fadd9({ [@28,0 q66 du2 Key(-5)@29 v-11 <d> Key=0 ] },cut)

�@�@l8 Em7b5({ [r321 ^: 232] 321 },arp)
�@�@l8 Em7b5({ r 323 > v-11 @29,0 Key=7 'u t6 1' Key(0)< },arp)

�@�@Chdprint("x02 55x  N")
�@�@Chdprint(,prn,"x02 55x  N")

�@�@Chdprint({d^du},cut,"r2-1 102  C")
�@�@Chdprint({r321},arp,"s2-1 102  C")



  
�@�@�ȉ��A�v���O�������@*/ 



 
// �f�t�H���g�ݒ�}�N�� 

#Device_set= ""			// [(GM default),GS]

#Mode_set= ""

// st [stroke] | prn | print | result     |
// cut | cut_prn | cut_print | cut_result |
// arp | arp_prn | arp_print | arp_result |


#Cut_set= {d^du ^udu}		// cut
#Arp_set= {r323 1232}		// arp�̉��t�f�t�H���g

//#Cut_set= "d^^ v_-15u du^u  ^udu d v_0u^^"
//#Arp_set= "[r 32123 :u 32123 ]h 32132"


#Down_set= "2"		// cut�̃_�E���o����
#Up_set  = "2"		// cut�̃A�b�v�o����

#Sum_chg= ""		// msg | off | �T���w�莩���`�F���W


#Tune_set= ""	// �`���[�j���O�w��

// nomal[regular] | openG | openGm | openD | openDm |
// dropD    | nash(ville) | DADGAD |


//  Global�ϐ�

Str Res_gbl;		// �Ԓl

Str Chd_gbl;		// �R�[�h��
Int Root_gbl= 0		// ���[�g���l



 
//	guitar2.h -------- 

	 
// ERR 
	
Function Gt2_err(Array RR){ // {""},ZZ,.. 

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

	 
Function Loop_beaker(Str Junban,""){ 

	Str XX; Str ZZ;
	Int SW=0; Str LL=""; Int j;
	Str AB1; Str AB2; Str AB3;
	Int Num=0; Int Chk=0;

	Int Size= SizeOf(Junban)+1
 	For(Int i=1; i<Size; i++){

		XX=MID(Junban,i,1) // i=1~

		If(SW==1){
			Switch(XX){
				Case("0"){ LL= LL+ XX }
				Case("1"){ LL= LL+ XX }
				Case("2"){ LL= LL+ XX }
				Case("3"){ LL= LL+ XX }
				Case("4"){ LL= LL+ XX }
				Case("5"){ LL= LL+ XX }
				Case("6"){ LL= LL+ XX }
				Case("7"){ LL= LL+ XX }
				Case("8"){ LL= LL+ XX }
				Case("9"){ LL= LL+ XX }
				Case("]"){ Gt2_err({"���[�v�݂̂����Ȃ�"}) }
				Default{ If(LL==""){ LL=2 } SW=2 }
			} //sw
		}
		If(SW==0){
			Switch(XX){
				Case("["){ SW=1 }
				Case(":"){ Gt2_err({"':' ����Ɍ����"}) }
				Case("]"){ Gt2_err({"']' ����Ɍ����"}) }
				Default{ AB1= AB1+ XX }
			} //sw
		}
		If(SW==3){
			Switch(XX){
				Case("["){ Num++; AB3= AB3+ XX }
				Case(":"){ If(Chk>0){ AB3= AB3+ XX }Else{ Gt2_err({"':' ����������"}) }  }
				Case("]"){ If(Chk>0){ If(Num==0){ AB3= Loop_beaker(AB3) SW=4; Chk=0 }Else{ AB3= AB3+ XX; Num-- } }Else{ SW=4 }  }
				Default{ AB3= AB3+ XX }
			} //sw
			If(Num>Chk){ Chk= Num }
		}
		If(SW==2){
			Switch(XX){
				Case("["){ Num++; AB2= AB2+ XX }
				Case(":"){ If(Chk>0){ If(Num==0){ AB2= Loop_beaker(AB2) SW=3; Chk=0 }Else{ AB2= AB2+ XX } }Else{ SW=3 }  }
				Case("]"){ If(Chk>0){ If(Num==0){ AB2= Loop_beaker(AB2) SW=4; Chk=0 }Else{ AB2= AB2+ XX; Num-- } }Else{ SW=4 }  }
				Default{ AB2= AB2+ XX }
			} //sw
			If(Num>Chk){ Chk= Num }
		}
		If(SW==4){
			ZZ= ZZ+ AB1;

			j= LL;
			While(1){
				ZZ= ZZ+ AB2;
				j--; If(j<=0){ Exit; } ZZ= ZZ+ AB3;
			} //
			SW=0; LL=""; AB1=""; AB2=""; AB3="";
		}
	} //
	If(SW!=0){ Gt2_err({"'[:]' �̌`�ƈႤ err"},SW) }

	Result= ZZ+ AB1;
} //func

// Print( Loop_beaker("q[e:[h:y]]t[[w:[k]]:r]u[a[b[:c]]][z]q") )


 
//------------------------ 
 
Function Value_checker(Str XX, Str SW){ //�O�ċN�^ 

	Int Chk= 0

	Switch(XX){
		//Case(" "){} //Value�s�K�v�Aq_1 31:arp�̂���
		Case("0"){}
		Case("1"){}
		Case("2"){}
		Case("3"){}
		Case("4"){}
		Case("5"){}
		Case("6"){}
		Case("7"){}
		Case("8"){}
		Case("9"){}
		Default{
			Switch(SW){
				Case("len"){
					Switch(XX){
						Case("^"){}
						Case("-"){}
						Case("+"){}
						Default{ Chk= 1 }
					} //sw
				}
				Case("voice"){
					Switch(XX){
						Case("^"){}
						Case(","){}
						Case("-"){}
						Case("+"){}
						Default{ Chk= 1 }
					} //sw
				}
				Default{ Chk= 1 }
			} //sw
		}
	} //sw

	Result= Chk;
} //func

 
Function Cmd_picker(Array RR){ 

	Switch(RR(1)){
		Case("TrackKey"){ RR(2)= "key" }
		Case("Key"){	  RR(2)= "key" }
		Case("l"){  RR(2)= "len"  }
		Case("q"){  RR(2)= "qvto" }
		Case("v"){  RR(2)= "qvto" }
		Case("t"){  RR(2)= "qvto" }
		Case("o"){  RR(2)= "qvto" }
		Case("@"){  RR(2)= "voice"}
		Case("l_"){ RR(2)= "len"  }
		Case("q_"){ RR(2)= "qvto" }
		Case("v_"){ RR(2)= "qvto" }
		Case("t_"){ RR(2)= "qvto" }
		Case("o_"){ RR(2)= "qvto" }
		Default{ Gt2_err({"�R�}���h�������X�g�ɂȂ�"},RR(1) ) End; }
	} //sw

	Switch(RR(2)){
		Case("key"){
			Switch(RR(0)){
				Case(1){ Gt2_err({"Key�^�� ���l����s��"}) }
				Case(2){ Gt2_err({"Key�^�� +����s��"}) }
				Case(3){ Gt2_err({"Key�^�� -����s��"}) }
			} //sw
		}
		Case("len"){
			Switch(RR(0)){
				Case(4){ Gt2_err({"len�^�� =�s��"}) }
			} //sw
		}
		Case("qvto"){
			Switch(RR(0)){
				Case(9){ Gt2_err({"qvto�^�� ^����s��"}) }
			} //sw
		}
		Case("voice"){
			Switch(RR(0)){
				Case(9){ Gt2_err({"voice�^�� ^����s��"}) }
				Case(3){ Gt2_err({"voice�^�� -����s��"}) }
			} //sw
		}
	} //sw

	Result= RR;
} //func

 
Function Cmd_checker(Str XX,""){ //�O�ċN�^ 

	Int Chk= 0

	Switch(XX){
		Case("^"){ Chk=9 }
		Case("0"){ Chk=1 }
		Case("1"){ Chk=1 }
		Case("2"){ Chk=1 }
		Case("3"){ Chk=1 }
		Case("4"){ Chk=1 }
		Case("5"){ Chk=1 }
		Case("6"){ Chk=1 }
		Case("7"){ Chk=1 }
		Case("8"){ Chk=1 }
		Case("9"){ Chk=1 }
		Case("+"){ Chk=2 }
		Case("-"){ Chk=3 }
		Case("="){ Chk=4 }
		Case(CHR(40)){ Chk=5 }	//(
	} //sw

	Result= Chk;
} //func

 
Function Gt2_parts_common_if(){ 

		If(SW==8){ //����I��
			//RC(1)= RC(1)+ XX
			//If(RC(1)=="Z"){ Exit; }
		}
		If(SW==7){
			Switch(XX){
				Case(CHR(40)){  RV(0)= RV(0)+1 }
				Case(CHR(41)){  RV(0)= RV(0)-1 }
				Case("Z"){	RV(0)= 0; Gt2_err({"�����ʂȂ��\��"},RV(1)) }
			} //sw

			If(RV(0)>0){ RV(1)= RV(1)+ XX }
			Else{
				TT= TT+ RV(1)
				SW=9
			}
		}
		If(SW==5){
			Switch(XX){
				Case(CHR(40)){  RV(0)= RV(0)+1 }
				Case(CHR(41)){  RV(0)= RV(0)-1 }
				Case("Z"){	RV(0)= 0; Gt2_err({"�����ʂȂ��\��"},RV(1)) }
			} //sw

			If(RV(0)>0){ RV(1)= RV(1)+ XX }
			Else{
				TT= TT+ RC(1)+ CHR(40)+ RV(1)+ CHR(41)
				SW=9
			}
		}
		If(SW==4){ //[88]
			RV(0)= Value_checker(XX,RC(2)) //���l�O�҂�

			If(RV(0)==0){ RV(1)= RV(1)+ XX }
			Else{

				If(RV(1)==""){ Gt2_err({"��������"},RV(1)) }

				TT= TT+ RC(1)+ RV(2)+ RV(1);
				SW=0
			}
		}
		If(SW==3){ //[= ]
			RC(0)= Cmd_checker(XX) //�����҂�

				Switch(RC(0)){
					Case(5){ SW=5; RV=(1,"","" ) } // ����
					Default{ SW=4; RV=(0,XX,RV(2)) }
				} //sw
		}
		If(SW==2){ //[q_ ]
			RC(0)= Cmd_checker(XX) //�����҂�

			If(RC(0)==0){ If(XX!=" "){ RC(1)= RC(1)+ XX }  } //�󔒃J�b�g
			Else{
				RC= Cmd_picker(RC)

				Switch(RC(0)){
					Case(9){ SW=4; RV=(0,XX,"^") }
					Case(1){ SW=4; RV=(0,XX,"" ) } // ���l
					Case(5){ SW=5; RV=(1,"","" ) } // ����
					Case(2){ SW=3; RC(0)= 0; RV(2)= "+" } // [+]
					Case(3){ SW=3; RC(0)= 0; RV(2)= "-" } // [-]
					Case(4){ SW=3; RC(0)= 0; RV(2)= "=" } // [=]
				} //sw
			}
		}
}//func

 
Function Gt2_parts_common_err(){ 

	Switch(SW){
		Case(8){} //����I��
		Case(2){ Gt2_err({"�R�}���h�w��s��"},SW) }
		Case(3){ Gt2_err({"�R�}���h�l�G���["},SW) }
		Default{ Gt2_err({"���s�G���["},SW) End; }
	} //sw
} //func

 
//------------------------ 
 
Function Fret_setter(Int Num, Array Fret){ 

	Str XX; Array RR;

	For(Int i=0; i<6; i++){ //SizeOf(Fret)

		XX= Fret(i);
		If(XX!="x"){ RR= (RR, i+ Num) }
	} //

	Result= RR;
} //func

 
Function Gate_setter(Array RR){ // arp no gate 

	Int Gate= MML(q)
	Int Size= SizeOf(RR)

	For(Int i=0; i<Size; i++){

		If(RR(i)!=0){
			RR(i)= Gate* (RR(i)-1 ); // q100 no bunn "-1"
		}
	} //

	Result= RR;
} //func

 
Function Gt2_arpeggio(Str Prn, Str Junban_value, Array Fret_value){ 


	Array Fret=("", Fret_value); // [^] no bunn

	Array T9R= Strings_assgin("T9R")
	Array Q9R= Strings_assgin("Q9R")
	Array V9R= Strings_assgin("V9R")

	Int Gen;//�Y�� 0    1   2   3    4   5   6
	Array Waon=  ( 0,   0,  0,  0,   0,  0,  0);
	Array Gate=  (-1,  -1, -1, -1,  -1, -1, -1);
	//	       ^    r   h   u    3   2   1


	Int WG=0; Int JJ=0; Int NN=0
	Array Gate_num; Array T9; Array Q9; Array V9;


	Array RR= Fret_setter(1,Fret_value) //[^] no bunn+1 |�Y���̂ݒ��o
	Int NS= SizeOf(RR)

	If(NS<3){ Gt2_err({"���R�[�h"},Chd_gbl,{"������3�{����"},NS) End; }


	Str XX; Str TT; Int SW= 0;
	Array RC=(,"",""); Array RV=(,"","");
	Str Junban= Junban_value+ "Z"

	Int Size= SizeOf(Junban)+1
	For(Int i=1; i<Size; i++){

		XX= MID(Junban,i,1) // i=1~

		Gt2_parts_common_if()

		If(SW==6){
			If(NS>Gen){ Gen= RR(NS -Gen); }
			Else{
				If(#Sum_chg=="off"){

				Gt2_err({"�R�[�h"},Chd_gbl,{"����"}+ (Gen+1)+ {"�K�v"},NS,{"���̎w��"},RC(1)) End;

				}Else{

					Gen= NS- 1 //r�̉���

					Switch(Gen){
						Case(4){ RC(2)= "u" Gen= RR(NS -4);	} // h->u
						Case(3){ RC(2)= "r" Gen= RR(0);		} // hu->r
						Case(2){ RC(2)= "2" Gen= RR(NS -2);	} // hu3->2
					} //sw

					If(#Sum_chg=="msg"){

					Gt2_err({"�R�[�h"},Chd_gbl,{"����"},NS,{"�w��ύX"},RC(1)+ {" -> "}+ RC(2)) }

					}
			}
			SW=1
		}
		If(SW==1){
			If(Gen==0){
				TT= TT+ "r" // [^ -> r] �Q�[�g3��"^"�{��6�ƂȂ�L�щ߂��邽��

				Q9=(Q9, 0);
				V9=(V9, 0);

				If(Gate(Gen)!=-1){ Gate_num(Gate(0))= 0 } //�����T�C�N���x�点��
				// G_num(2)..G_num(4) <- G_num(3)���ォ��ǉ�

			}Else{
				TT= TT+ Fret(Gen); //MML����

				T9=(T9, T9R(Gen));
				Q9=(Q9, Q9R(Gen));
				V9=(V9, V9R(Gen));

				If(Gate(Gen)!=-1){ Gate_num(Gate(Gen))= JJ- Waon(Gen); } //���ݒl�������
			}

			Gate(Gen)= NN; NN++ // ���A���J�E���^
			Waon(Gen)= JJ; If(WG==0){ JJ++ } // waon�J�E���^

			SW=0
		}
		If(SW==0){
			Switch(XX){
				Case(CHR(40)){ SW=7; RV=(1,"","") }
				Case("Z"){ SW=8; RC=(,XX,"") }
				Case(" "){ TT= TT+ XX }
				Case("|"){ TT= TT+ XX }
				Case(";"){ TT= TT+ XX }
				Case("<"){ TT= TT+ XX }
				Case(">"){ TT= TT+ XX }
				Case("'"){ TT= TT+ XX; If(WG==0){ WG=1 }Else{ WG=0; JJ++ }  }

				Case("K"){ SW=2; RC=(0,XX,"") }
				Case("T"){ SW=2; RC=(0,XX,"") }
				Case("@"){ SW=2; RC=(0,XX,"") }
				Case("q"){ SW=2; RC=(0,XX,"") }
				Case("v"){ SW=2; RC=(0,XX,"") }
				Case("t"){ SW=2; RC=(0,XX,"") }
				Case("o"){ SW=2; RC=(0,XX,"") }

				Case("1"){ SW=1; Gen= RR( NS-1) }
				Case("2"){ SW=1; Gen= RR( NS-2) }
				Case("3"){ SW=6; Gen= 3; RC=(,XX,"") }
				Case("u"){ SW=6; Gen= 4; RC=(,XX,"") }
				Case("h"){ SW=6; Gen= 5; RC=(,XX,"") }
				Case("r"){ SW=1; Gen= RR(0) }
				Case("^"){ SW=1; Gen= 0 } // [q.N(200,0) cr] r�ɂ��Q�[�g�w��K�v
				Default{ Gt2_err({"arpeggio�Œ�`���ꂽ�����ȊO"},XX) }
			} //sw
		}
		If(SW==9){ SW=0 } //�̂Ēl�̂���
	} //

	Gt2_parts_common_err()


	//Print("Junban:"+Junban) Print("JJ:"+JJ)
	//Print("Waon:"+Waon) Print("Gate:"+Gate) // debug

	Int j= 0
	While(1){ // ��n��

		If(Gate(j)!=-1){
			If(j==0){	Gate_num(Gate(0))= 0 }
			Else{		Gate_num(Gate(j))= JJ- Waon(j) }
		}
		j++; If(j=>7){ Exit; } //SizeOf(Gate)
	} //

	//Print("Gate_num:"+Gate_num) // gate hairetsu

	Switch(Prn){
		Case("result"){	Res_gbl= TT; }
		Case("prn"){	Res_gbl= TT; Print(TT) }
		Default{

TT= "q__8.N("+ Gate_setter(Gate_num)+ ");t__9.N("+ T9+ ");q__9.N("+ Q9+ ");v__9.N("+ V9+ "); "+ TT+ " q__8=0;t__9=0;q__9=0;v__9=0; "

			If(Prn=="print"){ Print("arp :"+ Junban_value +" | "+ Fret_value) Print(TT) }
			TT;
		}
	} //sw
} //func

//Array Fret_value= ("e","x","`d", "`g","`b","``e")
//Gt2_arpeggio("print", {(l8 )@25,16,0 q_10 v+3 t=3 o(4-1)TrackKey(-3) Key = 3 31r1 h2u2 }, Fret_value)

 
Function Strings_assgin(Str TT,""){ // ������ 

	Array RR;

	Switch(TT){
	Case("T9R"){
		Switch(#Device_set){
		Case("GS"){	RR= ( 0,  -3, -2, -2,  -3, -3, -3); } //t
		Default{	RR= ( 0,   1,  2,  2,   1,  1,  0); }
		} //sw
	}
	Case("Q9R"){
		Switch(#Device_set){
		Case("GS"){	RR= ( 0,   0,  6, 18,  24, 36, 42); } //q
		Default{	RR= ( 0,   0,  3,  9,  12, 18, 21); }
		} //sw
	}
	Case("V9R"){
		Switch(#Device_set){
		Case("GS"){	RR= ( 0,   0, -4,-12, -16,-24,-28); } //v ����キ
		Default{	RR= ( 0,   0, -2, -6,  -8,-12,-14); }
				//    ^    r   h   u    3   2   1
		} //sw
	}
	Case("Vel_chk"){

		Switch(#Device_set){
		Case("GS"){	RR= (0,-2,-4,  -6, -8,-10); } //v
		Default{	RR= (0,-6,-9, -10,-13,-19); }
		} //sw
	}
	Case("Q"){

		Switch(#Device_set){

		Case("GS"){	RR= (-3,-2,-1, 0,0,0); } //t
		Default{	RR= (-2,-2,-1, 0,1,1); }

		} //sw

	}
	} //sw

	Result= RR
} //func


 
Function Speed_setter(Int Spd, Int Num){ 

	Array QQ; Array PP;

	Array Q= Strings_assgin("Q")

	Switch(Num){
		Case(2){ 	QQ= (Q(2)*Spd,Q(3)*Spd)
				PP= (-Q(2)*Spd,-Q(3)*Spd)
		}
		Case(3){ 	QQ= (Q(1)*Spd,Q(2)*Spd,Q(3)*Spd)
				PP= (-Q(1)*Spd,-Q(2)*Spd,-Q(3)*Spd)
		}
		Case(4){ 	QQ= (Q(1)*Spd,Q(2)*Spd,Q(3)*Spd,Q(4)*Spd)
				PP= (-Q(1)*Spd,-Q(2)*Spd,-Q(3)*Spd,-Q(4)*Spd)
		}
		Case(5){ 	QQ= (Q(0)*Spd,Q(1)*Spd,Q(2)*Spd,Q(3)*Spd,Q(4)*Spd)
				PP= (-Q(0)*Spd,-Q(1)*Spd,-Q(2)*Spd,-Q(3)*Spd,-Q(4)*Spd)
		}
		Case(6){ 	QQ= (Q(0)*Spd,Q(1)*Spd,Q(2)*Spd,Q(3)*Spd,Q(4)*Spd,Q(5)*Spd)
				PP= (-Q(0)*Spd,-Q(1)*Spd,-Q(2)*Spd,-Q(3)*Spd,-Q(4)*Spd,-Q(5)*Spd)
		}
		Default{	QQ= (Q(2)*Spd)
				PP= (-Q(2)*Spd)
		}
	} //sw

	//While(1){ Num--; PP= (-QQ(Num),PP ); If(Num<=0){ Exit; }  } //Zerominus -> �W�J�ςݐ���

	Result= { t__9%.N(}+ QQ+ {) q__9%.N(}+ PP+ {) } //�S���~���[�g

} //func

 
Function Gt2_cutting(Str Prn, Str Junban_value, Array Chord){ 


	Str Chd= Chord(1)+ Chord(2)

	Str XX; Str TT; Int SW= 0;
	Array RC=(,"",""); Array RV=(,"","");
	Str Junban= Junban_value+ "Z" //�����̔ԕ�

	Int Size= SizeOf(Junban)+1
	For(Int i=1; i<Size; i++){ // while(1)�Ɠ���

		XX= MID(Junban,i,1) // i=1~

		Gt2_parts_common_if()

		If(SW==1){
			RV(0)= Value_checker(XX)

			If(RV(0)==0){ RV(1)= RV(1)+ XX }
			Else{
				Switch(Prn){
					Case("prn"){ 	TT= TT+ Chord(2) }
					Case("result"){	TT= TT+ Chord(2) }
					Default{
						Switch(RV(2)){
							Case("up"){ If(RV(1)==""){ RV(1)= #Up_set   } RV(1)= "-"+ RV(1)  }
							Case("dn"){ If(RV(1)==""){ RV(1)= #Down_set }  }
						} //sw
						TT= TT+ Speed_setter(RV(1),Chord(0))+ Chd
					}
				} //sw
				SW=0
			}
		}
		If(SW==0){
			Switch(XX){
				Case(CHR(40)){ SW=7; RV=(1,"","") }
				Case("Z"){ SW=8; RC=(,XX,"") }
				Case(" "){ TT= TT+ XX }
				Case("|"){ TT= TT+ XX }
				Case(";"){ TT= TT+ XX }
				Case("<"){ TT= TT+ XX }
				Case(">"){ TT= TT+ XX }
				Case("^"){ TT= TT+ XX }
				Case("."){ TT= TT+ XX }
				Case("r"){ TT= TT+ XX }

				Case("K"){ SW=2; RC=(0,XX,"") }
				Case("T"){ SW=2; RC=(0,XX,"") }
				Case("@"){ SW=2; RC=(0,XX,"") }
				Case("l"){ SW=2; RC=(0,XX,"") }
				Case("q"){ SW=2; RC=(0,XX,"") }
				Case("v"){ SW=2; RC=(0,XX,"") }
				Case("t"){ SW=2; RC=(0,XX,"") }
				Case("o"){ SW=2; RC=(0,XX,"") }

				Case("u"){ SW=1; RV=(1,"","up") }
				Case("d"){ SW=1; RV=(1,"","dn") }
				Default{ Gt2_err({"cutting�Œ�`���ꂽ�����ȊO"},XX) }
			} //sw
		}
		If(SW==9){ SW=0 } //�̂Ēl�̂���
	} //

	Gt2_parts_common_err()


	Switch(Prn){
		Case("result"){	Res_gbl= TT; }
		Case("prn"){	Res_gbl= TT; Print(TT) }
		Default{
			TT= TT+ " q__9=0;t__9=0;v__9=0; "
			If(Prn=="print"){ Print("cut :"+ Junban_value +" | "+ Chord(2)) Print(TT) }
			TT;
		}
	} //sw
} //func

//Str CHD= {v__9.N(0,-1,-2,-3)'ce-gb-'};
//Gt2_cutting("print", { @26,8,0 Key(4) TrackKey = 6 l8 q+11 v_-11 t=3 o(3) d4u3^u ^udu11},CHD)



 
//------------------------ 
  
// output_MML 

	 
Function Open_tuning(Str Tune,""){ 

	Switch(Tune){
		Case(""){	Tune= "nomal" }
		Case("Nomal"){	Tune= "nomal" }
		Case("dadgad"){	Tune= "DADGAD" }
		Case("nash"){	Tune= "nashville" }
		Case("Nash"){	Tune= "nashville" }
		Case("Nashville"){ Tune= "nashville" }
		Case("DropD"){	Tune= "dropD"  }
		Case("OpenDm"){	Tune= "openDm" }
		Case("OpenD"){	Tune= "openD"  }
		Case("OpenGm"){	Tune= "openGm" }
		Case("OpenG"){	Tune= "openG"  }
	} //sw

	Array Tuning;
	//o3=n36+  4,9,12+2, 12+7,12+11,24+4 [regular]

	Switch(Tune){
		Case("nomal"){	Tuning=( 4, 9,14,19,23,28) }	// EA>D GB>E
		Case("DADGAD"){	Tuning=( 2, 9,14,19,21,26) }	// DAD GAD
		Case("nashville"){ Tuning=(16,21,26,31,23,28) } // >EAD G<BE
		Case("dropD"){	Tuning=( 2, 9,14,19,23,28) }	// DAD GBE
		Case("openDm"){	Tuning=( 2, 9,14,17,21,26) }	// DAD FAD
		Case("openD"){	Tuning=( 2, 9,14,18,21,26) }	// DAD F#AD
		Case("openGm"){	Tuning=( 2, 7,14,19,22,26) }	// DGD GBbD
		Case("openG"){	Tuning=( 2, 7,14,19,23,26) }	// DGD GBD
		Default{ Gt2_err({"�`���[�j���O���X�g�ɂȂ� Tune"},Tune) End; }
	} //sw

	If(SizeOf(Tuning)!=6){ Gt2_err({"Open_tuning | [6]���������s��"},SizeOf(Tuning)) End; }

	Result= Tuning;
} //func

 
Function Futohgoh(Int Num,Array RR){ 

	Str TT; Str XX; Int i=0

	If(Num<0){ XX=RR(0); i= -Num }
	If(Num>0){ XX=RR(1); i=  Num }

	While(1){
		If(i<=0){ Exit; }
		TT= TT+ XX
		i--
	} //
	Result= TT;
} //func

 
Function Fretmml_go(Int Barre, Array Fret){ //Selector | "gousei" 


	Array Tuning= Open_tuning(#Tune_set)

	Array Note_chk= ("c","d-","d","e-", "e","f","f+","g", "g+","a","b-","b");

	Array Vel_chk= Strings_assgin("Vel_chk")


	Str XX; Int NN; Str TT; Int Chk=0; Int Oct; Array VV;

	For(Int i=0; i<6; i++){ //SizeOf(Fret)

		XX= Fret(i) //for if[0,"x"] kubetsu int 0 str x

		If(XX!="x"){
			NN= Barre+ Fret(i)+ Tuning(i); Oct= NN/12

			If(Oct!=Chk){ TT= TT+ Futohgoh(Oct-Chk,"<",">"); Chk= Oct }

			TT= TT+ Note_chk(NN%12);
			VV= (VV, Vel_chk(i));
		}
	} //

	Array RR= (SizeOf(VV),"v__9.N("+ VV+ ")","'"+ TT+ Futohgoh(-Chk,"<",">")+ "'");
	Result= RR;
} //func

 
Function Fretmml_ha(Int Barre, Array Fret){ //Selector | "hairetsu" 


	Array Tuning= Open_tuning(#Tune_set)

	Array Note_chk= ("c","d-","d","e-", "e","f","f+","g", "g+","a","b-","b");



	Str XX; Int NN; Str TT; Array RR;

	For(Int i=0; i<6; i++){ //SizeOf(Fret)

		XX= Fret(i) //for if[0,"x"] kubetsu int 0 str x

		If(XX!="x"){
			NN= Barre+ Fret(i)+ Tuning(i);

			TT= Futohgoh(NN/12,CHR(34),"`")+ Note_chk(NN%12);
			RR= (RR,TT);
		}Else{
			RR= (RR,XX);
		}
	} //

	Result= RR;
} //func

 
//------------------------ 
 
Function Chdprint(Str Junban,Str Cnv,Str Pos){ 


	If(Cnv=="" &Pos==""){ Pos= Junban; Junban= "" } // Pos�ֈړ�
	Int Barre; Array Keynote; Int Rootkey; Array Fret;

	Str XX; Str ZZ= ""; Int Root_gen; Int j=0 //gen number
	Int NN; Int Barre_chk= 0; Int Gen_chk=0

	Int Size= SizeOf(Pos)+1
	For(Int i=1; i<Size; i++){
		XX=MID(Pos,i,1) // i=1~

		If(Gen_chk<6){
			Switch(XX){
				Case(" "){}
				Case("r"){ Root_gen= 6-j; ZZ= ZZ+"0"; j++ }
				Case("s"){ Root_gen= 6-j; ZZ= ZZ+"x"; j++ }
				Case("x"){ j++; ZZ= ZZ+XX }
				Case("+"){ ZZ= XX }
				Case("-"){ ZZ= XX }
				Case("0"){ j++; ZZ= ZZ+ XX }
				Case("1"){ j++; ZZ= ZZ+ XX }
				Case("2"){ j++; ZZ= ZZ+ XX }
				Case("3"){ j++; ZZ= ZZ+ XX }
				Case("4"){ j++; ZZ= ZZ+ XX }
				Case("5"){ j++; ZZ= ZZ+ XX }
				Case("6"){ j++; ZZ= ZZ+ XX }
				Case("7"){ j++; ZZ= ZZ+ XX }
				Case("8"){ j++; ZZ= ZZ+ XX }
				Case("9"){ j++; ZZ= ZZ+ XX }
				Case("a"){ j++; ZZ= ZZ+"10" }
				Case("b"){ j++; ZZ= ZZ+"11" }
				Case("c"){ j++; ZZ= ZZ+"12" }
				Default{ Gt2_err({"�t���b�g�w�蕶���ȊO�ł�"},XX) }
			} //sw

			If(j!=Gen_chk){
				NN= ZZ;  If(NN<Barre_chk){ Barre_chk= NN; }

				Fret=(Fret,ZZ); ZZ=""; Gen_chk= j;
			}

		}Else{
			Switch(XX){
				Case(" "){}
				Case("|"){}
				Case("N"){ ZZ= XX }
				Case("A"){ ZZ= XX }
				Case("B"){ ZZ= XX }
				Case("C"){ ZZ= XX }
				Case("D"){ ZZ= XX }
				Case("E"){ ZZ= XX }
				Case("F"){ ZZ= XX }
				Case("G"){ ZZ= XX }
				Case("b"){ ZZ= ZZ+ XX }
				Case("#"){ ZZ= ZZ+ XX }
				Case("p"){ ZZ= ZZ+ XX }
				Default{ Gt2_err({"�i�b�g�A�L�[�����ȊO�ł�"},XX) }
			} //sw
		}
	} //

	If(SizeOf(Fret)!=6){ Gt2_err({"�����Ȃ��A�܂���6�K�v"},SizeOf(Fret) ) End; }

	Switch(ZZ){
		Case("N"){  Barre=0    }
		Case("A"){  Rootkey=9  }
		Case("A#"){ Rootkey=10 }
		Case("Ap"){ Rootkey=10 }
		Case("Bb"){ Rootkey=10 }
		Case("B"){  Rootkey=11 }

		Case("C"){  Rootkey=0 }
		Case("C#"){ Rootkey=1 }
		Case("Cp"){ Rootkey=1 }
		Case("Db"){ Rootkey=1 }
		Case("D"){  Rootkey=2 }
		Case("D#"){ Rootkey=3 }
		Case("Dp"){ Rootkey=3 }
		Case("Eb"){ Rootkey=3 }
		Case("E"){  Rootkey=4 }

		Case("F"){  Rootkey=5 }
		Case("F#"){ Rootkey=6 }
		Case("Fp"){ Rootkey=6 }
		Case("Gb"){ Rootkey=6 }
		Case("G"){  Rootkey=7 }
		Case("G#"){ Rootkey=8 }
		Case("Gp"){ Rootkey=8 }
		Case("Ab"){ Rootkey=8 }
		Default{ Gt2_err({"[A-G#,N]���݂��Ȃ��L�[�w��A�������i�b�g�������Ȃ�"},ZZ) }
	} //sw

	If(ZZ!="N"){
		Switch(Root_gen){
			Case(3){ Keynote=(5,6,7,8,9, 10,11,0,1,2,3,4); } // 3G
			Case(4){ Keynote=(10,11,0,1,2, 3,4,5,6,7,8,9); } // 4D
			Case(5){ Keynote=(3,4,5,6,7, 8,9,10,11,0,1,2); } // 5A
			Case(6){ Keynote=(8,9,10,11,0, 1,2,3,4,5,6,7); } // 6E
			Default{ Gt2_err({"[3-6]���[�g���w�� r,s ������܂���"},Root_gen) End; }
		} //sw

		Barre= Keynote(Rootkey);

		If(Barre< -Barre_chk){ Barre= Barre+12; }
	}


	Chd_gbl= Pos;		// Global
	Root_gbl= Root_gen;	// Global


	MML_out(Cnv,Junban,Barre,Fret)

	Result= Res_gbl;	// Global
} //func


 
Function Mode_sw(Str Cnv,""){ 

	Int NN; Array RR;

	If(Cnv==""){ Cnv= #Mode_set }
	Switch(Cnv){
		Case(""){		Cnv= "st" }
		Case("St"){		Cnv= "st" }
		Case("ST"){		Cnv= "st" }
		Case("Prn"){		Cnv= "prn" }
		Case("PRN"){		Cnv= "prn" }
		Case("Cut"){		Cnv= "cut" }
		Case("CUT"){		Cnv= "cut" }
		Case("Cut_prn"){	Cnv= "cut_prn" }
		Case("Cut_Prn"){	Cnv= "cut_prn" }
		Case("Cut_print"){	Cnv= "cut_print" }
		Case("Cut_Print"){	Cnv= "cut_print" }
		Case("Cut_result"){	Cnv= "cut_result" }
		Case("Cut_Result"){	Cnv= "cut_result" }
		Case("Arp"){		Cnv= "arp" }
		Case("ARP"){		Cnv= "arp" }
		Case("Arp_prn"){	Cnv= "arp_prn" }
		Case("Arp_Prn"){	Cnv= "arp_prn" }
		Case("Arp_print"){	Cnv= "arp_print" }
		Case("Arp_Print"){	Cnv= "arp_print" }
		Case("Arp_result"){	Cnv= "arp_result" }
		Case("Arp_Result"){	Cnv= "arp_result" }
	} //sw

	Switch(Cnv){
		Case("st"){ NN= MML(l%);	RR=("st","run","%"+ NN) } // ""��
		Case("prn"){			RR=("st","prn","")	}
		Case("print"){			RR=("st","print","")	}
		Case("result"){			RR=("st","result","")	}
		//Case("ha_render"){		RR=("st","ha_render","") }
		//Case("go_render"){		RR=("st","go_render","") }

		Case("cut"){			RR=("cut","run","")	}
		Case("cut_prn"){		RR=("cut","prn","")	}
		Case("cut_print"){		RR=("cut","print","")	}
		Case("cut_result"){		RR=("cut","result","")	}

		Case("arp"){			RR=("arp","run","")	}
		Case("arp_prn"){		RR=("arp","prn","")	}
		Case("arp_print"){		RR=("arp","print","")	}
		Case("arp_result"){		RR=("arp","result","")	}
		Default{			RR=("st","run",Cnv)	} // ^0-9
	} //sw

	Result= RR;
} //func


 
Function MML_out(Str Cnv, Str Junban, Int Barre, Array Fret){ 

	Array RM= Mode_sw(Cnv)
	Str Mod= RM(0); Str Prn= RM(1); Str Len= RM(2) //%96

	Str TT; Str RF;
	Array Chord; //one liner kaihi
	Switch(Mod){
		Case("cut"){
			If(Junban==""){ Junban= #Cut_set }
			Junban= Loop_beaker(Junban)

			Chord= Fretmml_go(Barre,Fret)
			Gt2_cutting(Prn,Junban,Chord)
		}
		Case("arp"){
			If(Junban==""){ Junban= #Arp_set }
			Junban= Loop_beaker(Junban)

			Chord= Fretmml_ha(Barre,Fret)
			Gt2_arpeggio(Prn,Junban,Chord)
		}
		Case("st"){
			Chord= Fretmml_go(Barre,Fret)

			Switch(Prn){
				/*
				// gt2_rendering �g�p�̂���
				Case("ha_render"){	//Number�́Agbl�J�E���^��
					Fret= Fretmml_ha(Barre,Fret)
					For(Int j=0;j<6;j++){ TT= TT+ "{"+ Fret(j)+ "}"; If(j<5){ TT= TT+ "," }  }

					TT= "Case("+ Number +"){ RR=("+ TT+") }"
					Print(TT)
				}
				Case("go_render"){
					TT= "Case("+ Number +"){ RR=("+ Chord(0)+ ",{"+ Chord(1)+ "},{"+ Chord(2)+ "}) }"
					Print(TT)
				}
				*/
				Case("result"){	Res_gbl= Chord(2); }
				Case("prn"){
					Res_gbl= Chord(2);

					For(Int i=0;i<6;i++){ RF= RF+ Fret(i) }
					TT= ""+ Chd_gbl+ " root:"+ Root_gbl+ "/ "+ RF+ "/ "+ Barre+ "fret"+ " | "+ Chord(2)
					Print(TT)
				}
				Default{
					If(Len==0){ Gt2_err({"�������Ȃ�/"}+ Chd_gbl, Len) End; }

					TT= Speed_setter(Junban,Chord(0))+ Chord(1)+ Chord(2)+ Len+ " q__9=0;t__9=0;v__9=0; "
					If(Prn=="print"){ Print(TT) }
					TT;
				}
			} //sw
		}
	} //sw
} //func

 	
//------------------------ 
  
//	Pi_List 
	 
Function FT_picker(Int Barre, Str FT, Array RH){ 


	Int NN; Int Gen_chk=0; Int Barre_chk; Array Fret;
	Str ZZ=""; Str XX; Int j=0;

	Int Size= SizeOf(FT)+1
	For(Int i=1; i<Size; i++){ // FT����

		XX= MID(FT,i,1) // i=1~

		Switch(XX){
			Case(" "){}
			Case("-"){ ZZ=XX }
			Case("+"){ ZZ=XX }
			Default{ j++; ZZ= ZZ+ XX }
		} //sw

			If(j!=Gen_chk){

				NN= ZZ; If(NN<Barre_chk){ Barre_chk= NN }

				If(j<RH(1)|RH(2)<j){ ZZ= "x" }
				Fret=(Fret,ZZ); ZZ=""; Gen_chk= j
			}
		} //

	If(Gen_chk!=6){ Gt2_err({"FT_picker | [6]��������Ȃ�"}, Gen_chk) End; }

	If(Barre< -Barre_chk){ Barre= Barre+12 }
	Fret= (Barre,Fret);

	Result= Fret;
} //func


 
Function FT_print(Int Rootkey, Str Chdname, Str Junban, Str Cnv, Str Vce){ 


	Array RR= Pi_chdlist(Rootkey,Chdname,Vce)
	Int Barre= RR(0); Str FT= RR(1); Array RH= (RR(2),7- RR(3),7- RR(4))

	RR= FT_picker(Barre,FT,RH)
	Barre= RR(0); RH= (RR(1),RR(2),RR(3),RR(4),RR(5),RR(6)) //Fret

	MML_out(Cnv,Junban,Barre,RH)

} //func


 
//------------------------ 
 
Function Root_hosei(Str Vce,""){ 

	Array RR;
	Switch(Vce){
		Case("4#"){	RR= (4,5,1) }
		Case("4"){	RR= (4,4,1) }
		Case("4b"){	RR= (4,3,1) }
		Case("4#x"){	RR= (4,5,2) }
		Case("4x"){	RR= (4,4,2) }
		Case("4bx"){	RR= (4,3,2) }

		Case("5#"){	RR= (5,6,1) }
		Case("5"){	RR= (5,5,1) }
		Case("5b"){	RR= (5,4,1) }
		Case("5#x"){	RR= (5,6,2) }
		Case("5x"){	RR= (5,5,2) }
		Case("5bx"){	RR= (5,4,2) }

		Case("6#"){	RR= (6,6,1) }
		Case("6"){	RR= (6,6,1) }
		Case("6b"){	RR= (6,5,1) }
		Case("6#x"){	RR= (6,6,2) }
		Case("6x"){	RR= (6,6,2) }
		Case("6bx"){	RR= (6,5,2) }
	} //sw

	Result= RR;
} //func

 
Function Pi_chdlist(Int Rootkey,Str Chdname,Str Vce){ 


	//Root_hosei�l: -1��<-�E���炵
	Array Vce_Select= (5,5, 4,5,6,  6,6,6,6, 5,5,5);
//	                        d   e            a

/*		1E ``e||   |   |   |
		2B    ||``c|   |   |
		3G  `g||   |   |   |
		4D    ||   | `e|   |
		5A    ||   |   | `c|
		6E o3x||   |   |   |
		   N   1F      3F
					C Maj.Position
					FT= "x32 010"
					Barre= 0;
*/

	Int Barre=0; Str FT; Array RH=(0,6,1);

	If(Vce==""){

	Switch(Chdname){
// Maj.
		Case("Maj"){	// 4:0 | 5:0 | 6:0 / Nut mode / 4#:4,5,1

			Switch(Rootkey){
				Case(0){  FT= "032 010"		RH=(5,5,1) }
				Case(7){  FT= "320 003"		RH=(6,6,1) }
			} //sw
		}
		Case("M7"){	// 4:0 | 5:0 | 6:0

			Switch(Rootkey){
				Case(0){  FT= "032 000"		RH=(5,5,1) }
				Case(5){  FT= "xx3 210"		RH=(4,4,1) }
				Case(7){  FT= "320 002"		RH=(6,6,1) }
			} //sw
		}
		Case("M79"){	// 4:-1 | 5:-1 | 6:0

			Vce_Select= (5,5, 5,4,6,  6,6,6,6, 6,5,5);
		}
		Case("M7p11"){	// 4:-3 | 5:0 | 6:-1

			Vce_Select= (5,5, 5,5,5,  4,6,6,6, 5,5,5);

			Switch(Rootkey){
				Case(0){  FT= "032 002"		RH=(5,5,1) }
			} //sw
		}
		Case("M713"){	// 4:-3 | 5:0 | 6:0

			Vce_Select= (5,5, 5,5,6,  4,6,6,6, 5,5,5);
		}
		Case("M913"){	// 4:0 | 5:-3 | 6:-3

			Vce_Select= (5,5, 4,5,5,  5,5,6,6, 6,6,6);
		}

// min.
		Case("min"){}	// 4:0 | 5:0 | 6:0
		Case("m7"){	// 4:0 | 5:0 | 6:0

			Switch(Rootkey){
				Case(4){  FT= "022 030"		RH=(6,6,1) }
			} //sw
		}
		Case("m79"){	// 4:-2 | 5:-2 | 6:0

			Vce_Select= (5,5, 5,5,4,  6,6,6,6, 6,6,5);

			Switch(Rootkey){
				Case(6){  FT= "202 120"		RH=(6,6,1) }
			} //sw
		}
		Case("m711"){	// 4:0 | 5:-2 | 6:0

		Vce_Select= (5,5, 4,5,6,  6,6,6,6, 6,6,5);

			Switch(Rootkey){
				Case(6){  FT= "202 200"		RH=(6,6,1) }
			} //sw
		}

// add9
		Case("add9"){	// 4:-2 | 5:-1 | 6:0

			Vce_Select= (5,5, 5,5,4,  6,6,6,6, 6,5,5);

			Switch(Rootkey){
				Case(0){  FT= "032 030"		RH=(5,5,1) }
				Case(4){  FT= "022 102"		RH=(6,6,1) }
				Case(7){  FT= "320 005"		RH=(6,6,1) }
			} //sw
		}
		Case("madd9"){	// 4:-2 | 5:-3 | 6:0

			Vce_Select= (5,5, 5,5,4,  6,6,6,6, 6,6,6);
		}
		Case("add9sus4"){} // 4:0 | 5:0 | 6:0 // Alhambra chord

// sus
		Case("sus2"){	// 4:0 | 5:0 | 6:-1

			Vce_Select= (5,5, 4,5,5,  6,6,6,6, 5,5,5);

			Switch(Rootkey){
				Case(0){  FT= "x30 033"		RH=(5,5,1) }
				Case(7){  FT= "300 233"		RH=(6,6,1) }
			} //sw
		}
		Case("sus4"){	// 4:0 | 5:0 | 6:0

			Switch(Rootkey){
				Case(0){  FT= "x33 011"		RH=(5,5,1) }
				Case(7){  FT= "330 013"		RH=(6,6,1) }
			} //sw
		}
		Case("7sus4"){}	// 4:0 | 5:0 | 6:0
		Case("9sus4"){	// 4:0 | 5:0 | 6:-2

			Vce_Select= (5,5, 4,5,5,  5,6,6,6, 5,5,5);
		}
		Case("13sus4"){} // 4:0 | 5:0 | 6:0

// 7th
		Case("7th"){	// 4:0 | 5:0 | 6:0

			Switch(Rootkey){
				Case(0){  FT= "032 310"		RH=(5,5,1) }
				Case(4){  FT= "020 130"		RH=(6,6,1) }
				Case(7){  FT= "320 001"		RH=(6,6,1) }
				Case(11){ FT= "x21 202"		RH=(5,5,1) }
			} //sw
		}
		Case("79"){	// 4:-1 | 5:-1 | 6:0

			Vce_Select= (5,5, 5,4,6,  6,6,6,6, 6,5,5);

			Switch(Rootkey){
				Case(5){  FT= "101 01x"		RH=(6,6,1) }
			} //sw
		}
		Case("7p9"){	// 4:-1 | 5:-1 | 6:-1

			Vce_Select= (5,5, 5,4,5,  6,6,6,6, 6,5,5);

			Switch(Rootkey){
				Case(4){  FT= "02x 133"		RH=(6,6,1) }
			} //sw
		}
		Case("7p11"){	// 4:0 | 5:-1 | 6:-1

			Vce_Select= (5,5, 4,5,5,  6,6,6,6, 6,5,5);
		}
		Case("7b13"){}	// 4:0 | 5:0 | 6:0
		Case("713"){}	// 4:0 | 5:0 | 6:0


		Case("b9p11"){	// 4:-1 | 5:-1 | 6:-2

			Vce_Select= (5,5, 5,4,5,  5,6,6,6, 6,5,5);
		}

// 6th,mM7
		Case("6th"){	// 4:0 | 5:0 | 6:-1

			Vce_Select= (5,5, 4,5,5,  6,6,6,6, 5,5,5);

		Switch(Rootkey){
				Case(0){  FT= "032 210"		RH=(5,5,1) }
				Case(4){  FT= "022 120"		RH=(6,6,1) }
				Case(5){  FT= "xx3 231"		RH=(4,4,1) }
				Case(7){  FT= "322 000"		RH=(6,6,1) }
			} //sw
		}
		Case("69"){	// 4:-1 | 5:-1 | 6:-1

			Vce_Select= (5,5, 5,4,5,  6,6,6,6, 6,5,5);
		}
		Case("m6"){	// 4:0 | 5:0 | 6:0

			Switch(Rootkey){
				Case(0){  FT= "x31 210"		RH=(5,5,1) }
				Case(5){  FT= "1x0 111"		RH=(6,6,1) }
				Case(9){  FT= "x02 212"		RH=(5,5,1) }
				Case(11){ FT= "x20 102"		RH=(5,5,1) }
			} //sw
		}
		Case("m69"){	// 4:-2 | 5:-2 | 6:-1

			Vce_Select= (5,5, 5,5,4,  6,6,6,6, 6,6,5);

			Switch(Rootkey){
				Case(6){  FT= "201 12x"		RH=(6,6,1) }
			} //sw
		}
		Case("mM7"){}	// 4:0 | 5:0 | 6:0
		Case("mM79"){	// 4:-2 | 5:-2 | 6:0

			Vce_Select= (5,5, 5,5,4,  6,6,6,6, 6,6,5);
		}
		Case("mM7p5"){	// 4:3 | 5:3 | 6:0

			Vce_Select= (5,5, 5,5,6,  4,6,6,6, 6,6,6);

			Switch(Rootkey){
				Case(0){  FT= "x32 100"		RH=(5,5,1) }
				Case(4){  FT= "031 010"		RH=(6,6,1) }
			} //sw
		}

// #5,b5
		Case("aug"){	// 4:-2 | 5:-2 | 6:0

			Vce_Select= (5,5, 5,5,4,  6,6,6,6, 6,6,5);

			Switch(Rootkey){
				Case(2){  FT= "xx0 332"		RH=(4,4,1)}
				Case(8){  Rootkey= 4; Vce="4";	RH=(4,4,1)}
				Case(9){  Rootkey= 5; Vce="4";	RH=(4,4,1)}
				Case(10){ Rootkey= 6; Vce="4";	RH=(4,4,1)}
			} //sw
		}
		Case("aug7"){}	// 4:0 | 5:0 | 6:0
		Case("m7p5"){}	// 4:0 | 5:0 | 6:0
		Case("M7p5"){	// 4:3 | 5:3 | 6:0

			Vce_Select= (5,5, 5,5,6,  4,6,6,6, 6,6,6);

			Switch(Rootkey){
				Case(4){  FT= "0x1 110"		RH=(6,6,1) }
			} //sw
		}
		Case("dim"){}	// 4:0 | 5:0 | 6:0
		Case("dim7"){	// 4:0 | 5:-1 | 6:-1

			Vce_Select= (5,5, 4,5,5,  6,6,6,6, 6,5,5);

			Switch(Rootkey){
				Case(4){  Rootkey= 10 } //Bb�Ɠ���
			} //sw
		}
		Case("7b5"){	// 4:0 | 5:0 | 6:-1

			Vce_Select= (5,5, 4,5,5,  6,6,6,6, 5,5,5);
		}
		Case("m7b5"){	// 4:0 | 5:-1 | 6:-1

			Vce_Select= (5,5, 4,5,5,  6,6,6,6, 6,5,5);

			Switch(Rootkey){
				Case(10){ FT= "x12 120"		RH=(5,5,1) }
				Case(11){ FT= "x20 231"		RH=(5,5,1) }
			} //sw
		}

// pwr
		Case("pwr2"){}	// 4:0 | 5:0 | 6:0
		Case("pwr3"){}	// 4:0 | 5:0 | 6:0
		Default{ Gt2_err({"���[�|�W�V�����ɂȂ��R�[�h Chdname"},Chdname) }
	} //sw


		If(RH(0)!=0){ Root_gbl= RH(0)  } // Global
		Else{ Vce= Vce_Select(Rootkey) }
	} //if


	Array Keynote;
	If(Vce!=""){
		RH= Root_hosei(Vce)


	Switch(RH(0)){
		Case(4){ // D Form : Root 4string

			Root_gbl= 4 // Global
			Keynote=(10, 11,0,1,2, 3,4,5,6,7,8,9); // 4D

			Switch(Chdname){
				Case("Maj"){	FT= "x00 232"	}
				Case("M7"){	FT= "x00 222"	}
				Case("M79"){	FT= "xx0 -120"	}
				Case("M7p11"){	FT= "xx0 -1-3-3" }
				Case("M713"){	FT= "xx0 -10-3"	}
				Case("M913"){	FT= "xx0 420"	} // kitsui

				Case("min"){	FT= "x00 231"	}
				Case("m7"){	FT= "x00 211"	}
				Case("m79"){	FT= "xx0 -210"	} // kitsui
				Case("m711"){	FT= "xx0 011"	}

				Case("add9"){	FT= "xx0 -1-20"	}
				Case("madd9"){	FT= "xx0 -2-20"	}
				Case("add9sus4"){ FT= "x00 253"	}

				Case("sus2"){	FT= "x00 230"	}
				Case("sus4"){	FT= "x00 233"	}
				Case("7sus4"){	FT= "x00 213"	}
				Case("9sus4"){	FT= "x00 010"	}
				Case("13sus4"){	FT= "xx0 413"	} // kitsui

				Case("7th"){	FT= "x00 212"	}
				Case("79"){	FT= "xx0 -110"	}
				Case("7p9"){	FT= "xx0 -111"	}
				Case("7p11"){	FT= "x00 112"	}
				Case("7b13"){	FT= "xx0 312"	}
				Case("713"){	FT= "xx0 412"	} // kitsui
				Case("b9p11"){	FT= "xx0 11-1"	}

				Case("6th"){	FT= "x00 202"	}
				Case("69"){	FT= "xx0 -100"	}
				Case("m6"){	FT= "x00 201"	}
				Case("m69"){	FT= "xx0 -200"	}
				Case("mM7"){	FT= "xx0 221"	}
				Case("mM79"){	FT= "xx0 -220"	}
				Case("mM7p5"){	FT= "xx0 -2-1-3" }

				Case("aug"){	FT= "xx0 -1-1-2" }
				Case("aug7"){	FT= "xx0 312"	}
				Case("m7p5"){	FT= "xx0 311"	}
				Case("M7p5"){ 	FT= "xx0 -1-1-3" }
				Case("dim"){	FT= "xx0 131"	}
				Case("dim7"){	FT= "xx0 101"	}
				Case("7b5"){	FT= "xx0 112"	}
				Case("m7b5"){	FT= "xx0 111"	}

				Case("pwr2"){	FT= "xx0 2xx"	}
				Case("pwr3"){	FT= "xx0 23x"	}
				Default{ Gt2_err({"4D�ɂȂ��R�[�h Chdname"},Chdname) }
			} //sw
		}
		Case(5){ // B Form : Root 5string

			Root_gbl= 5 // Global
			Keynote=(3, 4,5,6,7, 8,9,10,11,0,1,2); // 5A

			Switch(Chdname){
				Case("Maj"){	FT= "002 220"	}
				Case("M7"){	FT= "002 120"	}
				Case("M79"){	FT= "x0-1 100"	} // kitsui
				Case("M7p11"){	FT= "x01 12x"	}
				Case("M713"){	FT= "x0x 122"	}
				Case("M913"){	FT= "x0-3 -1-3-3" }

				Case("min"){	FT= "002 210"	}
				Case("m7"){	FT= "002 010"	}
				Case("m79"){	FT= "x0-2 000"	}
				Case("m711"){	FT= "x0-2 0-2-2" }

				Case("add9"){	FT= "x0-1 x00"	}
				Case("madd9"){	FT= "x0-2 -300"	}
				Case("add9sus4"){ FT= "002 430"	}

				Case("sus2"){	FT= "002 200"	}
				Case("sus4"){	FT= "002 230"	}
				Case("7sus4"){	FT= "002 030"	}
				Case("9sus4"){	FT= "000 000"	}
				Case("13sus4"){	FT= "002 032"	}

				Case("7th"){	FT= "002 020"	}
				Case("79"){	FT= "x0-1 000"	}
				Case("7p9"){	FT= "x0-1 01x"	}
				Case("7p11"){	FT= "x0x 02-1"	}
				Case("7b13"){	FT= "002 021"	}
				Case("713"){	FT= "002 022"	}
				Case("b9p11"){	FT= "x01 0-1-1"	}

				Case("6th"){	FT= "x02 22x"	}
				Case("69"){	FT= "x0-1 -100"	}
				Case("m6"){	FT= "x02 x12"	}
				Case("m69"){	FT= "x0-2 -10x"	}
				Case("mM7"){	FT= "002 110"	}
				Case("mM79"){	FT= "x0-2 10x"	}
				Case("mM7p5"){	FT= "x0-2 -2-3x" }

				Case("aug"){	FT= "x0-1 -2-2x" }
				Case("aug7"){	FT= "x03 021"	}
				Case("m7p5"){	FT= "x0x 011"	}
				Case("M7p5"){	FT= "x0-1 -2-3-3" }
				Case("dim"){	FT= "x01 21x"	}
				Case("dim7"){	FT= "x01 -11x"	}
				Case("7b5"){	FT= "x01 02x"	}
				Case("m7b5"){	FT= "x01 01x"	}

				Case("pwr2"){	FT= "x02 xxx"	}
				Case("pwr3"){	FT= "x02 2xx"	}
				Default{ Gt2_err({"5A�ɂȂ��R�[�h Chdname"},Chdname) }
			} //sw
		}
		Case(6){ // F Form : Root 6string

			Root_gbl= 6 // Global
			Keynote=(8, 9,10,11,0, 1,2,3,4,5,6,7); // 6E

			Switch(Chdname){
				Case("Maj"){	FT= "022 100"	}
				Case("M7"){	FT= "021 100"	}
				Case("M79"){	FT= "0x1 102"	}
				Case("M7p11"){	FT= "0x1 1-1x"	}
				Case("M713"){	FT= "0x1 12x" 	}
				Case("M913"){	FT= "0x1 -1-3-3" } // kitsui

				Case("min"){	FT= "022 000"	}
				Case("m7"){	FT= "020 000"	}
				Case("m79"){	FT= "020 002"	}
				Case("m711"){	FT= "000 000"	}

				Case("add9"){	FT= "022 102"	} // kitsui
				Case("madd9"){	FT= "022 002"	}
				Case("add9sus4"){ FT= "024 200"	}

				Case("sus2"){	FT= "0x2 -10x"	}
				Case("sus4"){	FT= "022 200"	}
				Case("7sus4"){	FT= "020 200"	}
				Case("9sus4"){	FT= "0x0 -1-2x"	}
				Case("13sus4"){	FT= "020 220"	}

				Case("7th"){	FT= "020 100"	}
				Case("79"){	FT= "020 102"	}
				Case("7p9"){	FT= "0-10 00x"	}
				Case("7p11"){	FT= "0x0 1-1x"	}
				Case("7b13"){	FT= "0x0 11x"	}
				Case("713"){	FT= "020 120"	}
				Case("b9p11"){	FT= "010 -2xx"	}

				Case("6th"){	FT= "0x-1 10x"	}
				Case("69"){	FT= "0-1-1 -100" }
				Case("m6"){	FT= "022 020"	}
				Case("m69"){	FT= "0x-1 002"	}
				Case("mM7"){	FT= "021 000"	}
				Case("mM79"){	FT= "021 002"	}
				Case("mM7p5"){	FT= "0x1 01x"	}

				Case("aug"){	FT= "0x2 110"	}
				Case("aug7"){	FT= "0x0 110"	}
				Case("m7p5"){	FT= "030 010"	}
				Case("M7p5"){	FT= "0x1 11x"	}
				Case("dim"){	FT= "0x2 0-1x"	}
				Case("dim7"){	FT= "0x-1 0-1x"	}
				Case("7b5"){	FT= "0x0 1-1x"	}
				Case("m7b5"){	FT= "0x0 0-1x"	}

				Case("pwr2"){	FT= "02x xxx"	}
				Case("pwr3"){	FT= "022 xxx"	}
				Default{ Gt2_err({"6E�ɂȂ��R�[�h Chdname"},Chdname) }
			} //sw
		}
	} // sw

		Barre= Keynote(Rootkey);
	} //if

	Array RR= (Barre,FT,RH)
	Result= RR;
} //func


 
Function Pi_errlist(Int NN,Str XX,Str ZZ){ 

	Int j= -1
	Str TT;
	Array Key_list=("C","Db","D","Eb","E", "F","Fp","G","Gp","A","Bb","B")

	Switch(XX){
		Case("7b9"){	j= 1  } //������
		Case("m911"){	j= 10 } //��2�x��
		Case("m7b511"){	j= 3  } //�Z�O�x��
	} //sw

	If(j==-1){
		TT= Key_list(NN)+ XX+ {"�́A���݂��Ȃ��R�[�h�ł�"}
	}
	Else{
		TT= Key_list((NN+ j)%12 )+ ZZ
		TT= Key_list(NN)+ XX+ {"�́A�㗝�R�[�h "}+ TT+ {"���g�p���ĉ�����"}
	}

	Gt2_err(TT)
} //func


 
Function Pi_chd_go(Int Rootkey, Str Chdname){ // Mode_sw,MML_out �R�����g�A�E�g 


	Array RR;
	Switch(Chdname){
Case("Maj"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ceg>ce<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+>d-fg+<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>da>df+<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->e-gb-<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>eg+b>e<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>cfa>cf<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-f+b->d-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'gb>dgb>g<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-g+>ce-g+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>ea>d-e<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->fb->df<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>f+b>e-f+<<'})}
}//sw
}
Case("M7"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cegb>e<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+>cfg+<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>da>d-f+<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->dgb-<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>e-g+b>e<<'})}
Case(5){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>fa>ce<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-fb->d-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'gb>dgb>f+<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-g>ce-g+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>eg+>d-e<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->fa>df<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>f+b->e-f+<<'})}
}//sw
}
Case("M79"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ceb>dg<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-f>ce-g+<<'})}
Case(2){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>df+>d-ea<<'})}
Case(3){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>e-g>df<<'})}
Case(4){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'e>e-g+b>f+<<'})}
Case(5){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'f>ea>cg<<'})}
Case(6){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'f+>fb->d-g+<<'})}
Case(7){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'g>f+b>da<<'})}
Case(8){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'g+>g>ce-b-<<'})}
Case(9){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'a>g+>d-eb<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->da>cf<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>e-b->d-f+<<'})}
}//sw
}
Case("M7p11"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cegb>f+<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>d-g>cf<<'})}
Case(2){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>dg+>d-f+<<'})}
Case(3){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>e-a>dg<<'})}
Case(4){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>eb->e-g+<<'})}
Case(5){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>fab>e<<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>fb->c<<'})}
Case(7){RR=(4,{v__9.N(0,-9,-10,-13)},{'g>f+b>d-<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>g>cd<<'})}
Case(9){RR=(4,{v__9.N(-6,-9,-10,-13)},{'a>e-g+>d-<<'})}
Case(10){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b->ea>d<<'})}
Case(11){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b>fb->e-<<'})}
}//sw
}
Case("M713"){
Switch(Rootkey){
Case(0){RR=(4,{v__9.N(-6,-10,-13,-19)},{'>cb>ea<<'})}
Case(1){RR=(4,{v__9.N(-6,-10,-13,-19)},{'>d->cfb-<<'})}
Case(2){RR=(4,{v__9.N(-6,-10,-13,-19)},{'>d>d-f+b<<'})}
Case(3){RR=(4,{v__9.N(-6,-10,-13,-19)},{'>e->dg>c<<<'})}
Case(4){RR=(4,{v__9.N(0,-9,-10,-13)},{'e>e-g+>d-<<'})}
Case(5){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>fa>de<<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>fb->e-<<'})}
Case(7){RR=(4,{v__9.N(0,-9,-10,-13)},{'g>f+b>e<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>g>cf<<'})}
Case(9){RR=(4,{v__9.N(-6,-10,-13,-19)},{'a>g+>d-f+<<'})}
Case(10){RR=(4,{v__9.N(-6,-10,-13,-19)},{'b->a>dg<<'})}
Case(11){RR=(4,{v__9.N(-6,-10,-13,-19)},{'b>b->e-g+<<'})}
}//sw
}
Case("M913"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cdab>e<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-e-b->cf<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>db>d-e<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-f>cdg<<'})}
Case(4){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ef+>d-e-g+<<'})}
Case(5){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>fg>dea<<'})}
Case(6){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>f+g+>e-fb-<<'})}
Case(7){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'g>f+ab>e<<'})}
Case(8){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'g+>gb->cf<<'})}
Case(9){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'a>g+b>d-f+<<'})}
Case(10){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'b->a>cdg<<'})}
Case(11){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'b>b->d-e-g+<<'})}
}//sw
}
Case("min"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cg>ce-g<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+>d-eg+<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>da>df<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->e-f+b-<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>egb>e<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>cfg+>cf<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-f+a>d-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>dgb->dg<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-g+b>e-g+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>ea>ce<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->fb->d-f<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>f+b>df+<<'})}
}//sw
}
Case("m7"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6, -9, -10, -13, -19)},{'>cgb->e-g<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+b>eg+<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>da>cf<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->d-f+b-<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>eg>de<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>ce-g+>cf<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-ea>d-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>dfb->dg<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-f+b>e-g+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>eg>ce<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->fg+>d-f<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>f+a>df+<<'})}
}//sw
}
Case("m79"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ce-b->dg<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-eb>e-g+<<'})}
Case(2){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>df>cea<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-f+>d-fb-<<'})}
Case(4){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>eg>df+<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>ce-g+>cg<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+a>eg+>d-e<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>dfb->da<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-f+b>e-b-<<'})}
Case(9){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'a>eg>ceb<<'})}
Case(10){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'b->fg+>d-f>c<<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>da>d-f+<<'})}
}//sw
}
Case("m711"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ce-b->cf<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-eb>d-f+<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>dg>cf<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-f+>d-e-g+<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'ea>dgb>e<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'fb->e-g+>cf<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+a>eab>e<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>cfb->dg<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>d-f+b>e-g+<<'})}
Case(9){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'a>dg>cea<<'})}
Case(10){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'b->e-g+>d-fb-<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>dab>e<<'})}
}//sw
}
Case("add9"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ceg>de<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-13,-19)},{'>d-f>e-g+<<'})}
Case(2){RR=(4,{v__9.N(-6,-9,-13,-19)},{'>df+>ea<<'})}
Case(3){RR=(4,{v__9.N(-6,-9,-13,-19)},{'>e-g>fb-<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>eg+b>f+<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>cfa>cg<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-f+b->d-g+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'gb>dgb>a<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-g+>ce-b-<<'})}
Case(9){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'a>ea>d-eb<<'})}
Case(10){RR=(4,{v__9.N(-6,-9,-13,-19)},{'b->d>cf<<'})}
Case(11){RR=(4,{v__9.N(-6,-9,-13,-19)},{'b>e->d-f+<<'})}
}//sw
}
Case("madd9"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ce-g>dg<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-eg+>e-g+<<'})}
Case(2){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>dfa>ea<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-f+b->fb-<<'})}
Case(4){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>egb>f+<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>cfg+>cg<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-f+a>d-g+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>dgb->da<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-g+b>e-b-<<'})}
Case(9){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'a>ea>ceb<<'})}
Case(10){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'b->fb->d-f>c<<<'})}
Case(11){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'b>f+b>df+>d-<<<'})}
}//sw
}
Case("add9sus4"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cg>dfg<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+>e-f+g+<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>da>eg<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->fg+b-<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>f+ab>e<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>cgb->cf<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-g+b>d-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>da>cdg<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-b->d-e-g+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>eb>de<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->f>ce-f<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>f+>d-ef+<<'})}
}//sw
}
Case("sus2"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cdg>dg<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+>d-e-g+<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>da>de<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->e-fb-<<'})}
Case(4){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>eb>ef+b<<'})}
Case(5){RR=(4,{v__9.N(0,-9,-10,-13)},{'f>fg>c<<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>f+g+>d-<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'ga>da>dg<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>g+b->e-<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>eab>e<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->fb->cf<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>f+b>d-f+<<'})}
}//sw
}
Case("sus4"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cfg>cf<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+>d-f+g+<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>da>dg<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->e-g+b-<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>eab>e<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>cfb->cf<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-f+b>d-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>cdg>cg<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-g+>d-e-g+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>ea>de<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->fb->e-f<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>f+b>ef+<<'})}
}//sw
}
Case("7sus4"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cgb->fg<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+b>f+g+<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>da>cg<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->d-g+b-<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>dab>e<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>ce-b->cf<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-eb>d-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>df>cdg<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-f+>d-e-g+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>eg>de<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->fg+>e-f<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>f+a>ef+<<'})}
}//sw
}
Case("9sus4"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cfb->dg<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-f+b>e-g+<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>dg>ce<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-g+>d-fb-<<'})}
Case(4){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ea>df+b<<'})}
Case(5){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>fb->e-g>c<<<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>eg+b<'})}
Case(7){RR=(4,{v__9.N(0,-9,-10,-13)},{'g>fa>c<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>f+b->d-<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>dgb>e<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->e-g+>cf<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>ea>d-f+<<'})}
}//sw
}
Case("13sus4"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cgb->fa<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+b>f+b-<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>db>cg<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->d-g+>c<<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>da>d-e<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>ce-b->df<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-eb>e-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>df>ceg<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-f+>d-fg+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>eg>df+<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->fg+>e-g<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>f+a>eg+<<'})}
}//sw
}
Case("7th"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ceb->ce<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+b>fg+<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>da>cf+<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->d-gb-<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>dg+>de<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>ce-a>cf<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-eb->d-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'gb>dgb>f<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-f+>ce-g+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>eg>d-e<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->fg+>df<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>e-ab>f+<<'})}
}//sw
}
Case("79"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ceb->dg<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-fb>e-g+<<'})}
Case(2){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>df+>cea<<'})}
Case(3){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>e-g>d-f<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>dg+b>f+<<'})}
Case(5){RR=(5,{v__9.N(0,-6,-9,-10,-13)},{'fa>e-g>c<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-eb->d-g+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>dfb>da<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-f+>ce-b-<<'})}
Case(9){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'a>eg>d-eb<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->dg+>cf<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>e-a>d-f+<<'})}
}//sw
}
Case("7p9"){
Switch(Rootkey){
Case(0){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>ceb->e-<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>d-fb>e<<'})}
Case(2){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>df+>cf<<'})}
Case(3){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>e-g>d-f+<<'})}
Case(4){RR=(5,{v__9.N(0,-6,-10,-13,-19)},{'eb>g+>dg<<'})}
Case(5){RR=(5,{v__9.N(0,-6,-9,-10,-13)},{'fa>e-g+>c<<'})}
Case(6){RR=(5,{v__9.N(0,-6,-9,-10,-13)},{'f+b->ea>d-<<'})}
Case(7){RR=(5,{v__9.N(0,-6,-9,-10,-13)},{'gb>fb->d<<'})}
Case(8){RR=(5,{v__9.N(0,-6,-9,-10,-13)},{'g+>cf+b>e-<<'})}
Case(9){RR=(5,{v__9.N(0,-6,-9,-10,-13)},{'a>d-g>ce<<'})}
Case(10){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b->dg+>d-<<'})}
Case(11){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b>e-a>d<<'})}
}//sw
}
Case("7p11"){
Switch(Rootkey){
Case(0){RR=(4,{v__9.N(-6,-10,-13,-19)},{'>cb->ef+<<'})}
Case(1){RR=(4,{v__9.N(-6,-10,-13,-19)},{'>d-b>fg<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>dg+>cf+<<'})}
Case(3){RR=(4,{v__9.N(-6,-10,-13,-19)},{'>e->d-ga<<'})}
Case(4){RR=(4,{v__9.N(-6,-10,-13,-19)},{'>e>dg+b-<<'})}
Case(5){RR=(4,{v__9.N(0,-9,-10,-13)},{'f>e-ab<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>eb->c<<'})}
Case(7){RR=(4,{v__9.N(0,-9,-10,-13)},{'g>fb>d-<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>f+>cd<<'})}
Case(9){RR=(4,{v__9.N(0,-9,-10,-13)},{'a>g>d-e-<<'})}
Case(10){RR=(4,{v__9.N(-6,-10,-13,-19)},{'b->g+>de<<'})}
Case(11){RR=(4,{v__9.N(-6,-10,-13,-19)},{'b>a>e-f<<'})}
}//sw
}
Case("7b13"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cgb->eg+<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+b>fa<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>db->cf+<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->d-gb<<'})}
Case(4){RR=(4,{v__9.N(0,-9,-10,-13)},{'e>dg+>c<<'})}
Case(5){RR=(4,{v__9.N(0,-9,-10,-13)},{'f>e-a>d-<<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>eb->d<<'})}
Case(7){RR=(4,{v__9.N(0,-9,-10,-13)},{'g>fb>e-<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>f+>ce<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>eg>d-f<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->fg+>df+<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>f+a>e-g<<'})}
}//sw
}
Case("713"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cgb->ea<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+b>fb-<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>db>cf+<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->d-g>c<<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>dg+>d-e<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>ce-a>df<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-eb->e-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>dfb>eg<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-f+>cfg+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>eg>d-f+<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->fg+>dg<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>f+a>e-g+<<'})}
}//sw
}
Case("b9p11"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cf+b->d-f+<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-gb>dg<<'})}
Case(2){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>dg+>ce-g+<<'})}
Case(3){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>e-a>d-e<<'})}
Case(4){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>eb->dfb-<<'})}
Case(5){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>fb>e-f+b<<'})}
Case(6){RR=(4,{v__9.N(0,-6,-9,-10)},{'f+>ceg<'})}
Case(7){RR=(4,{v__9.N(0,-6,-9,-10)},{'g>d-fg+<'})}
Case(8){RR=(4,{v__9.N(0,-6,-9,-10)},{'g+>df+a<'})}
Case(9){RR=(4,{v__9.N(0,-6,-9,-10)},{'a>e-gb-<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->eg+b>e<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>fa>cf<<'})}
}//sw
}
Case("6th"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cea>ce<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>d-g+>d-f<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>dab>f+<<'})}
Case(3){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>e-b->e-g<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>eg+>d-e<<'})}
Case(5){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>fa>df<<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>e-b->d-<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'gb>egb>e<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>f>ce-<<'})}
Case(9){RR=(4,{v__9.N(-6,-9,-10,-13)},{'a>ea>d-<<'})}
Case(10){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b->fb->d<<'})}
Case(11){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b>f+b>e-<<'})}
}//sw
}
Case("69"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cea>dg<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-fb->e-g+<<'})}
Case(2){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>df+b>ea<<'})}
Case(3){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>e-g>cf<<'})}
Case(4){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>eg+>d-f+b<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'fa>dg>cf<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+b->e-g+>d-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'gb>ea>dg<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>cfb->e-g+<<'})}
Case(9){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'a>d-f+b>ea<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->dg>cf<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>e-g+>d-f+<<'})}
}//sw
}
Case("m6"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ce-a>ce<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-13,-19)},{'>d-g+>eb-<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>dab>f<<'})}
Case(3){RR=(4,{v__9.N(-6,-9,-13,-19)},{'>e-b->f+>c<<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>eg>d-e<<'})}
Case(5){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'f>dg+>cf<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-f+a>e-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>dgb->eg<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-g+b>fg+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>ea>cf+<<'})}
Case(10){RR=(4,{v__9.N(-6,-9,-13,-19)},{'b->f>d-g<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>dg+b>f+<<'})}
}//sw
}
Case("m69"){
Switch(Rootkey){
Case(0){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>ce-a>d<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>d-eb->e-<<'})}
Case(2){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>dfb>e<<'})}
Case(3){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>e-f+>cf<<'})}
Case(4){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>eg>d-f+<<'})}
Case(5){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'f>dg+>cg<<'})}
Case(6){RR=(5,{v__9.N(0,-6,-9,-10,-13)},{'f+a>e-g+>d-<<'})}
Case(7){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'g>eb->da<<'})}
Case(8){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'g+>fb>e-b-<<'})}
Case(9){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'a>f+>ceb<<'})}
Case(10){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'b->g>d-f>c<<<'})}
Case(11){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b>dg+>d-<<'})}
}//sw
}
Case("mM7"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cgb>e-g<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-g+>ceg+<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>da>d-f<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b->df+b-<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'eb>e-gb>e<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>ceg+>cf<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-fa>d-f+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>df+b->dg<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-gb>e-g+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>eg+>ce<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->fa>d-f<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>f+b->df+<<'})}
}//sw
}
Case("mM79"){
Switch(Rootkey){
Case(0){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>ce-b>d<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>d-e>ce-<<'})}
Case(2){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>df>d-e<<'})}
Case(3){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>e-f+>df<<'})}
Case(4){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>eg>e-f+<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>ceg+>cg<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>d-fa>d-g+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>df+b->da<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>e-gb>e-b-<<'})}
Case(9){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'a>eg+>ceb<<'})}
Case(10){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'b->fa>d-f>c<<<'})}
Case(11){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b>db->d-<<'})}
}//sw
}
Case("mM7p5"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ceg+b>e<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>d-ea>c<<'})}
Case(2){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>dfb->d-<<'})}
Case(3){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>e-f+b>d<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'e>ce-g>ce<<'})}
Case(5){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>fg+>d-e<<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>fa>d<<'})}
Case(7){RR=(4,{v__9.N(0,-9,-10,-13)},{'g>f+b->e-<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>gb>e<<'})}
Case(9){RR=(4,{v__9.N(0,-9,-10,-13)},{'a>g+>cf<<'})}
Case(10){RR=(4,{v__9.N(0,-9,-10,-13)},{'b->a>d-f+<<'})}
Case(11){RR=(4,{v__9.N(0,-9,-10,-13)},{'b>b->dg<<'})}
}//sw
}
Case("aug"){
Switch(Rootkey){
Case(0){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>ceg+>c<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>d-fa>d-<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>db->df+<<'})}
Case(3){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>e-gb>e-<<'})}
Case(4){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>eg+>ce<<'})}
Case(5){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'f>fa>d-f<<'})}
Case(6){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'f+>f+b->df+<<'})}
Case(7){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'g>gb>e-g<<'})}
Case(8){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>eg+>ce<<'})}
Case(9){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>fa>d-f<<'})}
Case(10){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>f+b->df+<<'})}
Case(11){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b>e-gb<'})}
}//sw
}
Case("aug7"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>cg+b->eg+<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-ab>fa<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>db->cf+<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-b>d-gb<<'})}
Case(4){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'e>dg+>ce<<'})}
Case(5){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'f>e-a>d-f<<'})}
Case(6){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'f+>eb->df+<<'})}
Case(7){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'g>fb>e-g<<'})}
Case(8){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'g+>f+>ceg+<<'})}
Case(9){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'a>fg>d-f<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->f+g+>df+<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>ga>e-g<<'})}
}//sw
}
Case("m7p5"){
Switch(Rootkey){
Case(0){RR=(4,{v__9.N(-6,-10,-13,-19)},{'>cb->e-g+<<'})}
Case(1){RR=(4,{v__9.N(-6,-10,-13,-19)},{'>d-b>ea<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>db->cf<<'})}
Case(3){RR=(4,{v__9.N(-6,-10,-13,-19)},{'>e->d-f+b<<'})}
Case(4){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'e>cdg>ce<<'})}
Case(5){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f>d-e-g+>d-f<<'})}
Case(6){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'f+>dea>df+<<'})}
Case(7){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g>e-fb->e-g<<'})}
Case(8){RR=(6,{v__9.N(0,-6,-9,-10,-13,-19)},{'g+>ef+b>eg+<<'})}
Case(9){RR=(4,{v__9.N(-6,-10,-13,-19)},{'a>g>cf<<'})}
Case(10){RR=(4,{v__9.N(-6,-10,-13,-19)},{'b->g+>d-f+<<'})}
Case(11){RR=(4,{v__9.N(-6,-10,-13,-19)},{'b>a>dg<<'})}
}//sw
}
Case("M7p5"){
Switch(Rootkey){
Case(0){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>ceg+b>e<<'})}
Case(1){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>d-fa>cf<<'})}
Case(2){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>df+b->d-f+<<'})}
Case(3){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'>e-gb>dg<<'})}
Case(4){RR=(5,{v__9.N(0,-9,-10,-13,-19)},{'e>e-g+>ce<<'})}
Case(5){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>fa>d-e<<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>fb->d<<'})}
Case(7){RR=(4,{v__9.N(0,-9,-10,-13)},{'g>f+b>e-<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>g>ce<<'})}
Case(9){RR=(4,{v__9.N(0,-9,-10,-13)},{'a>g+>d-f<<'})}
Case(10){RR=(4,{v__9.N(0,-9,-10,-13)},{'b->a>df+<<'})}
Case(11){RR=(4,{v__9.N(0,-9,-10,-13)},{'b>b->e-g<<'})}
}//sw
}
Case("dim"){
Switch(Rootkey){
Case(0){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>cf+>ce-<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>d-g>d-e<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>dg+>df<<'})}
Case(3){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>e-a>e-f+<<'})}
Case(4){RR=(4,{v__9.N(0,-9,-10,-13)},{'>e>egb-<<'})}
Case(5){RR=(4,{v__9.N(0,-9,-10,-13)},{'f>fg+b<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>f+a>c<<'})}
Case(7){RR=(4,{v__9.N(0,-9,-10,-13)},{'g>gb->d-<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>g+b>d<<'})}
Case(9){RR=(4,{v__9.N(-6,-9,-10,-13)},{'a>e-a>c<<'})}
Case(10){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b->eb->d-<<'})}
Case(11){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b>fb>d<<'})}
}//sw
}
Case("dim7"){
Switch(Rootkey){
Case(0){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>cf+a>e-<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>d-gb->e<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>dg+b>f<<'})}
Case(3){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>e-a>cf+<<'})}
Case(4){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b->eg>d-<<'})}
Case(5){RR=(4,{v__9.N(0,-9,-10,-13)},{'f>dg+b<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>e-a>c<<'})}
Case(7){RR=(4,{v__9.N(0,-9,-10,-13)},{'g>eb->d-<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>fb>d<<'})}
Case(9){RR=(4,{v__9.N(0,-9,-10,-13)},{'a>f+>ce-<<'})}
Case(10){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b->eg>d-<<'})}
Case(11){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b>fg+>d<<'})}
}//sw
}
Case("7b5"){
Switch(Rootkey){
Case(0){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>cf+b->e<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>d-gb>f<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>dg+>cf+<<'})}
Case(3){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>e-a>d-g<<'})}
Case(4){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>eb->dg+<<'})}
Case(5){RR=(4,{v__9.N(0,-9,-10,-13)},{'f>e-ab<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>eb->c<<'})}
Case(7){RR=(4,{v__9.N(0,-9,-10,-13)},{'g>fb>d-<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>f+>cd<<'})}
Case(9){RR=(4,{v__9.N(-6,-9,-10,-13)},{'a>e-g>d-<<'})}
Case(10){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b->eg+>d<<'})}
Case(11){RR=(4,{v__9.N(-6,-9,-10,-13)},{'b>fa>e-<<'})}
}//sw
}
Case("m7b5"){
Switch(Rootkey){
Case(0){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>cf+b->e-<<'})}
Case(1){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>d-gb>e<<'})}
Case(2){RR=(4,{v__9.N(-9,-10,-13,-19)},{'>dg+>cf<<'})}
Case(3){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>e-a>d-f+<<'})}
Case(4){RR=(4,{v__9.N(-6,-9,-10,-13)},{'>eb->dg<<'})}
Case(5){RR=(4,{v__9.N(0,-9,-10,-13)},{'f>e-g+b<'})}
Case(6){RR=(4,{v__9.N(0,-9,-10,-13)},{'f+>ea>c<<'})}
Case(7){RR=(4,{v__9.N(0,-9,-10,-13)},{'g>fb->d-<<'})}
Case(8){RR=(4,{v__9.N(0,-9,-10,-13)},{'g+>f+b>d<<'})}
Case(9){RR=(4,{v__9.N(0,-9,-10,-13)},{'a>g>ce-<<'})}
Case(10){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b->eg+>d-e<<'})}
Case(11){RR=(5,{v__9.N(-6,-9,-10,-13,-19)},{'b>da>df<<'})}
}//sw
}
Case("pwr2"){
Switch(Rootkey){
Case(0){RR=(2,{v__9.N(-6,-9)},{'>cg<'})}
Case(1){RR=(2,{v__9.N(-6,-9)},{'>d-g+<'})}
Case(2){RR=(2,{v__9.N(-9,-10)},{'>da<'})}
Case(3){RR=(2,{v__9.N(-6,-9)},{'>e-b-<'})}
Case(4){RR=(2,{v__9.N(0,-6)},{'eb'})}
Case(5){RR=(2,{v__9.N(0,-6)},{'f>c<'})}
Case(6){RR=(2,{v__9.N(0,-6)},{'f+>d-<'})}
Case(7){RR=(2,{v__9.N(0,-6)},{'g>d<'})}
Case(8){RR=(2,{v__9.N(0,-6)},{'g+>e-<'})}
Case(9){RR=(2,{v__9.N(-6,-9)},{'a>e<'})}
Case(10){RR=(2,{v__9.N(-6,-9)},{'b->f<'})}
Case(11){RR=(2,{v__9.N(-6,-9)},{'b>f+<'})}
}//sw
}
Case("pwr3"){
Switch(Rootkey){
Case(0){RR=(3,{v__9.N(-6,-9,-10)},{'>cg>c<<'})}
Case(1){RR=(3,{v__9.N(-6,-9,-10)},{'>d-g+>d-<<'})}
Case(2){RR=(3,{v__9.N(-9,-10,-13)},{'>da>d<<'})}
Case(3){RR=(3,{v__9.N(-6,-9,-10)},{'>e-b->e-<<'})}
Case(4){RR=(3,{v__9.N(0,-6,-9)},{'eb>e<'})}
Case(5){RR=(3,{v__9.N(0,-6,-9)},{'f>cf<'})}
Case(6){RR=(3,{v__9.N(0,-6,-9)},{'f+>d-f+<'})}
Case(7){RR=(3,{v__9.N(0,-6,-9)},{'g>dg<'})}
Case(8){RR=(3,{v__9.N(0,-6,-9)},{'g+>e-g+<'})}
Case(9){RR=(3,{v__9.N(-6,-9,-10)},{'a>ea<'})}
Case(10){RR=(3,{v__9.N(-6,-9,-10)},{'b->fb-<'})}
Case(11){RR=(3,{v__9.N(-6,-9,-10)},{'b>f+b<'})}
}//sw
}
	} //sw

	Result= RR;
} //func

 
Function Pi_chd_ha(Int Rootkey, Str Chdname){ // Mode_sw,MML_out �R�����g�A�E�g 


	Array RR;
	Switch(Chdname){
Case("Maj"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`g},{``c},{``e})}
Case(1){RR=({x},{`d-},{`g+},{``d-},{``f},{``g+})}
Case(2){RR=({x},{x},{`d},{`a},{``d},{``f+})}
Case(3){RR=({x},{`e-},{`b-},{``e-},{``g},{``b-})}
Case(4){RR=({e},{b},{`e},{`g+},{`b},{``e})}
Case(5){RR=({f},{`c},{`f},{`a},{``c},{``f})}
Case(6){RR=({f+},{`d-},{`f+},{`b-},{``d-},{``f+})}
Case(7){RR=({g},{b},{`d},{`g},{`b},{``g})}
Case(8){RR=({g+},{`e-},{`g+},{``c},{``e-},{``g+})}
Case(9){RR=({x},{a},{`e},{`a},{``d-},{``e})}
Case(10){RR=({x},{b-},{`f},{`b-},{``d},{``f})}
Case(11){RR=({x},{b},{`f+},{`b},{``e-},{``f+})}
}//sw
}
Case("M7"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`g},{`b},{``e})}
Case(1){RR=({x},{`d-},{`g+},{``c},{``f},{``g+})}
Case(2){RR=({x},{x},{`d},{`a},{``d-},{``f+})}
Case(3){RR=({x},{`e-},{`b-},{``d},{``g},{``b-})}
Case(4){RR=({e},{b},{`e-},{`g+},{`b},{``e})}
Case(5){RR=({x},{x},{`f},{`a},{``c},{``e})}
Case(6){RR=({f+},{`d-},{`f},{`b-},{``d-},{``f+})}
Case(7){RR=({g},{b},{`d},{`g},{`b},{``f+})}
Case(8){RR=({g+},{`e-},{`g},{``c},{``e-},{``g+})}
Case(9){RR=({x},{a},{`e},{`g+},{``d-},{``e})}
Case(10){RR=({x},{b-},{`f},{`a},{``d},{``f})}
Case(11){RR=({x},{b},{`f+},{`b-},{``e-},{``f+})}
}//sw
}
Case("M79"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`b},{``d},{``g})}
Case(1){RR=({x},{`d-},{`f},{``c},{``e-},{``g+})}
Case(2){RR=({x},{`d},{`f+},{``d-},{``e},{``a})}
Case(3){RR=({x},{x},{`e-},{`g},{``d},{``f})}
Case(4){RR=({e},{x},{`e-},{`g+},{`b},{``f+})}
Case(5){RR=({f},{x},{`e},{`a},{``c},{``g})}
Case(6){RR=({f+},{x},{`f},{`b-},{``d-},{``g+})}
Case(7){RR=({g},{x},{`f+},{`b},{``d},{``a})}
Case(8){RR=({g+},{x},{`g},{``c},{``e-},{``b-})}
Case(9){RR=({a},{x},{`g+},{``d-},{``e},{``b})}
Case(10){RR=({x},{b-},{`d},{`a},{``c},{``f})}
Case(11){RR=({x},{b},{`e-},{`b-},{``d-},{``f+})}
}//sw
}
Case("M7p11"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`g},{`b},{``f+})}
Case(1){RR=({x},{`d-},{`g},{``c},{``f},{x})}
Case(2){RR=({x},{`d},{`g+},{``d-},{``f+},{x})}
Case(3){RR=({x},{`e-},{`a},{``d},{``g},{x})}
Case(4){RR=({x},{`e},{`b-},{``e-},{``g+},{x})}
Case(5){RR=({x},{x},{`f},{`a},{`b},{``e})}
Case(6){RR=({f+},{x},{`f},{`b-},{``c},{x})}
Case(7){RR=({g},{x},{`f+},{`b},{``d-},{x})}
Case(8){RR=({g+},{x},{`g},{``c},{``d},{x})}
Case(9){RR=({x},{a},{`e-},{`g+},{``d-},{x})}
Case(10){RR=({x},{b-},{`e},{`a},{``d},{x})}
Case(11){RR=({x},{b},{`f},{`b-},{``e-},{x})}
}//sw
}
Case("M713"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{x},{`b},{``e},{``a})}
Case(1){RR=({x},{`d-},{x},{``c},{``f},{``b-})}
Case(2){RR=({x},{`d},{x},{``d-},{``f+},{``b})}
Case(3){RR=({x},{`e-},{x},{``d},{``g},{```c})}
Case(4){RR=({e},{x},{`e-},{`g+},{``d-},{x})}
Case(5){RR=({x},{x},{`f},{`a},{``d},{``e})}
Case(6){RR=({f+},{x},{`f},{`b-},{``e-},{x})}
Case(7){RR=({g},{x},{`f+},{`b},{``e},{x})}
Case(8){RR=({g+},{x},{`g},{``c},{``f},{x})}
Case(9){RR=({x},{a},{x},{`g+},{``d-},{``f+})}
Case(10){RR=({x},{b-},{x},{`a},{``d},{``g})}
Case(11){RR=({x},{b},{x},{`b-},{``e-},{``g+})}
}//sw
}
Case("M913"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`d},{`a},{`b},{``e})}
Case(1){RR=({x},{`d-},{`e-},{`b-},{``c},{``f})}
Case(2){RR=({x},{x},{`d},{`b},{``d-},{``e})}
Case(3){RR=({x},{`e-},{`f},{``c},{``d},{``g})}
Case(4){RR=({x},{`e},{`f+},{``d-},{``e-},{``g+})}
Case(5){RR=({x},{`f},{`g},{``d},{``e},{``a})}
Case(6){RR=({x},{`f+},{`g+},{``e-},{``f},{``b-})}
Case(7){RR=({g},{x},{`f+},{`a},{`b},{``e})}
Case(8){RR=({g+},{x},{`g},{`b-},{``c},{``f})}
Case(9){RR=({a},{x},{`g+},{`b},{``d-},{``f+})}
Case(10){RR=({b-},{x},{`a},{``c},{``d},{``g})}
Case(11){RR=({b},{x},{`b-},{``d-},{``e-},{``g+})}
}//sw
}
Case("min"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`g},{``c},{``e-},{``g})}
Case(1){RR=({x},{`d-},{`g+},{``d-},{``e},{``g+})}
Case(2){RR=({x},{x},{`d},{`a},{``d},{``f})}
Case(3){RR=({x},{`e-},{`b-},{``e-},{``f+},{``b-})}
Case(4){RR=({e},{b},{`e},{`g},{`b},{``e})}
Case(5){RR=({f},{`c},{`f},{`g+},{``c},{``f})}
Case(6){RR=({f+},{`d-},{`f+},{`a},{``d-},{``f+})}
Case(7){RR=({g},{`d},{`g},{`b-},{``d},{``g})}
Case(8){RR=({g+},{`e-},{`g+},{`b},{``e-},{``g+})}
Case(9){RR=({x},{a},{`e},{`a},{``c},{``e})}
Case(10){RR=({x},{b-},{`f},{`b-},{``d-},{``f})}
Case(11){RR=({x},{b},{`f+},{`b},{``d},{``f+})}
}//sw
}
Case("m7"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`g},{`b-},{``e-},{``g}))}
Case(1){RR=({x},{`d-},{`g+},{`b},{``e},{``g+})}
Case(2){RR=({x},{x},{`d},{`a},{``c},{``f})}
Case(3){RR=({x},{`e-},{`b-},{``d-},{``f+},{``b-})}
Case(4){RR=({e},{b},{`e},{`g},{``d},{``e})}
Case(5){RR=({f},{`c},{`e-},{`g+},{``c},{``f})}
Case(6){RR=({f+},{`d-},{`e},{`a},{``d-},{``f+})}
Case(7){RR=({g},{`d},{`f},{`b-},{``d},{``g})}
Case(8){RR=({g+},{`e-},{`f+},{`b},{``e-},{``g+})}
Case(9){RR=({x},{a},{`e},{`g},{``c},{``e})}
Case(10){RR=({x},{b-},{`f},{`g+},{``d-},{``f})}
Case(11){RR=({x},{b},{`f+},{`a},{``d},{``f+})}
}//sw
}
Case("m79"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e-},{`b-},{``d},{``g})}
Case(1){RR=({x},{`d-},{`e},{`b},{``e-},{``g+})}
Case(2){RR=({x},{`d},{`f},{``c},{``e},{``a})}
Case(3){RR=({x},{`e-},{`f+},{``d-},{``f},{``b-})}
Case(4){RR=({x},{x},{`e},{`g},{``d},{``f+})}
Case(5){RR=({f},{`c},{`e-},{`g+},{``c},{``g})}
Case(6){RR=({f+},{a},{`e},{`g+},{``d-},{``e})}
Case(7){RR=({g},{`d},{`f},{`b-},{``d},{``a})}
Case(8){RR=({g+},{`e-},{`f+},{`b},{``e-},{``b-})}
Case(9){RR=({a},{`e},{`g},{``c},{``e},{``b})}
Case(10){RR=({b-},{`f},{`g+},{``d-},{``f},{```c})}
Case(11){RR=({x},{b},{`d},{`a},{``d-},{``f+})}
}//sw
}

Case("m711"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e-},{`b-},{``c},{``f})}
Case(1){RR=({x},{`d-},{`e},{`b},{``d-},{``f+})}
Case(2){RR=({x},{x},{`d},{`g},{``c},{``f})}
Case(3){RR=({x},{`e-},{`f+},{``d-},{``e-},{``g+})}
Case(4){RR=({e},{a},{`d},{`g},{`b},{``e})}
Case(5){RR=({f},{b-},{`e-},{`g+},{``c},{``f})}
Case(6){RR=({f+},{a},{`e},{`a},{`b},{``e})}
Case(7){RR=({g},{`c},{`f},{`b-},{``d},{``g})}
Case(8){RR=({g+},{`d-},{`f+},{`b},{``e-},{``g+})}
Case(9){RR=({a},{`d},{`g},{``c},{``e},{``a})}
Case(10){RR=({b-},{`e-},{`g+},{``d-},{``f},{``b-})}
Case(11){RR=({x},{b},{`d},{`a},{`b},{``e})}
}//sw
}
Case("add9"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`g},{``d},{``e})}
Case(1){RR=({x},{`d-},{`f},{x},{``e-},{``g+})}
Case(2){RR=({x},{`d},{`f+},{x},{``e},{``a})}
Case(3){RR=({x},{`e-},{`g},{x},{``f},{``b-})}
Case(4){RR=({e},{b},{`e},{`g+},{`b},{``f+})}
Case(5){RR=({f},{`c},{`f},{`a},{``c},{``g})}
Case(6){RR=({f+},{`d-},{`f+},{`b-},{``d-},{``g+})}
Case(7){RR=({g},{b},{`d},{`g},{`b},{``a})}
Case(8){RR=({g+},{`e-},{`g+},{``c},{``e-},{``b-})}
Case(9){RR=({a},{`e},{`a},{``d-},{``e},{``b})}
Case(10){RR=({x},{b-},{`d},{x},{``c},{``f})}
Case(11){RR=({x},{b},{`e-},{x},{``d-},{``f+})}
}//sw
}
Case("madd9"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e-},{`g},{``d},{``g})}
Case(1){RR=({x},{`d-},{`e},{`g+},{``e-},{``g+})}
Case(2){RR=({x},{`d},{`f},{`a},{``e},{``a})}
Case(3){RR=({x},{`e-},{`f+},{`b-},{``f},{``b-})}
Case(4){RR=({x},{x},{`e},{`g},{`b},{``f+})}
Case(5){RR=({f},{`c},{`f},{`g+},{``c},{``g})}
Case(6){RR=({f+},{`d-},{`f+},{`a},{``d-},{``g+})}
Case(7){RR=({g},{`d},{`g},{`b-},{``d},{``a})}
Case(8){RR=({g+},{`e-},{`g+},{`b},{``e-},{``b-})}
Case(9){RR=({a},{`e},{`a},{``c},{``e},{``b})}
Case(10){RR=({b-},{`f},{`b-},{``d-},{``f},{```c})}
Case(11){RR=({b},{`f+},{`b},{``d},{``f+},{```d-})}
}//sw
}
Case("add9sus4"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`g},{``d},{``f},{``g})}
Case(1){RR=({x},{`d-},{`g+},{``e-},{``f+},{``g+})}
Case(2){RR=({x},{x},{`d},{`a},{``e},{``g})}
Case(3){RR=({x},{`e-},{`b-},{``f},{``g+},{``b-})}
Case(4){RR=({e},{b},{`f+},{`a},{`b},{``e})}
Case(5){RR=({f},{`c},{`g},{`b-},{``c},{``f})}
Case(6){RR=({f+},{`d-},{`g+},{`b},{``d-},{``f+})}
Case(7){RR=({g},{`d},{`a},{``c},{``d},{``g})}
Case(8){RR=({g+},{`e-},{`b-},{``d-},{``e-},{``g+})}
Case(9){RR=({x},{a},{`e},{`b},{``d},{``e})}
Case(10){RR=({x},{b-},{`f},{``c},{``e-},{``f})}
Case(11){RR=({x},{b},{`f+},{``d-},{``e},{``f+})}
}//sw
}
Case("sus2"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`d},{`g},{``d},{``g})}
Case(1){RR=({x},{`d-},{`g+},{``d-},{``e-},{``g+})}
Case(2){RR=({x},{x},{`d},{`a},{``d},{``e})}
Case(3){RR=({x},{`e-},{`b-},{``e-},{``f},{``b-})}
Case(4){RR=({x},{`e},{`b},{``e},{``f+},{``b})}
Case(5){RR=({f},{x},{`f},{`g},{``c},{x})}
Case(6){RR=({f+},{x},{`f+},{`g+},{``d-},{x})}
Case(7){RR=({g},{a},{`d},{`a},{``d},{``g})}
Case(8){RR=({g+},{x},{`g+},{`b-},{``e-},{x})}
Case(9){RR=({x},{a},{`e},{`a},{`b},{``e})}
Case(10){RR=({x},{b-},{`f},{`b-},{``c},{``f})}
Case(11){RR=({x},{b},{`f+},{`b},{``d-},{``f+})}
}//sw
}
Case("sus4"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`f},{`g},{``c},{``f})}
Case(1){RR=({x},{`d-},{`g+},{``d-},{``f+},{``g+})}
Case(2){RR=({x},{x},{`d},{`a},{``d},{``g})}
Case(3){RR=({x},{`e-},{`b-},{``e-},{``g+},{``b-})}
Case(4){RR=({e},{b},{`e},{`a},{`b},{``e})}
Case(5){RR=({f},{`c},{`f},{`b-},{``c},{``f})}
Case(6){RR=({f+},{`d-},{`f+},{`b},{``d-},{``f+})}
Case(7){RR=({g},{`c},{`d},{`g},{``c},{``g})}
Case(8){RR=({g+},{`e-},{`g+},{``d-},{``e-},{``g+})}
Case(9){RR=({x},{a},{`e},{`a},{``d},{``e})}
Case(10){RR=({x},{b-},{`f},{`b-},{``e-},{``f})}
Case(11){RR=({x},{b},{`f+},{`b},{``e},{``f+})}
}//sw
}
Case("7sus4"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`g},{`b-},{``f},{``g})}
Case(1){RR=({x},{`d-},{`g+},{`b},{``f+},{``g+})}
Case(2){RR=({x},{x},{`d},{`a},{``c},{``g})}
Case(3){RR=({x},{`e-},{`b-},{``d-},{``g+},{``b-})}
Case(4){RR=({e},{b},{`d},{`a},{`b},{``e})}
Case(5){RR=({f},{`c},{`e-},{`b-},{``c},{``f})}
Case(6){RR=({f+},{`d-},{`e},{`b},{``d-},{``f+})}
Case(7){RR=({g},{`d},{`f},{``c},{``d},{``g})}
Case(8){RR=({g+},{`e-},{`f+},{``d-},{``e-},{``g+})}
Case(9){RR=({x},{a},{`e},{`g},{``d},{``e})}
Case(10){RR=({x},{b-},{`f},{`g+},{``e-},{``f})}
Case(11){RR=({x},{b},{`f+},{`a},{``e},{``f+})}
}//sw
}
Case("9sus4"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`f},{`b-},{``d},{``g})}
Case(1){RR=({x},{`d-},{`f+},{`b},{``e-},{``g+})}
Case(2){RR=({x},{x},{`d},{`g},{``c},{``e})}
Case(3){RR=({x},{`e-},{`g+},{``d-},{``f},{``b-})}
Case(4){RR=({x},{`e},{`a},{``d},{``f+},{``b})}
Case(5){RR=({x},{`f},{`b-},{``e-},{``g},{```c})}
Case(6){RR=({f+},{x},{`e},{`g+},{`b},{x})}
Case(7){RR=({g},{x},{`f},{`a},{``c},{x})}
Case(8){RR=({g+},{x},{`f+},{`b-},{``d-},{x})}
Case(9){RR=({x},{a},{`d},{`g},{`b},{``e})}
Case(10){RR=({x},{b-},{`e-},{`g+},{``c},{``f})}
Case(11){RR=({x},{b},{`e},{`a},{``d-},{``f+})}
}//sw
}
Case("13sus4"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`g},{`b-},{``f},{``a})}
Case(1){RR=({x},{`d-},{`g+},{`b},{``f+},{``b-})}
Case(2){RR=({x},{x},{`d},{`b},{``c},{``g})}
Case(3){RR=({x},{`e-},{`b-},{``d-},{``g+},{```c})}
Case(4){RR=({e},{b},{`d},{`a},{``d-},{``e})}
Case(5){RR=({f},{`c},{`e-},{`b-},{``d},{``f})}
Case(6){RR=({f+},{`d-},{`e},{`b},{``e-},{``f+})}
Case(7){RR=({g},{`d},{`f},{``c},{``e},{``g})}
Case(8){RR=({g+},{`e-},{`f+},{``d-},{``f},{``g+})}
Case(9){RR=({x},{a},{`e},{`g},{``d},{``f+})}
Case(10){RR=({x},{b-},{`f},{`g+},{``e-},{``g})}
Case(11){RR=({x},{b},{`f+},{`a},{``e},{``g+})}
}//sw
}
Case("7th"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`b-},{``c},{``e})}
Case(1){RR=({x},{`d-},{`g+},{`b},{``f},{``g+})}
Case(2){RR=({x},{x},{`d},{`a},{``c},{``f+})}
Case(3){RR=({x},{`e-},{`b-},{``d-},{``g},{``b-})}
Case(4){RR=({e},{b},{`d},{`g+},{``d},{``e})}
Case(5){RR=({f},{`c},{`e-},{`a},{``c},{``f})}
Case(6){RR=({f+},{`d-},{`e},{`b-},{``d-},{``f+})}
Case(7){RR=({g},{b},{`d},{`g},{`b},{``f})}
Case(8){RR=({g+},{`e-},{`f+},{``c},{``e-},{``g+})}
Case(9){RR=({x},{a},{`e},{`g},{``d-},{``e})}
Case(10){RR=({x},{b-},{`f},{`g+},{``d},{``f})}
Case(11){RR=({x},{b},{`e-},{`a},{`b},{``f+})}
}//sw
}
Case("79"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`b-},{``d},{``g})}
Case(1){RR=({x},{`d-},{`f},{`b},{``e-},{``g+})}
Case(2){RR=({x},{`d},{`f+},{``c},{``e},{``a})}
Case(3){RR=({x},{x},{`e-},{`g},{``d-},{``f})}
Case(4){RR=({e},{b},{`d},{`g+},{`b},{``f+})}
Case(5){RR=({f},{a},{`e-},{`g},{``c},{x})}
Case(6){RR=({f+},{`d-},{`e},{`b-},{``d-},{``g+})}
Case(7){RR=({g},{`d},{`f},{`b},{``d},{``a})}
Case(8){RR=({g+},{`e-},{`f+},{``c},{``e-},{``b-})}
Case(9){RR=({a},{`e},{`g},{``d-},{``e},{``b})}
Case(10){RR=({x},{b-},{`d},{`g+},{``c},{``f})}
Case(11){RR=({x},{b},{`e-},{`a},{``d-},{``f+})}
}//sw
}
Case("7p9"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`b-},{``e-},{x})}
Case(1){RR=({x},{`d-},{`f},{`b},{``e},{x})}
Case(2){RR=({x},{`d},{`f+},{``c},{``f},{x})}
Case(3){RR=({x},{x},{`e-},{`g},{``d-},{``f+})}
Case(4){RR=({e},{b},{x},{`g+},{``d},{``g})}
Case(5){RR=({f},{a},{`e-},{`g+},{``c},{x})}
Case(6){RR=({f+},{b-},{`e},{`a},{``d-},{x})}
Case(7){RR=({g},{b},{`f},{`b-},{``d},{x})}
Case(8){RR=({g+},{`c},{`f+},{`b},{``e-},{x})}
Case(9){RR=({a},{`d-},{`g},{``c},{``e},{x})}
Case(10){RR=({x},{b-},{`d},{`g+},{``d-},{x})}
Case(11){RR=({x},{b},{`e-},{`a},{``d},{x})}
}//sw
}
Case("7p11"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{x},{`b-},{``e},{``f+})}
Case(1){RR=({x},{`d-},{x},{`b},{``f},{``g})}
Case(2){RR=({x},{x},{`d},{`g+},{``c},{``f+})}
Case(3){RR=({x},{`e-},{x},{``d-},{``g},{``a})}
Case(4){RR=({x},{`e},{x},{``d},{``g+},{``b-})}
Case(5){RR=({f},{x},{`e-},{`a},{`b},{x})}
Case(6){RR=({f+},{x},{`e},{`b-},{``c},{x})}
Case(7){RR=({g},{x},{`f},{`b},{``d-},{x})}
Case(8){RR=({g+},{x},{`f+},{``c},{``d},{x})}
Case(9){RR=({a},{x},{`g},{``d-},{``e-},{x})}
Case(10){RR=({x},{b-},{x},{`g+},{``d},{``e})}
Case(11){RR=({x},{b},{x},{`a},{``e-},{``f})}
}//sw
}
Case("7b13"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`g},{`b-},{``e},{``g+})}
Case(1){RR=({x},{`d-},{`g+},{`b},{``f},{``a})}
Case(2){RR=({x},{x},{`d},{`b-},{``c},{``f+})}
Case(3){RR=({x},{`e-},{`b-},{``d-},{``g},{``b})}
Case(4){RR=({e},{x},{`d},{`g+},{``c},{x})}
Case(5){RR=({f},{x},{`e-},{`a},{``d-},{x})}
Case(6){RR=({f+},{x},{`e},{`b-},{``d},{x})}
Case(7){RR=({g},{x},{`f},{`b},{``e-},{x})}
Case(8){RR=({g+},{x},{`f+},{``c},{``e},{x})}
Case(9){RR=({x},{a},{`e},{`g},{``d-},{``f})}
Case(10){RR=({x},{b-},{`f},{`g+},{``d},{``f+})}
Case(11){RR=({x},{b},{`f+},{`a},{``e-},{``g})}
}//sw
}
Case("713"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`g},{`b-},{``e},{``a})}
Case(1){RR=({x},{`d-},{`g+},{`b},{``f},{``b-})}
Case(2){RR=({x},{x},{`d},{`b},{``c},{``f+})}
Case(3){RR=({x},{`e-},{`b-},{``d-},{``g},{```c})}
Case(4){RR=({e},{b},{`d},{`g+},{``d-},{``e})}
Case(5){RR=({f},{`c},{`e-},{`a},{``d},{``f})}
Case(6){RR=({f+},{`d-},{`e},{`b-},{``e-},{``f+})}
Case(7){RR=({g},{`d},{`f},{`b},{``e},{``g})}
Case(8){RR=({g+},{`e-},{`f+},{``c},{``f},{``g+})}
Case(9){RR=({x},{a},{`e},{`g},{``d-},{``f+})}
Case(10){RR=({x},{b-},{`f},{`g+},{``d},{``g})}
Case(11){RR=({x},{b},{`f+},{`a},{``e-},{``g+})}
}//sw
}
Case("b9p11"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`f+},{`b-},{``d-},{``f+})}
Case(1){RR=({x},{`d-},{`g},{`b},{``d},{``g})}
Case(2){RR=({x},{`d},{`g+},{``c},{``e-},{``g+})}
Case(3){RR=({x},{x},{`e-},{`a},{``d-},{``e})}
Case(4){RR=({x},{`e},{`b-},{``d},{``f},{``b-})}
Case(5){RR=({x},{`f},{`b},{``e-},{``f+},{``b})}
Case(6){RR=({f+},{`c},{`e},{`g},{x},{x})}
Case(7){RR=({g},{`d-},{`f},{`g+},{x},{x})}
Case(8){RR=({g+},{`d},{`f+},{`a},{x},{x})}
Case(9){RR=({a},{`e-},{`g},{`b-},{x},{x})}
Case(10){RR=({x},{b-},{`e},{`g+},{`b},{``e})}
Case(11){RR=({x},{b},{`f},{`a},{``c},{``f})}
}//sw
}
Case("6th"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`a},{``c},{``e})}
Case(1){RR=({x},{`d-},{`g+},{``d-},{``f},{x})}
Case(2){RR=({x},{x},{`d},{`a},{`b},{``f+})}
Case(3){RR=({x},{`e-},{`b-},{``e-},{``g},{x})}
Case(4){RR=({e},{b},{`e},{`g+},{``d-},{``e})}
Case(5){RR=({x},{x},{`f},{`a},{``d},{``f})}
Case(6){RR=({f+},{x},{`e-},{`b-},{``d-},{x})}
Case(7){RR=({g},{b},{`e},{`g},{`b},{``e})}
Case(8){RR=({g+},{x},{`f},{``c},{``e-},{x})}
Case(9){RR=({x},{a},{`e},{`a},{``d-},{x})}
Case(10){RR=({x},{b-},{`f},{`b-},{``d},{x})}
Case(11){RR=({x},{b},{`f+},{`b},{``e-},{x})}
}//sw
}
Case("69"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`a},{``d},{``g})}
Case(1){RR=({x},{`d-},{`f},{`b-},{``e-},{``g+})}
Case(2){RR=({x},{`d},{`f+},{`b},{``e},{``a})}
Case(3){RR=({x},{x},{`e-},{`g},{``c},{``f})}
Case(4){RR=({x},{`e},{`g+},{``d-},{``f+},{``b})}
Case(5){RR=({f},{a},{`d},{`g},{``c},{``f})}
Case(6){RR=({f+},{b-},{`e-},{`g+},{``d-},{``f+})}
Case(7){RR=({g},{b},{`e},{`a},{``d},{``g})}
Case(8){RR=({g+},{`c},{`f},{`b-},{``e-},{``g+})}
Case(9){RR=({a},{`d-},{`f+},{`b},{``e},{``a})}
Case(10){RR=({x},{b-},{`d},{`g},{``c},{``f})}
Case(11){RR=({x},{b},{`e-},{`g+},{``d-},{``f+})}
}//sw
}
Case("m6"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e-},{`a},{``c},{``e})}
Case(1){RR=({x},{`d-},{`g+},{x},{``e},{``b-})}
Case(2){RR=({x},{x},{`d},{`a},{`b},{``f})}
Case(3){RR=({x},{`e-},{`b-},{x},{``f+},{```c})}
Case(4){RR=({e},{b},{`e},{`g},{``d-},{``e})}
Case(5){RR=({f},{x},{`d},{`g+},{``c},{``f})}
Case(6){RR=({f+},{`d-},{`f+},{`a},{``e-},{``f+})}
Case(7){RR=({g},{`d},{`g},{`b-},{``e},{``g})}
Case(8){RR=({g+},{`e-},{`g+},{`b},{``f},{``g+})}
Case(9){RR=({x},{a},{`e},{`a},{``c},{``f+})}
Case(10){RR=({x},{b-},{`f},{x},{``d-},{``g})}
Case(11){RR=({x},{b},{`d},{`g+},{`b},{``f+})}
}//sw
}
Case("m69"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e-},{`a},{``d},{x})}
Case(1){RR=({x},{`d-},{`e},{`b-},{``e-},{x})}
Case(2){RR=({x},{`d},{`f},{`b},{``e},{x})}
Case(3){RR=({x},{`e-},{`f+},{``c},{``f},{x})}
Case(4){RR=({x},{x},{`e},{`g},{``d-},{``f+})}
Case(5){RR=({f},{x},{`d},{`g+},{``c},{``g})}
Case(6){RR=({f+},{a},{`e-},{`g+},{``d-},{x})}
Case(7){RR=({g},{x},{`e},{`b-},{``d},{``a})}
Case(8){RR=({g+},{x},{`f},{`b},{``e-},{``b-})}
Case(9){RR=({a},{x},{`f+},{``c},{``e},{``b})}
Case(10){RR=({b-},{x},{`g},{``d-},{``f},{```c})}
Case(11){RR=({x},{b},{`d},{`g+},{``d-},{x})}
}//sw
}
Case("mM7"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`g},{`b},{``e-},{``g})}
Case(1){RR=({x},{`d-},{`g+},{``c},{``e},{``g+})}
Case(2){RR=({x},{x},{`d},{`a},{``d-},{``f})}
Case(3){RR=({x},{`e-},{`b-},{``d},{``f+},{``b-})}
Case(4){RR=({e},{b},{`e-},{`g},{`b},{``e})}
Case(5){RR=({f},{`c},{`e},{`g+},{``c},{``f})}
Case(6){RR=({f+},{`d-},{`f},{`a},{``d-},{``f+})}
Case(7){RR=({g},{`d},{`f+},{`b-},{``d},{``g})}
Case(8){RR=({g+},{`e-},{`g},{`b},{``e-},{``g+})}
Case(9){RR=({x},{a},{`e},{`g+},{``c},{``e})}
Case(10){RR=({x},{b-},{`f},{`a},{``d-},{``f})}
Case(11){RR=({x},{b},{`f+},{`b-},{``d},{``f+})}
}//sw
}
Case("mM79"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e-},{`b},{``d},{x})}
Case(1){RR=({x},{`d-},{`e},{``c},{``e-},{x})}
Case(2){RR=({x},{`d},{`f},{``d-},{``e},{x})}
Case(3){RR=({x},{`e-},{`f+},{``d},{``f},{x})}
Case(4){RR=({x},{x},{`e},{`g},{``e-},{``f+})}
Case(5){RR=({f},{`c},{`e},{`g+},{``c},{``g})}
Case(6){RR=({f+},{`d-},{`f},{`a},{``d-},{``g+})}
Case(7){RR=({g},{`d},{`f+},{`b-},{``d},{``a})}
Case(8){RR=({g+},{`e-},{`g},{`b},{``e-},{``b-})}
Case(9){RR=({a},{`e},{`g+},{``c},{``e},{``b})}
Case(10){RR=({b-},{`f},{`a},{``d-},{``f},{```c})}
Case(11){RR=({x},{b},{`d},{`b-},{``d-},{x})}
}//sw
}
Case("mM7p5"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`g+},{`b},{``e})}
Case(1){RR=({x},{`d-},{`e},{`a},{``c},{x})}
Case(2){RR=({x},{`d},{`f},{`b-},{``d-},{x})}
Case(3){RR=({x},{`e-},{`f+},{`b},{``d},{x})}
Case(4){RR=({e},{`c},{`e-},{`g},{``c},{``e})}
Case(5){RR=({x},{x},{`f},{`g+},{``d-},{``e})}
Case(6){RR=({f+},{x},{`f},{`a},{``d},{x})}
Case(7){RR=({g},{x},{`f+},{`b-},{``e-},{x})}
Case(8){RR=({g+},{x},{`g},{`b},{``e},{x})}
Case(9){RR=({a},{x},{`g+},{``c},{``f},{x})}
Case(10){RR=({b-},{x},{`a},{``d-},{``f+},{x})}
Case(11){RR=({b},{x},{`b-},{``d},{``g},{x})}
}//sw
}
Case("aug"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`g+},{``c},{x})}
Case(1){RR=({x},{`d-},{`f},{`a},{``d-},{x})}
Case(2){RR=({x},{x},{`d},{`b-},{``d},{``f+})}
Case(3){RR=({x},{`e-},{`g},{`b},{``e-},{x})}
Case(4){RR=({x},{x},{`e},{`g+},{``c},{``e})}
Case(5){RR=({f},{x},{`f},{`a},{``d-},{``f})}
Case(6){RR=({f+},{x},{`f+},{`b-},{``d},{``f+})}
Case(7){RR=({g},{x},{`g},{`b},{``e-},{``g})}
Case(8){RR=({x},{x},{`e},{`g+},{``c},{``e})}
Case(9){RR=({x},{x},{`f},{`a},{``d-},{``f})}
Case(10){RR=({x},{x},{`f+},{`b-},{``d},{``f+})}
Case(11){RR=({x},{b},{`e-},{`g},{`b},{x})}
}//sw
}
Case("aug7"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`g+},{`b-},{``e},{``g+})}
Case(1){RR=({x},{`d-},{`a},{`b},{``f},{``a})}
Case(2){RR=({x},{x},{`d},{`b-},{``c},{``f+})}
Case(3){RR=({x},{`e-},{`b},{``d-},{``g},{``b})}
Case(4){RR=({e},{x},{`d},{`g+},{``c},{``e})}
Case(5){RR=({f},{x},{`e-},{`a},{``d-},{``f})}
Case(6){RR=({f+},{x},{`e},{`b-},{``d},{``f+})}
Case(7){RR=({g},{x},{`f},{`b},{``e-},{``g})}
Case(8){RR=({g+},{x},{`f+},{``c},{``e},{``g+})}
Case(9){RR=({x},{a},{`f},{`g},{``d-},{``f})}
Case(10){RR=({x},{b-},{`f+},{`g+},{``d},{``f+})}
Case(11){RR=({x},{b},{`g},{`a},{``e-},{``g})}
}//sw
}
Case("m7p5"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{x},{`b-},{``e-},{``g+})}
Case(1){RR=({x},{`d-},{x},{`b},{``e},{``a})}
Case(2){RR=({x},{x},{`d},{`b-},{``c},{``f})}
Case(3){RR=({x},{`e-},{x},{``d-},{``f+},{``b})}
Case(4){RR=({e},{`c},{`d},{`g},{``c},{``e})}
Case(5){RR=({f},{`d-},{`e-},{`g+},{``d-},{``f})}
Case(6){RR=({f+},{`d},{`e},{`a},{``d},{``f+})}
Case(7){RR=({g},{`e-},{`f},{`b-},{``e-},{``g})}
Case(8){RR=({g+},{`e},{`f+},{`b},{``e},{``g+})}
Case(9){RR=({x},{a},{x},{`g},{``c},{``f})}
Case(10){RR=({x},{b-},{x},{`g+},{``d-},{``f+})}
Case(11){RR=({x},{b},{x},{`a},{``d},{``g})}
}//sw
}
Case("M7p5"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`e},{`g+},{`b},{``e})}
Case(1){RR=({x},{`d-},{`f},{`a},{``c},{``f})}
Case(2){RR=({x},{`d},{`f+},{`b-},{``d-},{``f+})}
Case(3){RR=({x},{`e-},{`g},{`b},{``d},{``g})}
Case(4){RR=({e},{x},{`e-},{`g+},{``c},{``e})}
Case(5){RR=({x},{x},{`f},{`a},{``d-},{``e})}
Case(6){RR=({f+},{x},{`f},{`b-},{``d},{x})}
Case(7){RR=({g},{x},{`f+},{`b},{``e-},{x})}
Case(8){RR=({g+},{x},{`g},{``c},{``e},{x})}
Case(9){RR=({a},{x},{`g+},{``d-},{``f},{x})}
Case(10){RR=({b-},{x},{`a},{``d},{``f+},{x})}
Case(11){RR=({b},{x},{`b-},{``e-},{``g},{x})}
}//sw
}
Case("dim"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`f+},{``c},{``e-},{x})}
Case(1){RR=({x},{`d-},{`g},{``d-},{``e},{x})}
Case(2){RR=({x},{x},{`d},{`g+},{``d},{``f})}
Case(3){RR=({x},{`e-},{`a},{``e-},{``f+},{x})}
Case(4){RR=({`e},{x},{``e},{``g},{``b-},{x})}
Case(5){RR=({f},{x},{`f},{`g+},{`b},{x})}
Case(6){RR=({f+},{x},{`f+},{`a},{``c},{x})}
Case(7){RR=({g},{x},{`g},{`b-},{``d-},{x})}
Case(8){RR=({g+},{x},{`g+},{`b},{``d},{x})}
Case(9){RR=({x},{a},{`e-},{`a},{``c},{x})}
Case(10){RR=({x},{b-},{`e},{`b-},{``d-},{x})}
Case(11){RR=({x},{b},{`f},{`b},{``d},{x})}
}//sw
}
Case("dim7"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`f+},{`a},{``e-},{x})}
Case(1){RR=({x},{`d-},{`g},{`b-},{``e},{x})}
Case(2){RR=({x},{x},{`d},{`g+},{`b},{``f})}
Case(3){RR=({x},{`e-},{`a},{``c},{``f+},{x})}
Case(4){RR=({x},{b-},{`e},{`g},{``d-},{x})}
Case(5){RR=({f},{x},{`d},{`g+},{`b},{x})}
Case(6){RR=({f+},{x},{`e-},{`a},{``c},{x})}
Case(7){RR=({g},{x},{`e},{`b-},{``d-},{x})}
Case(8){RR=({g+},{x},{`f},{`b},{``d},{x})}
Case(9){RR=({a},{x},{`f+},{``c},{``e-},{x})}
Case(10){RR=({x},{b-},{`e},{`g},{``d-},{x})}
Case(11){RR=({x},{b},{`f},{`g+},{``d},{x})}
}//sw
}
Case("7b5"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`f+},{`b-},{``e},{x})}
Case(1){RR=({x},{`d-},{`g},{`b},{``f},{x})}
Case(2){RR=({x},{x},{`d},{`g+},{``c},{``f+})}
Case(3){RR=({x},{`e-},{`a},{``d-},{``g},{x})}
Case(4){RR=({x},{`e},{`b-},{``d},{``g+},{x})}
Case(5){RR=({f},{x},{`e-},{`a},{`b},{x})}
Case(6){RR=({f+},{x},{`e},{`b-},{``c},{x})}
Case(7){RR=({g},{x},{`f},{`b},{``d-},{x})}
Case(8){RR=({g+},{x},{`f+},{``c},{``d},{x})}
Case(9){RR=({x},{a},{`e-},{`g},{``d-},{x})}
Case(10){RR=({x},{b-},{`e},{`g+},{``d},{x})}
Case(11){RR=({x},{b},{`f},{`a},{``e-},{x})}
}//sw
}
Case("m7b5"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`f+},{`b-},{``e-},{x})}
Case(1){RR=({x},{`d-},{`g},{`b},{``e},{x})}
Case(2){RR=({x},{x},{`d},{`g+},{``c},{``f})}
Case(3){RR=({x},{`e-},{`a},{``d-},{``f+},{x})}
Case(4){RR=({x},{`e},{`b-},{``d},{``g},{x})}
Case(5){RR=({f},{x},{`e-},{`g+},{`b},{x})}
Case(6){RR=({f+},{x},{`e},{`a},{``c},{x})}
Case(7){RR=({g},{x},{`f},{`b-},{``d-},{x})}
Case(8){RR=({g+},{x},{`f+},{`b},{``d},{x})}
Case(9){RR=({a},{x},{`g},{``c},{``e-},{x})}
Case(10){RR=({x},{b-},{`e},{`g+},{``d-},{``e})}
Case(11){RR=({x},{b},{`d},{`a},{``d},{``f})}
}//sw
}
Case("pwr2"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`g},{x},{x},{x})}
Case(1){RR=({x},{`d-},{`g+},{x},{x},{x})}
Case(2){RR=({x},{x},{`d},{`a},{x},{x})}
Case(3){RR=({x},{`e-},{`b-},{x},{x},{x})}
Case(4){RR=({e},{b},{x},{x},{x},{x})}
Case(5){RR=({f},{`c},{x},{x},{x},{x})}
Case(6){RR=({f+},{`d-},{x},{x},{x},{x})}
Case(7){RR=({g},{`d},{x},{x},{x},{x})}
Case(8){RR=({g+},{`e-},{x},{x},{x},{x})}
Case(9){RR=({x},{a},{`e},{x},{x},{x})}
Case(10){RR=({x},{b-},{`f},{x},{x},{x})}
Case(11){RR=({x},{b},{`f+},{x},{x},{x})}
}//sw
}
Case("pwr3"){
Switch(Rootkey){
Case(0){RR=({x},{`c},{`g},{``c},{x},{x})}
Case(1){RR=({x},{`d-},{`g+},{``d-},{x},{x})}
Case(2){RR=({x},{x},{`d},{`a},{``d},{x})}
Case(3){RR=({x},{`e-},{`b-},{``e-},{x},{x})}
Case(4){RR=({e},{b},{`e},{x},{x},{x})}
Case(5){RR=({f},{`c},{`f},{x},{x},{x})}
Case(6){RR=({f+},{`d-},{`f+},{x},{x},{x})}
Case(7){RR=({g},{`d},{`g},{x},{x},{x})}
Case(8){RR=({g+},{`e-},{`g+},{x},{x},{x})}
Case(9){RR=({x},{a},{`e},{`a},{x},{x})}
Case(10){RR=({x},{b-},{`f},{`b-},{x},{x})}
Case(11){RR=({x},{b},{`f+},{`b},{x},{x})}
}//sw
}
	} //sw

	Result= RR;
} //func

 
Function Pi_out(Int Rootkey, Str Chdname, Str Junban, Str Cnv, Str Vce){ 

	Array RM= Mode_sw(Cnv)
	Str Mod= RM(0); Str Prn= RM(1); Str Len= RM(2)

	Str TT; Array Chord; Array Fret;

	If(Prn!="run"& Prn!="print"| Vce!=""| #Tune_set!=""| #Device_set!=""){

		FT_print(Rootkey,Chdname,Junban,Cnv,Vce) // �]����
	}Else{

	Switch(Mod){
		Case("cut"){
			If(Junban==""){ Junban= #Cut_set }
			Junban= Loop_beaker(Junban)

			Chord= Pi_chd_go(Rootkey,Chdname)
			Gt2_cutting(Prn,Junban,Chord)
		}
		Case("arp"){
			If(Junban==""){ Junban= #Arp_set }
			Junban= Loop_beaker(Junban)

			Fret= Pi_chd_ha(Rootkey,Chdname)
			Gt2_arpeggio(Prn,Junban,Fret)
		}
		Case("st"){
			Chord= Pi_chd_go(Rootkey,Chdname)

			If(Len==0){ Gt2_err({"�������Ȃ�/"}+ Chd_gbl, Len) End; }

			TT= Speed_setter(Junban,Chord(0))+ Chord(1)+ Chord(2)+ Len+ " q__9=0;t__9=0;v__9=0; "
			If(Prn=="print"){ Print(TT) }
			TT;
		}
	} //sw

	}
} //func


 
//------------------------ 
 
// Chord Function 

#GT2_Run= { Function #?1#?3(Str Spd,Str Lgh,Str Vce){ Chd_gbl= "#?1#?3"; Pi_out( #?2,"#?4", Spd,Lgh,Vce) Result= Res_gbl; }  }
#GT2_Err= { Function #?1#?3(){ Pi_errlist(#?2,"#?3","#?4") } End; }

#Chd_LIST= {

#GT2_Chd("C" , "0",#Chd_NAM,#Chd_TRN)
#GT2_Chd("Cp", "1",#Chd_NAM,#Chd_TRN);#GT2_Chd("Db", "1",#Chd_NAM,#Chd_TRN)
#GT2_Chd("D" , "2",#Chd_NAM,#Chd_TRN)
#GT2_Chd("Dp", "3",#Chd_NAM,#Chd_TRN);#GT2_Chd("Eb", "3",#Chd_NAM,#Chd_TRN)
#GT2_Chd("E" , "4",#Chd_NAM,#Chd_TRN)
#GT2_Chd("F" , "5",#Chd_NAM,#Chd_TRN)
#GT2_Chd("Fp", "6",#Chd_NAM,#Chd_TRN);#GT2_Chd("Gb", "6",#Chd_NAM,#Chd_TRN)
#GT2_Chd("G" , "7",#Chd_NAM,#Chd_TRN)
#GT2_Chd("Gp", "8",#Chd_NAM,#Chd_TRN);#GT2_Chd("Ab", "8",#Chd_NAM,#Chd_TRN)
#GT2_Chd("A" , "9",#Chd_NAM,#Chd_TRN)
#GT2_Chd("Ap","10",#Chd_NAM,#Chd_TRN);#GT2_Chd("Bb","10",#Chd_NAM,#Chd_TRN)
#GT2_Chd("B" ,"11",#Chd_NAM,#Chd_TRN)

	}

#GT2_Chd= #GT2_Err //�G���[�o��
#Chd_NAM={7b9}		#Chd_TRN={dim7}		#Chd_LIST
#Chd_NAM={m911}		#Chd_TRN={add9}		#Chd_LIST
#Chd_NAM={m7b511}	#Chd_TRN={m69}		#Chd_LIST
#Chd_NAM={M711}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={m713}		#Chd_TRN=#Chd_NAM	#Chd_LIST

#GT2_Chd= #GT2_Run
#Chd_NAM={}		#Chd_TRN={Maj}		#Chd_LIST
#Chd_NAM={M7}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={M9}		#Chd_TRN={M79}		#Chd_LIST
#Chd_NAM={M79}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={M7p11}	#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={M713}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={M913}		#Chd_TRN=#Chd_NAM	#Chd_LIST

#Chd_NAM={m}		#Chd_TRN={min}		#Chd_LIST
#Chd_NAM={m7}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={m9}		#Chd_TRN={m79}		#Chd_LIST
#Chd_NAM={m79}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={m711}		#Chd_TRN=#Chd_NAM	#Chd_LIST

#Chd_NAM={add9}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={madd9}	#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={add9sus4}	#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={sus4add9}	#Chd_TRN={add9sus4}	#Chd_LIST

#Chd_NAM={sus2}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={sus4}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={7sus4}	#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={9sus4}	#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={13sus4}	#Chd_TRN=#Chd_NAM	#Chd_LIST

#Chd_NAM={7}		#Chd_TRN={7th}		#Chd_LIST
#Chd_NAM={9}		#Chd_TRN={79}		#Chd_LIST
#Chd_NAM={79}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={7p9}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={711}		#Chd_TRN={7sus4}	#Chd_LIST
#Chd_NAM={7p11}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={7b13}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={713}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={913}		#Chd_TRN={69}		#Chd_LIST
#Chd_NAM={_b9p11}	#Chd_TRN={b9p11}	#Chd_LIST
#Chd_NAM={_p9b13}	#Chd_TRN={m7p5}		#Chd_LIST

#Chd_NAM={6}		#Chd_TRN={6th}		#Chd_LIST
#Chd_NAM={69}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={m6}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={m69}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={mM7}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={mM79}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={mM7p5}	#Chd_TRN=#Chd_NAM	#Chd_LIST

#Chd_NAM={aug}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={aug7}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={7p5}		#Chd_TRN={aug7}		#Chd_LIST
#Chd_NAM={m7p5}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={M7p5}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={dim}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={dim7}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={7b5}		#Chd_TRN=#Chd_NAM	#Chd_LIST
#Chd_NAM={m7b5}		#Chd_TRN=#Chd_NAM	#Chd_LIST

#Chd_NAM={_pwr2}	#Chd_TRN={pwr2}		#Chd_LIST
#Chd_NAM={_pwr3}	#Chd_TRN={pwr3}		#Chd_LIST
#Chd_NAM={_omit3}	#Chd_TRN={pwr3}		#Chd_LIST



   
/*�@�ȏ�v���O�������A�I��� 



 
�@�@�@�ڍא����� 


�@�@�@���ڂ��������y�сA
�@�@�g�����̃m�E�n�E�Ȃǂ��ڂ��܂���


	
�@���e���V�����R�[�h 



//�@�R�[�h�ďo���̎d�l�ɂ���



�@- �e���V�����̃Z�I���[ -


�@�@�s�A�m�́A9�x�̏ꍇ���[�g���Ȃ��܂����A
�@�@�M�^�[�ł͕��ʃ��[�g�͏Ȃ��܂���B

�@�@9,11,13�ł����Ă��ȗ��́A5�x�Ƃ��܂����B
�@�@M913�̂悤��6�a���ł́A�����t�H�[���Ɍ���3�x���Ȃ��܂�

�@�@�������������肵�Ă���A�R�[�h�̂ݑI�����Ă��܂��B
�@�@�|���g�[�i���ȃe���V�����ɂ��ẮAChdprint���g�p���ĉ�����



�@/ �ʗ�ƈႤ�R�[�h /

�@�@�ʏ� add9�́Asus2�̃R�[�h����p����܂����A
�@�@add9�ɂ́A3�x��t�����Ă��܂�

�@�@Csus2 + "e" -> Cadd9


�@/ �����\�����g���R�[�h /

�@�@#9b13��m7#5�͓����ł��B3�x�������ƍ\���������̂��߂ł��B
�@�@�ȉ��̃R�[�h�́A�����ƂȂ��Ă܂��B�g�������ق����g�p���ĉ�����

�@�@A711    = A7sus4
�@�@A913    = A69
�@�@A_p9b13 = Am7p5
�@�@Aaug7   = A7p5
�@�@A_pwr3  = A_omit3


�@/ �\�����������㗝�R�[�h /

�@�@G b9#11�́A���R�[�h�Ɠ����ł��B

�@�@G_b9p11  = Db7


�@�@�ȉ��́A�Z�O�x��̃R�[�h�Ɠ����ł��B
�@�@�����̍D���Ȃق���I�����ĉ�����

�@�@Am7      = C6
�@�@Am711    = C69
�@�@Am7b5    = Cm6


�@/ �Ăяo���Ȃ��R�[�h�̑㗝 /

�@�@m7b5,11�́A�\�����������Z�O�x��̑㗝�R�[�hm69���g���܂�

�@�@Am7b511  = Cm69


�@�@m9,11�́A11th�ɂ��m3���Ȃ���邽�߁A
�@�@�����\�����ƂȂ�A��2�x���̑㗝�R�[�hadd9���g���܂�

�@�@Cm911    = Bbadd9


�@�@7b9�͋����ɓ����A�@�\��dim7�ƕς��Ȃ����߁A
�@�@�\�������߂��A������̑㗝�R�[�hdim7���g���ĉ�����

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


�@�@�n�C�R�[�h�ɂ����āA1���⃋�[�g�����Ȃ��A
�@�@�܂��A�ቹ����ǉ����ĉ��t����ۂȂǁA
�@�@�ȉ��̃I�v�V�����őΉ����܂�



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
�@�@��ԒႢ�����A�K���Ar�ƂȂ�܂�

�@�@�|�W�V������6�́Arhu321�A
�@�@�|�W�V������5�́A ru321�A
�@�@�ȉ��Ar321, r21�ƁA�g����������d�l�ł�



  
�@�����H�I�Ȗ}�� 



//�@�����H�I�Ȏg�p�@���ڂ��܂���


	
// Cutting / 16beat�J�b�e�B���O 


�@�@�Q�[�g�≹�ʁA���΃I�N�^�[�u����g���āA
�@�@�V���R�y�[�V������u���b�V���O��
�@�@����邱�ƂŎ��������o���܂�


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
�@�@�A���y�W�I�p�^�[����ł�


�@���Z�O�x���7th��II-V���[�V����


�@�@Include(guitar2.h); @27 o3 q108 Time=(!4)

�@�@#A= "[r 321 u 321]"		l8 EbM7( #A,arp) // P1
�@�@#B= "[r 323 1 232]"		l8  Am7( #B,arp) // P2
�@�@#C= "[r 312 u 312]"		l8   D7( #C,arp, 5) // P3 5�����[�g
�@�@#D= "[r 3'21'3 u 3'21'3]"	l8  GM7( #D,arp) // P4
�@�@#E= "['r21'3'21'3 'u21'3'21'3]"	l8  Bb7( #E,arp) // P5
�@�@#F= "[r 321 ^232]"		l8  EbM7(#F,arp) // P6
�@�@#G= "['r1'232 'u1'232]"	l8  Fp7( #G,arp) // P7
�@�@#H= "[r 32123 u 32123]"	l12 BM7( #H,arp) // P8
�@�@#I= "[r32 h32 u1]"		l8  Fm7( #I,arp) // P9
�@�@#J= "[r32 u12 32]"		l8  Bb7( #J,arp) // P10
�@�@#K= "['r2'3u 1^:23^]^^^"	l8  DpM7(#K,arp) // P11


//�@�Q�lURL
�@-- http://guitar.zashiki.com/practice/gd03.html


 
// Arpeggio / �{�T�m�o�p�^�[�� 


�@�@����̂���e���V������
�@�@�����ƁA��肻��炵���Ȃ�܂�


�@����{�{�T�m�o���Y��


�@�@Include(guitar2.h); @27 v101 l8 q88 o3 Time=(!4)

�@�@AM9(   " 'u13'^'123'^ r'13'^ "       ,arp,"5")
�@�@Apdim7(" '123'  u'13'^'13' r^'123'^ ",arp,"5#")
�@�@Bm9(   " 'u13'^'123'^ r'13'^ "       ,arp,"5#")
�@�@E9(    " '123'  u'13'^'13' r^'123'^ ",arp, 6)

//�@�Q�lURL
�@-- https://www.youtube.com/watch?v=89EALHQy3T0


 
// Chdprint"N" / �i�b�g���[�h�ł̕����R�[�h 


�@�@6���h�~�i���g�y�_����t�����A
�@�@2���̉������̂݃`�F���W�����Ԃ̃N���V�F�ł��B

�@�@"8765"�ƕω����邱�ƂŃR�[�h���ω����܂�


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


�@�@�J�|�^�X�g�I�ɁAA���[�g�͌Œ肵���܂܁A
�@�@������K���ɕ��ѕς��A�e���V�������������̂ł�


�@���e���V��������̗�


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


�@�@�R�[�h�l�[���͌�t���ƂȂ�܂��B//�o�͂���m�F���ĉ�����

 
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


	
�@- �t���b�g�l�ɂ��� - 


//�@�t���b�g�l�̌v�Z���@


�@�@���[�g���w�肪�Ȃ��ꍇ�A
�@�@�o�͍ς݃f�[�^���Q�Ƃ��āA�R�[�h�����t���܂��B
�@
�@�@�t��"5"�Ȃǂ̎w��A�`���[�j���O�ύX����ꍇ�́A
�@�@�e���̃t���b�g�l���v�Z���āA�o�͂��܂��B
�@�@���̏ꍇ�A�኱�������d���Ȃ�܂�

�@�@�����A�e���̃t���b�g�l������ -1������ꍇ�A
�@�@�S�̂̃|�W�V�������グ�A11 Fret�֕ύX���ĉ��t���܂�



 
�@- guitar.h�Ƃ̌݊��� - 


//�@���͂̌݊����ɂ���


�@�@guitar.h�Ƃ̊��S�Ȍ݊��́A�����ɂ͎���Ă܂���B

�@�@guitar.h�̓R�[�h���ǂݍ��ނ��ƂɁAo5���������݂܂����A
�@�@guitar2.h�ł̓R�[�h���ǂݍ��܂�Ă��Ao�l�͕ς��܂���B

�@�@����́A���͂̍���������邽�߂̎d�l�ł�




 
�@- �J�b�e�B���O Cutting - 


//�@���^�C�~���O�ɂ���


�@�@guitar.h�́A"t"�݂̂Ńo�������Č����܂��B
�@�@���ꂾ�Ɖ��ƂȂ��A���t�I�Ɉ�a�������������߁Aguitar2.h�ł́A
�@�@����ɃQ�[�g���C����ǉ����A"t__9%"��"q__9%"�̑��Βl�ɕύX���Ă��܂��B

�@�@����ɂ��|�W�V�����`�F���W���A
�@�@�����I�ɑS���~���[�g��������悤�ɂȂ�܂���

�@�@Dm      D    �@�@�@�@Dm      D
�@�@------|======�@�@�@�@------|======
�@�@  ----|--    �@���@�@  ----|
�@�@      |  ====�@�@�@�@      |  ====
�@�@    --|----==�@�@�@      --|    ==


�@�@�܂����X�e�b�v�ł����Aguitar.h��艉�t�^�C�~���O�𑁂߂܂����B

�@�@�����^�C�~���O��x�点�����Ƃ��́At_�ł̒�����A
�@�@r%1�̂悤�ȋx����ǉ����Ă�������


 
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







   
�@�@�ڍא����A�I���@*/ 


 
