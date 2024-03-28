#include<stdio.h>
#include<stdlib.h>

int main() {
	int *A[3];
	for(int i = 0; i < 3; i++){
		A[i] = (int*)malloc(4*sizeof(int));
	}
	// Input value for all elements
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			printf("Input A[%d][%d] = ", i, j);
			scanf("%d", (A[i]+j)); // scanf("%d", &A[i][j]);
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			printf("\nValue of A[%d][%d] = ", i, j);
			printf("%d", *(A[i]+j)); 
		}
	}
	
	return 0;
}
