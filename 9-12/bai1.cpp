#include<stdio.h>
int countPos(int A[], int N){
	if(N <= 0)
		return 0;
	if(A[N-1] > 0)
		return countPos(A, N-1) + 1;
	else
		return countPos(A, N-1) + 0;
}
int main() {
	int A[] = {5, -8, 6, 7, -1, -3};
	int N = sizeof(A)/sizeof(A[0]);	
	int count = countPos(A, N);
	printf("\nNumber of positive integers: %d", count);
	return 0;
}
