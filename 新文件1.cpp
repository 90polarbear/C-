#include "stdio.h" 
#include "stdlib.h"
int main (void)
{
	char name [5][10];
	for(int i=0;i<5;i++)
	{
		printf("輸入第 %d個學生姓名:",i+1);
		scanf("%s",name[i] );
	}
		for(int i=0;i<5;i++)
	{
		printf("第 %d個學生姓名:%s\n",i+1,name[i]);
	}

	return 0;
 } 
