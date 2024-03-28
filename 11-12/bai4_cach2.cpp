#include<stdio.h>
#include<string.h>
int main() {
	int A[2][3] = {{3, 4, 7}, {6, 2, 5}};
	printf("\nArray A = \n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	// Write matrix to binary file
	FILE *fBin = fopen("20DTHQB1.bin", "wb");
	if(fBin != NULL){
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 3; j++)
				fwrite(&A[i][j], sizeof(int), 1, fBin);
			printf("\n");
		}
		fclose(fBin);
	}
	else{
		printf("Binary File open fail.");
	}
	// Read matrix from binary file
	int B[2][3];
	FILE *fbRead = fopen("20DTHQB1.bin", "rb");
	if(fbRead != NULL){
		for(int i = 0; i < 2; i++)
			for(int j = 0; j < 3; j++)
				fread(&B[i][j], sizeof(int), 1, fbRead);
		fclose(fbRead);
	}
	else{
		printf("Binary File open fail.");
	}
	
	printf("\nArray B = \n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++)
			printf("%d ", B[i][j]);
		printf("\n");
	}
	
//	FILE *f = fopen(binFile, "rb");
//	if(f != NULL){
//		int N;
//		fread(&N, 1, sizeof(int), f);
//		printf("N = %d", N);
//		fclose(f);
//	}
//	else{
//		printf("Read binary file fail");
//	}
	
	return 0;
}
