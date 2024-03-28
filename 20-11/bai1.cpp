#include <stdio.h>
int main(){
	int matrix[10][10];
	int M, N;
	do{
		printf("Input M = ");
		scanf("%d", &M);
	}while(M <= 0 || M >= 10);
	do{
		printf("Input N = ");
		scanf("%d", &N);
	}while(N <= 0 || N >= 10);
	printf("M = %d, N = %d", M, N);
	printf("\nInput matrix: \n");
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			printf("matrix[%d][%d] = ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
		printf("%d ", matrix[i][j]);	
		}
		printf("\n");
	}
	int max = matrix[0][0];
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			if(max < matrix[i][j])
				max = matrix[i][j];
		}
	}
	printf("\nMax = %d", max);
	int min = matrix[0][0];
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			if(min > matrix[i][j])
				min = matrix[i][j];
		}
	}
	printf("\nMin = %d", min);
	return 0;
}
