#include<stdio.h>

int main() {	
	int A[10] = {5,12,31,14,25,6,17,20};
	int *ip;
	printf("\nAddress of A = %u", A);
	for(int i = 0; i < 8; i++){
		printf("\nAddress of A[%d] = %u", i, &A[i]);
	}
	ip = &A[3];
	printf("\nip point to address %u has value %d", ip, *ip);
	ip++;
	printf("\nip point to address %u has value %d", ip, *ip);

	ip = A;
	printf("\nPrinting array with pointer: ");
	for(int i = 0; i < 8; i++){
		printf("%d ", *(ip + i));
	}
	return 0;
}
