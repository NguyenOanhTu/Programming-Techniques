#include <stdio.h>
#include<stdlib.h>
int main(){
	int **ip, M, N, S;
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
	ip = (int**) malloc(M*sizeof(int));
	for(int i = 0; i < M; i++){
		ip[i] = (int*) malloc(N*sizeof(int));
	}
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			printf("matrix[%d][%d] = ", i+1, j+1);
			scanf("%d", &ip[i][j]);
		}
	}
	printf("\nList of elements: \n");
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
		printf("%d ", ip[i][j]);	
		}
		printf("\n");
	}
	S = 0;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			S += ip[i][j];
		}
	} 
	printf("\nthe sum of all elements in the matrix  is %d", S);
	free(ip);
	return 0;
}
