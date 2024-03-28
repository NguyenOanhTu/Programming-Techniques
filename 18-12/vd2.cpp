#include<stdio.h>
//void swap(int &a, int &b){
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void BubbleSort(int A[], int N){
//	int i, j;
//	for(i = 0; i < N-1; i++){
//		for(j = i+1; j < N; j++)
//			if(A[i] > A[j])
//				swap(A[i], A[j]);
//	}
//}

void InsertionSort(int A[], int N){
	int i, j;
	for(i = 1; i < N; i++){
		int key = A[i];
		j = i - 1;
		while(j >= 0 && A[j] > key){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
	}
}
int main() {
	int A[] = {40, 10, 80, 50, 20, 5, 90, 2};
	int N = sizeof(A)/sizeof(int);
	int i, j;
	
	printf("Before sorting A[] = ");
	for(i = 0; i <N; i++){
		printf("%d ", A[i]);
	}
	
	InsertionSort(A, N);
	
	printf("\nAfter sorting A[] = ");
	for(i = 0; i < N; i++){
		printf("%d ", A[i]);
	}

	return 0;
}
