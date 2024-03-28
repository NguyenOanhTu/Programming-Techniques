#include<stdio.h>
int main(){
int matrix[10][10], M, N;
do{
printf("Input M and N: "); scanf("%d %d", &M, &N);
}while(M < 0 || M > 10 || N < 0 || N > 10);
printf("Input matrix: ");
for(int i = 0; i < M; i++)
for(int j = 0; j < N; j++)
scanf("%d", &matrix[i][j]);
for(int i = 0; i < M; i++){
for(int j = 0; j < N; j++)
printf("%d ", matrix[i][j]);
printf("\n");
}
return 0;
}
