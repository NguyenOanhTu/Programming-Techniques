#include<stdio.h>
int LinearSearch(int A[], int N, int X){
	int index = -1;
	for(int i = 0; i < N; i++){
		if(A[i] == X)
			index = i;
	}
	return index;
}
int BinarySearch(int A[], int N, int X){
	int index = -1;
	int mid, begin = 0, end = N-1;
	while(begin <= end){
		printf("begin = %d, end = %d\n", begin, end);
		mid = (begin + end)/2;
		if(A[mid] == X){
			index = mid;
			break;
		}
		else if(A[mid] < X)
			begin = mid + 1;
		else // A[mid] > x
			end = mid - 1;
	}
	return index;
}
int main() {
//	int A[] = {7, 14, 1, 4, 5, 8, 9, 2};
	int A[] = {1, 2, 4, 5, 7, 8, 9, 14};
	int N = sizeof(A)/sizeof(A[0]);
	int X = 14;
	
	int index = BinarySearch(A, N, X);
	
	if(index > -1)
		printf("Found X = %d at index %d", X, index);
	else
		printf("Cannot find X = %d", X);
	
	return 0;
}
