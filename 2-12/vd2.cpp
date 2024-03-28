#include<stdio.h>
#include<stdlib.h>

int main() {
	printf("\nThoLTN: Size of an integer pointer: %d\n", sizeof(int*));
	int **A;
	int M = 2, N = 3;
	A = (int**)malloc(3*sizeof(int*));
	for(int i = 0; i < M; i++){
		*(A+i) = (int*)malloc(N*sizeof(int));
	}
	// Input value for all elements
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			printf("Input A[%d][%d] = ", i, j);
			scanf("%d", *(A+i)+j); // scanf("%d", &A[i][j]);
		}
	}
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			printf("\nValue of A[%d][%d] = ", i, j);
			printf("%d", *(*(A+i)+j) ); 
		}
	}
	printf("\nMatrix:\n");
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			printf("%d ", *(*(A+i)+j) ); 
		}
		printf("\n");
	}
	long sum = 0;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++)
			sum += *(*(A+i)+j);
	}
	printf("\nSum of elements in array is %d", sum);
	for(int i = 0; i < M; i++)
		free(*(A+i));
	free(A);
	return 0;
}
