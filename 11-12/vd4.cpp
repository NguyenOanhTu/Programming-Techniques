#include<stdio.h>
int main() {
FILE *f = fopen("20DTHQB1_bai1.txt", "r");
	if(f != NULL){
		int N, A[10];
		fscanf(f, "%d", &N);
		for(int i = 0; i < N; i++){
			fscanf(f, "%d", &A[i]);
		}
		printf("\nArray A[%d]: ", N);
		for(int i = 0; i < N; i++)
			printf("%d ", A[i]);
		// Close file
		fclose(f);
	}
	else{
		printf("File open fail.");
	}
	return 0;
}
