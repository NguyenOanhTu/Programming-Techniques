#include<stdio.h>
#include<stdlib.h>
struct BOOK{
    char title[20];
    float price;
    int pages;
};

int main() {
//	printf("\nThoLTN: size of float %d\n", sizeof(float));
//	printf("\nThoLTN: size of int %d\n", sizeof(int));
//	printf("\nThoLTN: size of char %d\n", sizeof(char[10]));
//	printf("\nThoLTN: size of BOOK %d\n", sizeof(struct BOOK));
	struct BOOK *B;
	int N = 2;
	B = (struct BOOK *)malloc(N*sizeof(struct BOOK));
	for(int i = 0; i < N; i++){
		printf("\nInput book %d:\n", i);
		printf("Input title:"); fflush(stdin);
		gets((B+i)->title);
		printf("Input price: "); fflush(stdin);
		scanf("%f", &(B+i)->price);
		printf("Input number of pages: "); fflush(stdin);
		scanf("%d", &(B+i)->pages);
	} 
	
	for(int i = 0; i < N; i++)
		printf("\nBook %d \"%s\" has %d pages and costs %f dollas.", 
						i, (B+i)->title, (B+i)->pages, (B+i)->price);
		
	free(B);
	
	return 0;
}
