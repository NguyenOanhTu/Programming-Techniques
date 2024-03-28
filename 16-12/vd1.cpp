#include<stdio.h>
int main() {
	int A[] = {7, 14, 1, 4, 5, 8, 9, 2};
	int N = sizeof(A)/sizeof(A[0]);
	int X = 5;
	
	int index = -1;
	for(int i = 0; i < N; i++){
		if(A[i] == X)
			index = i;
	}
	if(index > -1)
		printf("Found X = %d at index %d", X, index);
	else
		printf("Cannot find X = %d", X);
	
	return 0;
}
