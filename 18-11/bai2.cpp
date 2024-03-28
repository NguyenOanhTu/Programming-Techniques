#include<stdio.h>
int main(){
	float scores[3][30];
	int row, col;
	do{
		printf("Input row and col: "); scanf("%d %d", &row, &col);
	}while(row < 0 || row > 3 || col < 0 || col > 30);
	for(int i = 0; i < row; i++){
		printf("Input score of course %d: ",i);
		for(int j = 0; j < col; j++){
			scanf("%f", &scores[i][j]);	
		}
	}
	printf("\n");
	for(int i = 0; i < row; i++){
		printf("Scores of student %d: ",i);
		for(int j = 0; j < col; j++)
			printf("%.1f ", scores[i][j]);
			printf("\n");
	}

	return 0;
}




