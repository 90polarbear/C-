#include "stdio.h" 
#include "stdlib.h"
int main (void)
{
	struct all{
			char name [10];  //姓名 
			int c;           //國文 
			int e;           //英文 
			int m;			 //數學 
			int t;			 //總分 
	};
		all student;
	
		printf("輸入學生姓名:");
		scanf("%s",student.name);  //有陣列型態無須加入&就可顯示記憶體位址 
		printf("輸入國文成績:");
		scanf("%d",&student.c);
		printf("輸入英文成績:");
		scanf("%d",&student.e);
		printf("輸入數學成績:");
		scanf("%d",&student.m);
		student.t=student.c+student.e+student.m;
		printf("姓名:%s 國文:%d 英文:%d 數學:%d 總分:%d",student.name,student.c,student.e,student.m,student.t);
	

	return 0;
 } 
