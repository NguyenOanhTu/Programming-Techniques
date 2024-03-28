#include<stdio.h>
long SUM(int A[], int N){
	printf("\nN = %d, SUM(A, %d) + A[%d]", N, N-1, N-1);
	if(N <= 0)
		return 0;
	return SUM(A, N-1) + A[N-1];
}
int main() {
	int A[10] = {5, 7, 8, 9, 1, 2};
	int N = 6;
	long sum = SUM(A, N);
	
	printf("\nSum of array is %d", sum);
	return 0;
}
