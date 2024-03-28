#include <stdio.h>
int main(){
	float scores[20][30], S;
	int N, M, pass, fail;
	do{
		printf("Input N  = ");
		scanf("%d", &N);
	}while(N <= 0 || N >= 20);
	do{
		printf("Input M = ");
		scanf("%d", &M);
	}while(M <= 0 || M >= 30);
	printf("students = %d, the number of courses = %d", N, M);
	printf("\nInput scores: \n");
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			do{
				printf("Score of course %d - Student %d: ", j, i);
				scanf("%f", &scores[i][j]);
			}while(scores[i][j] < 0 || scores[i][j] > 10);
		}
	}
	for(int i = 0; i < N; i++){
		printf("\nScores of students %d: ",i);
		for(int j = 0; j < M; j++){
		printf("%.1f ", scores[i][j]);	
		}
	}
	printf("\n");
	for(int i = 0; i < N; i++){
		S = 0;
		for(int j = 0; j < M; j++){
			S += scores[i][j];
		}
		printf("\nAverage score of student %d is %.2f", i, S/M);
	} 
	printf("\n");
	for(int i=0; i < N; i++){
		pass = 0; fail = 0;
		for(int j = 0; j < M; j++){
			if (scores[i][j] >= 5)
				pass++;
			else
				fail++;
		}
		printf("\nStudent %d - passed %d and failed %d",i, pass, fail);
	}
	return 0;
}

 
 
