#include<stdio.h>
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int A[] = {40, 50, 80, 20, 10};
	int N = 5;
	int i, j;
	
	printf("Before sorting A[] = ");
	for(i = 0; i < N; i++){
		printf("%d ", A[i]);
	}
	
	for(i = 0; i < N-1; i++){
		for(j = i+1; j < N; j++)
			if(A[i] > A[j])
				swap(A[i], A[j]);
	}
	
	printf("\nAfter sorting A[] = ");
	for(i = 0; i < 5; i++){
		printf("%d ", A[i]);
	}

	return 0;
}
