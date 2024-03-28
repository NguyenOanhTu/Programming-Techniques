#include<stdio.h>
int countPos(int A[], int N){
	if(N <= 0)
		return 0;
	if(A[N-1] > 0)
		return countPos(A, N-1) + 1;
	else
		return countPos(A, N-1) + 0;
}
int findMax(int A[], int N){
	printf("\nN = %d", N);
	if(N > 0){
		int max = findMax(A, N-1);
		if(max < A[N-1])
			max = A[N-1];
		return max;
	}
	return A[0];	
}
int main() {
	int A[] = {-5, -8, -6, -7, -10, -3};
	int N = sizeof(A)/sizeof(A[0]);	
//	int max = findMax(A, -1); // ThoLTN: I will cause an error here
//	printf("Max of array A is %d", max);
	if(N > 0){
		int max = findMax(A, N);
		printf("\nMax of array A is %d", max);
	}
	else
		printf("\nArray A is empty, we cannot find max");

//	int count = countPos(A, N);
//	printf("\nNumber of positive integers: %d", count);
	return 0;
}
