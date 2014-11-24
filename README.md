SODALITE
========

SODALITE(�\�[�_���C�g�j��Altera MAX10�f�o�C�X�𓋍ڂ���DIP�`��̃v���g�^�C�s���O����FPGA�{�[�h�ł��B


Overview
========

![SODALITE TOPVIEW](https://lh3.googleusercontent.com/-e6P0SKS46Xc/VHNEk6tXomI/AAAAAAAAHHw/hiFEVjnDsTw/w379-h380-no/sodalite_topview.png)

- 1100mil��40�s��DIP�`��
- 8kLE��MAX10�f�o�C�X����(10M08SAE144C8GES)
- 256MbitSDRAM����
- 3��ނ̎��g����I���ł���I���{�[�hOSC
- �ő�34�{��PIO�A�A�i���O����6�{�ALVDS�����y�A8�`���l��
- �I���{�[�h�Ƀ��[�U�[LED
- 3.3V�P��d���쓮
- ADC�pVREF/REFGND�����VIO�O�����̓s������
- �f���A���R���t�B�O���[�V�����Ή�


�u���b�N�}
----------

![SODALITE Blockdiagram](https://lh4.googleusercontent.com/-9MY5agBSNxU/VHNElCTIsCI/AAAAAAAAHH0/HBXVVxgH8Xo/w619-h447-no/sodalite_block.png)



�s���A�T�C��
============

�v���g�^�C�s���O�R�l�N�^
------------------------

|�ԍ�|FPGA�s��|���e|
|---|---|---|
|1|PIN_28|PIO0/CLK_n|
|2|PIN_29|PIO1/CLK_p|
|3| |VCCIO����|
|4|PIN_38|PIO2/LVDS0_n|
|5|PIN_39|PIO3/LVDS0_p|
|6|PIN_41|PIO4/LVDS1_n|
|7|PIN_43|PIO5/LVDS1_p|
|8|PIN_44|PIO6/LVDS2_n|
|9|PIN_45|PIO7/LVDS2_p|
|10|PIN_46|PIO8/LVDS3_n|
|11|PIN_47|PIO9/LVDS3_p|
|12|PIN_50|PIO10/LVDS4_n|
|13|PIN_52|PIO11/LVDS4_p|
|14|PIN_55|PIO12/LVDS5_n|
|15|PIN_56|PIO13/LVDS5_p|
|16|PIN_57|PIO14/LVDS6_n|
|17|PIN_58|PIO15/LVDS6_p|
|18|PIN_59|PIO16/LVDS7_n|
|19|PIN_60|PIO17/LVDS7_p|
|20| |GND|
|21| |GND|
|22|PIN_120|PIO18|
|23|PIN_121|PIO19|
|24|PIN_122|PIO20|
|25|PIN_124|PIO21|
|26|PIN_126|BOOT_SEL/PIO22|
|27|PIN_127|PIO23|
|28|PIN_130|PIO24|
|29|PIN_131|PIO25|
|30|PIN_132|PIO26|
|31|PIN_134|PIO27|
|32| |ADC REFGND(GND�ɐڑ�)|
|33|PIN_6|AIN1/PIO28|
|34|PIN_7|AIN2/PIO29|
|35|PIN_8|AIN3/PIO30|
|36|PIN_10|AIN4/PIO31|
|37|PIN_11|AIN5/PIO32|
|38|PIN_12|AIN6/PIO33|
|39| |ADC VREF(���g�p���͉���܂���REFGND�ɐڑ�)|
|40| |3.3V�d��|

- LVDS�g�p���ɂ�3�ԃs��(VCCIO����)�ɂ�2.5V��������B
- 3.3V-LVTTL�܂���3.3V-CMOS�g�p���ɂ�3�ԃs���ɂ�3.3V��������B
- 3.0V-CMOS�g�p���ɂ�3�ԃs���ɂ�3.0V��������B
- ADC�ɊO�����t�@�����X�d�����������Ďg���ꍇ�ɂ�39�ԃs���Ƀ��t�@�����X�d����������B
- 26�ԃs���̓u�[�g����BOOT_SEL�s���Ƃ��ē��삷��B�܂��{�[�h����10k����3.3V�փv���A�b�v����Ă��邽��I/O�s���Ƃ��Ďg���ꍇ�ɂ͒��ӂ��邱�ƁB


JTAG�R�l�N�^
------------

|�ԍ�|FPGA�s��|���e|
|---|---|---|
|1|PIN_18|TCK|
|2| |GND|
|3|PIN_20|TDO|
|4| |3.3V|
|5|PIN_16|TMS|
|6| |n.c|
|7| |n.c|
|8|PIN_15|JTAG_EN|
|9|PIN_19|TDI|
|10| |GND|

- TDI,TMS,JTAG_EN��10k����3.3V�փv���A�b�v����Ă���B
- TCK��1k����GND�փv���_�E������Ă���B



��H�}
======

��H�}����уv���W�F�N�g�̃T���v���̓��|�W�g�����Q�Ƃ��Ă��������B



���C�Z���X
=========

SODALITE Hardware is released under the [Creative Commons,CC BY 2.1 JP](http://creativecommons.org/licenses/by/2.1/jp/legalcode)  
![CC BY](http://creativecommons.jp/wp/wp-content/uploads/2009/10/by.png)  

