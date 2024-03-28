#include<stdio.h>
int main() {
//	printf("Hello all students in 20DTHQB1!");
	// Open file
	FILE *f = fopen("20DTHQB1_out.txt", "w");
	if(f != NULL){
		// Operation on file
		fputc('T', f);
		fputs("\nHello 20DTHQB1!", f);
		int date = 11;
		 printf(   "\n%d", date);
		fprintf(f, "\n%d", date);
		float temperature = 25.8;
		 printf(   "\n%.3f", temperature);
		fprintf(f, "\n%.3f", temperature);
		// Close file
		fclose(f);
	}
	else{
		printf("File open fail.");
	}
	
	
	return 0;
}
