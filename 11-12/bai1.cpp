#include<stdio.h>
int main() {
	// Open file
	FILE *fWrite = fopen("20DTHQB1_bai1.txt", "w");
	if(fWrite != NULL){
		int N, A[10];
		printf("Input N = "); scanf("%d", &N);
		for(int i = 0; i < N; i++){
			printf("A[%d] = ", i);
			scanf("%d", &A[i]);
		}
		fprintf(fWrite, "%d\n", N);
		for(int i = 0; i < N; i++)
			fprintf(fWrite, "%d ", A[i]);
		// Close file
		fclose(fWrite);
	}
	else{
		printf("File open fail.");
	}
	// Open file
	FILE *fRead = fopen("20DTHQB1_bai1.txt", "r");
	if(fRead != NULL){
		int N, A[10];
		fscanf(fRead, "%d", &N);
		for(int i = 0; i < N; i++){
			fscanf(fRead, "%d", &A[i]);
		}
		printf("\nArray from file is A[%d]: ", N);
		for(int i = 0; i < N; i++)
			printf("%d ", A[i]);
		// Close file
		fclose(fRead);
	}
	else{
		printf("File open fail.");
	}
	
	return 0;
}
