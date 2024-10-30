#include<stdio.h>
int main(){
	int matrix[3][3];
	printf("enter the scores of all participants for all rounds:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("original matrix is:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
		for(int i=0; i<3; i++){
			int temp[3];
		for(int j=0; j<3; j++){
			temp[j] = matrix[j][i];
		}
		for(int k=0; k<3-1; k++){
		for(int j=0; j<3-1-k; j++){
			if(temp[j]>temp[j+1]){
				int swap = temp[j];
				temp[j] = temp[j+1];
				temp[j+1] = swap;
			}
		}
	}
		for(int j=0; j<3; j++){
			matrix[j][i] = temp[j];
		}	
	}
	printf("new matrix after sorting is:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
}