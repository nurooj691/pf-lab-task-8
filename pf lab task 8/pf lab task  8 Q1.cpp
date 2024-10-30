#include<stdio.h>
int main(){
	int matrix[3][3];
	printf("enter the scores of all participants for all activities:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("the matrix is:\n");
		for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0; i<3; i++){
		int participantscore =0;
		for(int j=0; j<3; j++){	
			participantscore += matrix[i][j];
		}
		printf("the sum of participant %d is %d\n", i, participantscore);
		}
		
		for(int i=0; i<3; i++){
			int activityscore =0;
		for(int j=0; j<3; j++){
			activityscore += matrix[j][i];
		}
		printf("the sum of activity %d is %d\n", i, activityscore);
		}
		
}