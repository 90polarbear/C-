#include "stdio.h"
#include "stdlib.h"
int main(void)  /*int����� mian���W�� void�������w�Ʀr*/
{
	char x=10, y=20;  /*int����� x���W�� x�Ȭ�10 �ö}�@�ӰO����Ŷ���x*/ 
	char A[10]; /*�}10�O�����}*/
	printf("x���Ȭ�:%d\n", x);
	printf("y���Ȭ�:%d\n", y);
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
  double=8byte  %f */
