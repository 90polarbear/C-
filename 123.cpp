#include "stdio.h" 
#include "stdlib.h"
int main (void)
{
	int A[10];
	int B=0;
	for(int i=0; i<10;i++) {
		printf("��JA[%d]����:",i);
		scanf("%d",&A[i]);
		 B+=A[i];
	} 
	printf("�`�M�Ȭ�:%d",B); 
	return 0;
 } 
