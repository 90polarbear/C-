#include "stdio.h" 
#include "stdlib.h"
int main (void)
{
	int A[10];
	int B=0;
	for(int i=0; i<10;i++) {
		printf("輸入A[%d]的值:",i);
		scanf("%d",&A[i]);
		 B+=A[i];
	} 
	printf("總和值為:%d",B); 
	return 0;
 } 
