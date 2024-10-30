#include<stdio.h>
int main(){
	int matrix[4][4];
	printf("enter the scores of all 4 students:\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			scanf("%d", &matrix[i][j]);
			
		}
	}
	printf("the matrix is:\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
		printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(matrix[i][j]<0)
			matrix[i][j]=0;	
		}
	}
	printf("the new matrix is:\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("%d ", matrix[i][j]);	
		}
		printf("\n");
	}
	
}