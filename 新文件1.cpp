#include "stdio.h" 
#include "stdlib.h"
int main (void)
{
	struct all{
			char name [10];  //�m�W 
			int c;           //��� 
			int e;           //�^�� 
			int m;			 //�ƾ� 
			int t;			 //�`�� 
	};
		all student;
	
		printf("��J�ǥͩm�W:");
		scanf("%s",student.name);  //���}�C���A�L���[�J&�N�i��ܰO�����} 
		printf("��J��妨�Z:");
		scanf("%d",&student.c);
		printf("��J�^�妨�Z:");
		scanf("%d",&student.e);
		printf("��J�ƾǦ��Z:");
		scanf("%d",&student.m);
		student.t=student.c+student.e+student.m;
		printf("�m�W:%s ���:%d �^��:%d �ƾ�:%d �`��:%d",student.name,student.c,student.e,student.m,student.t);
	

	return 0;
 } 
