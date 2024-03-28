#include<stdio.h>
long SUM(int N){
	if(N == 0)
		return 0;
	return SUM(N-1) + (N);
}
int main() {
	int N;
	do{
		printf("Input N = ");
		scanf("%d", &N);
	}while(N<0);
	long s = SUM(N);
	printf("\nSum %d is %d", N, s);
	return 0;
}
