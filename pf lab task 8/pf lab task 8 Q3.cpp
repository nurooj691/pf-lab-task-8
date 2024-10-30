#include<stdio.h>
int main(){
	int row;
	printf("enter the number of rows:\n");
	scanf("%d", &row);
	for(int i=row; i>=1; i--){
		for(int k=row; k>i; k--){
			printf(" ");
		}
		for(int j=i; j>=1; j--){
		printf("%d ", j);
	}
	printf("\n");
	}
	for(int i=2; i<=row; i++){
		for(int k=row; k>i; k--){
		printf(" ");
	}
		for(int j=i; j>=1; j--){
			printf("%d ", j);
		}
		printf("\n");
	}
	
}