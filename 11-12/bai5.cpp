#include<stdio.h>
struct BOOK{
    char title[10];
    float price;
    int pages;
};
int main() {
	FILE *fWrite = fopen("Book.txt", "w");
	if(fWrite != NULL){
	struct BOOK b[100];
	int i, N;
	printf("Input number of books: ");
	scanf("%d", &N);
	fprintf(fWrite, "Number of books: %d\n", N);
	for(int i = 0; i < N; i++){
		printf("Input book title: ");
		fflush(stdin);
		gets(b.title);
		fflush(stdin);
		printf("Input book price: ");
		scanf("%f", &b.price);
		printf("Input number of pages: ");
		scanf("%d", &b.pages);
	}
	for(i = 0; i < N; i++)
		fprintf(fWrite,"\n%s:\t\t\t\t%d\t\t$%.1f", b.title, b.pages, b.price);
	}
		fclose(fWrite);
	}
	else{
		printf("File open fail.");
	}
//	FILE *fRead = fopen("Book.txt", "r");
//	if(fRead != NULL){
//	
//		fclose(fRead);
//	}
//	else{
//		printf("File open fail.");
//	}
	return 0;
}
