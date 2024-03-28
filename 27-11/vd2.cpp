#include<stdio.h>
#include<stdlib.h>
int main(){	
	int *ip;
	int N;
	do{
		printf("Input N: ");
		scanf("%d", &N); 
	}while(N <= 0 || N > 100);
		
	ip = (int*) malloc(N*sizeof(int));
	for(int i = 0; i < N; i++){
		printf("Input element %d: ", i);
		scanf("%d", ip+i);
	}
	printf("\nList of elements: ");
	for(int i = 0; i < N; i++){
		printf("\n%u: %d", ip+i, *(ip+i));
	}
	
	N = 5;	
//	ip = (int*) malloc(N*sizeof(int)); // Do not allocate new memory like this, pls realloc instead
	ip = (int*) realloc(ip, N*sizeof(int));
	printf("\nList of elements: ");
	for(int i = 0; i < N; i++){
		printf("\n%u: %d", ip+i, *(ip+i));
	}
	
	free(ip); // Free the memory that ip points to
	return 0;
}
