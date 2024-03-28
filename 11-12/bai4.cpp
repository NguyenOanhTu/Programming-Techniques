#include<stdio.h>
int main() {
	FILE *fWrite = fopen("matrix.bin", "wb");
	if(fWrite != NULL){
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
	fwrite(&M, 1, sizeof(int), fWrite);
	fwrite(&N, 1, sizeof(int), fWrite);
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
		fwrite(&matrix[i][j], 1, sizeof(int), fWrite);	
		}
		fprintf(fWrite,"\n");
	}
		fclose(fWrite);
	}
	else{
		printf("File open fail.");
	}
	FILE *fRead = fopen("matrix.bin", "rb");
	if(fRead != NULL){
	int matrix[10][10];
	int M, N;
	printf("Read the content of file 'matrix.bin'\n");
	fread(&M, 1, sizeof(int), fRead);
	fread(&N, 1, sizeof(int), fRead);
	printf("M = %d, N = %d\n", M, N);
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
		fread(&matrix[i][j], 1, sizeof(int), fRead);
		printf("matrix[%d][%d] = %d\n",i ,j ,matrix[i][j]);
		}
	}
		fclose(fRead);
	}
	else{
		printf("File open fail.");
	}
	return 0;
}
