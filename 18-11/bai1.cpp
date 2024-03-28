
#include<stdio.h>
int main(){
	float scores[30];
	int N;
	// Input number of courses
	do{
		printf("Input the number of courses: ");
		scanf("%d", &N);
	}while(N < 1 || N > 30);	
	// Input scores of a student
	for(int i = 0; i < N; i++){
		do{
			printf("Input score of course %d: ", i);
			scanf("%f", &scores[i]);
		}while(scores[i] < 0 || scores[i] > 10);
		
	}
	// Ouput scores of a student
	printf("Scores of student: ");
	for(int i = 0; i < N; i++){
		printf("%.1f ", scores[i]);
	}
	// Compute the average score of a student
	float S = 0;
	for(int i = 0; i < N; i++){
		S += scores[i];
	}
//	float avg = S/N;
	printf("\nAverage score of student is %.2f", S/N);
	// Count the number of courses that are passed
	
	return 0;
}
