#include<stdio.h>
int main() {
//	printf("Hello all students in 20DTHQB1!");
	// Open file
	FILE *f = fopen("20DTHQB1_out.txt", "r");
	if(f != NULL){
		// Operation on file
		char c = fgetc(f);
		printf("\nCharacter c = %c", c);
		fgetc(f); // Since we have new line here
		char str[76];
		fgets(str, 76, f);
		printf("\nString str = %s", str);
		int N;
		fscanf(f, "%d", &N);
		printf("\nInteger N = %d", N);
		float M;
		fscanf(f, "%f", &M);
		printf("\nFloat M = %.3f", M);
		// Close file
		fclose(f);
	}
	else{
		printf("File open fail.");
	}
	
//	// Open file
//	FILE *f = fopen("20DTHQB1_out.txt", "w");
//	if(f != NULL){
//		// Operation on file
//		fputc('T', f);
//		fputs("\nHello 20DTHQB1!", f);
//		int date = 11;
//		 printf(   "\n%d", date);
//		fprintf(f, "\n%d", date);
//		float temperature = 25.8;
//		 printf(   "\n%.3f", temperature);
//		fprintf(f, "\n%.3f", temperature);
//		// Close file
//		fclose(f);
//	}
//	else{
//		printf("File open fail.");
//	}
	
	return 0;
}
