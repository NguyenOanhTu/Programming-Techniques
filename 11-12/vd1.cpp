#include<stdio.h>
int main() {
//	printf("Hello all students in 20DTHQB1!");
	// Open file
	FILE *f = fopen("20DTHQB1_out.txt", "w");
	// Operation on file
	fputc('T', f);
	fputs("\nHello all students in 20DTHQB1!", f);
	int date = 11;
	 printf(   "\nToday is %d-th", date);
	fprintf(f, "\nToday is %d-th", date);
	float temperature = 25.8;
	 printf(   "\nTemperature is %f", temperature);
	fprintf(f, "\nTemperature is %f", temperature);
	// Close file
	fclose(f);
	
	return 0;
}
