#include "stdio.h" 載入標頭檔(標準輸出輸入函式)
#include "stdlib.h"         (標準函式庫)
int main(void)  /*int為整數 mian為名稱 void為不指定數字*/
{
	float x=10.1, y=20.2;  /*int為整數 x為名稱 x值為10 並開一個記憶體空間給x*/ 
	float A[10]; /*開10個記憶體位址*/
	int *p = &x; /* *p->*為指標 指向某個資料的記憶體位址 */
	int *q = &y;
	printf("x的值為:%f\n", x);
	printf("y的值為:%f\n", y);
	printf("x的位址為:%d\n", &x); /*&x 顯示x記憶體位址*/
	printf("y的位址為:%d\n", &y);
	printf("p的值為:%d\n", p);
	printf("q的值為:%d\n", q);
	for(int i=0; i<10; i++){
		printf("陣列A[%d]的位址為:%d\n", i, &A[i]); /*show出 A[0]-A[9]記憶體位址*/
	}
	return 0;
}


/*  char=1byte  %d
   short=2byte  %d
     int=4byte  %d
   float=4byte  %f (可放入小數)
  double=8byte  %f */
