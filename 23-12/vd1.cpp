#include<stdio.h>
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
int Partition(int A[],int L, int H){
	int pivot = A[H];
	int i = (L-1);
	for(int j = L; j < H; j++){
		if(A[j]<=pivot){
			i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[H]);
	return (i + 1);
}
void QuickSort(int A[],int L,int H){
	if (L<H){
		int pi = Partition(A,L,H);
		QuickSort(A,L,pi -1);
		QuickSort(A,pi+1,H);
	}
}
int main(){
	int A[] = {10, 80, 30, 90, 40, 50, 70};
	int N = sizeof(A)/sizeof(A[0]);
	
	printf("\nArray before sort:\t");
	for(int i = 0; i < N; i++){
		printf("%d ", A[i]);
	}
	
	QuickSort(A,0,6);
	
	printf("\nArray after sort:\t");
	for(int i = 0; i < N; i++){
		printf("%d ", A[i]);
	}
	return 0;
}
