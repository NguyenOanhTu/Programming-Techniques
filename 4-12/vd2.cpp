#include<stdio.h>
long Factorial(int N){
	printf("\nN = %d, Fact(%d) * %d", N, N-1, N);
	if(N == 0)
		return 1;
	return Factorial(N-1)*N;
}
int main() {
	int N ;
	do{
		printf("Input N = ");
		scanf("%d", &N);
	}while(N<0);
	long fact = Factorial(N);
	printf("\nFactorial of %d is %d", N, fact);
	return 0;
}
