#include "stdio.h" 
#include "stdlib.h"
int main (void)
{
	char name [5][10];
	for(int i=0;i<5;i++)
	{
		printf("��J�� %d�Ӿǥͩm�W:",i+1);
		scanf("%s",name[i] );
	}
		for(int i=0;i<5;i++)
	{
		printf("�� %d�Ӿǥͩm�W:%s\n",i+1,name[i]);
	}

	return 0;
 } 
