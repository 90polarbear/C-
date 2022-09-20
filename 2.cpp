#include "stdio.h"
#include "stdlib.h"
int main(void)
{
	int A[3][3]; 二維陣列資料
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("陣列A[%d][%d]的位址為:%d", i,j, &A[i][j]);		
		}
		printf("\n");
	}
	return 0;
}
