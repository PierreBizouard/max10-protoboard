#include <stdio.h>
#include <stdlib.h>
#include <system.h>
#include <io.h>
#include <sys/alt_cache.h>
#include "nd_lib/nd_egl.h"
#include "testuty.h"

#define OBJ_MAX			(150)		// ��������I�u�W�F�N�g�̌� 


typedef struct{		// �A�̃p�����[�^�\����
	int	x;				// �A�̒��S���W
	int	y;
	int	r;				// �A�̌��݂̔��a
	int	mr;				// �A�����ł��锼�a�i������0�̏ꍇ�͔j�􂵂��A�j
	int	c;				// �A�̐F
} circle_param;


void awa(alt_u16 *p_fb_top)
{
	int i,pg,count;
	nd_u32 page[2];
	circle_param cp[OBJ_MAX];


	// �O���t�B�b�N������ 
	page[0] = (nd_u32)(p_fb_top + 0);

	nd_GsVgaSetBuffer(page[0]);
	nd_GsEglPage(page[0], page[0], 0);

	// �`��y�[�W���N���A 
	nd_GsVgaScanOn();

	nd_color(nd_COLORGRAY, 0, 256);
	nd_boxfill(0, 0, window_xmax, window_ymax);

	nd_color(nd_COLORWHITE, 0, 256);
	nd_line(0,0, 0,479);
	nd_color(nd_COLORRED, 0, 256);
	nd_line(639,0, 639,479);
	nd_color(nd_COLORLIGHTGREEN, 0, 256);
	nd_line(0,0, 639,0);
	nd_color(nd_COLORBLUE, 0, 256);
	nd_line(0,479, 639,479);

//	nd_GsVgaScanOn();


	// �p�����[�^��������
	for(i=0 ; i<OBJ_MAX ; i++) cp[i].mr=0;

	pg = 0;

	// �A�\�� 
	while(1){

		// �A��`�� 
		for(i=0 ; i<OBJ_MAX ; i++){
			if(cp[i].mr == 0) {		// �A�𐶐�
				cp[i].x = rand() % window_xsize;
				cp[i].y = rand() % window_ysize;
				cp[i].c = rand();
				cp[i].mr=(rand() & 100)+10;
				cp[i].r = 1;

			} else {				// �A�����񂾂�傫������
//				nd_color(nd_COLORBLACK, 0, 256);
//				nd_circle(cp[i].x, cp[i].y, cp[i].r);

				if(cp[i].r < cp[i].mr) {
					nd_color(cp[i].c++, 0, 256);
					nd_circle(cp[i].x, cp[i].y, cp[i].r++);
				} else {
					cp[i].mr = 0;
				}
			}
		}

		// VSYNC�҂� 
//		nd_wait_vsync();

//		nd_GsEglPage(page[1-pg], page[pg], 1);
//		pg = 1 - pg;

		count++;
		IOWR(LED_BASE, 0, (count>>3) & 1);
	}
}


int main(void)
{
	alt_u16 *pFrameBuffer;

	systeminit();
	nd_GsVgaInit();

	pFrameBuffer = (alt_u16 *)alt_uncached_malloc(na_VRAM_size);
//	pFrameBuffer = (alt_u16 *)malloc(na_VRAM_size);

	awa( pFrameBuffer );	// �A�h���X��0���Ɩ����̈�(null�|�C���^)�ƌ��Ȃ����̂Œ��� 

	return 0;
}
