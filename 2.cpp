#include "stdio.h"
#include "stdlib.h"
int main(void)
{
	int A[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("°}¦CA[%d][%d]ªº¦ì§}¬°:%d", i,j, &A[i][j]);		
		}
		printf("\n");
	}
	return 0;
}
