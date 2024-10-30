#include<stdio.h>
int main(){
	int m, n, p, q;
	while(1){
		printf("both the matrix must be of same order in order to perform addition:\n");
	printf("enter the rows of 1st matrix:\n");
	scanf("%d", &m);
	printf("enter the colums of 1st matrix:\n");
		scanf("%d", &n);
	printf("enter the rows of second matrix:\n");
		scanf("%d", &p);
	printf("enter the columns of second matrix:\n");
		scanf("%d", &q);
		if(m==p&&n==q){
			int matrix1[m][n], matrix2[p][q];
			printf("enter the elements of matrix1:\n");
		for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
				scanf("%d", &matrix1[i][j]);
				}
			}
				printf("enter the elements of matrix2:\n");
			for(int i=0; i<p; i++){
				for(int j=0; j<q; j++){
				scanf("%d", &matrix2[i][j]);
				}
			}
		printf("matrix 1 is:\n");
		for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
				printf("%d ", matrix1[i][j]);
				}
				printf("\n");
			}
			printf("matrix 2 is:\n");
		for(int i=0; i<p; i++){
				for(int j=0; j<q; j++){
				printf("%d ", matrix2[i][j]);
				}
				printf("\n");
			}
		
			int sum[m][n];
			for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
					sum[i][j] = matrix1[i][j] + matrix2[i][j];
				}
			}
				printf("the sum matrix is:\n");
			for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
				printf("%d ", sum[i][j]);
				}
				printf("\n");
			}
			break;
		}
	
	}	
}