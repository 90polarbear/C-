#include "stdio.h"
#include "stdlib.h"
int main(void)  /*int����� mian���W�� void�������w�Ʀr*/
{
	float x=10.1, y=20.2;  /*int����� x���W�� x�Ȭ�10 �ö}�@�ӰO����Ŷ���x*/ 
	float A[10]; /*�}10�ӰO�����}*/
	printf("x���Ȭ�:%f\n", x);
	printf("y���Ȭ�:%f\n", y);
	printf("x����}��:%d\n", &x); /*&�O�����}*/
	printf("y����}��:%d\n", &y);
	for(int i=0; i<10; i++){
		printf("�}�CA[%d]����}��:%d\n", i, &A[i]); /*show�X A[0]-A[9]�O�����}*/
	}
	return 0;
}


/*  char=1byte  %d
   short=2byte  %d
     int=4byte  %d
   float=4byte  %d (�i��J�p��)
  double=8byte  %f */
