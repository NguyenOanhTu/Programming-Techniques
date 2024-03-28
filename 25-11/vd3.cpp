#include<stdio.h>
#include<stdlib.h>

int main() {	
	int *ip;
	ip = (int*) malloc(20);
	for(int i = 0; i < 5; i++){
		printf("Input element %d: ", i);
		scanf("%d", ip+i);
	}
	printf("\nList of elements: ");
	for(int i = 0; i < 5; i++){
		printf("%d ", *(ip+i));
	}

	free(ip);
	return 0;
}
