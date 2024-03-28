#include <stdio.h>
#define COURSES_MAX 6
#define STUDENT_NAME_MAX 20
#define NUMBER_STUDENT_MAX 35
struct STUDENT
{
    char fullName[STUDENT_NAME_MAX];
    int ID;
    float scores[COURSES_MAX];
    float average;
};
void inputStudent(struct STUDENT &student)
{
    printf("Input full name: ");
    fflush(stdin);
    gets(student.fullName);
    fflush(stdin);
    printf("Input ID: ");
    scanf("%d", &student.ID);
    for (int i = 0; i < COURSES_MAX; i++)
    {
        do
        {
            printf("Input course %d: ", i);
            scanf("%f", &student.scores[i]);
        } while (student.scores[i] < 0 || student.scores[i] > 10);
    }
}
void outputStudent(struct STUDENT &student)
{
    printf("Full name student: %s\n", student.fullName);
    printf("  ID student: %d\n", student.ID);
    printf("  Scores of student:\n");
    for (int i = 0; i < COURSES_MAX; i++)
    {
        printf("    Scores %d = %.2f\n", i, student.scores[i]);
    }
}
void averageScore(struct STUDENT &student)
{
    student.average = 0;
    for (int i = 0; i < COURSES_MAX; i++)
    {
        student.average += student.scores[i];
    }
    student.average = student.average / COURSES_MAX;
}
void sortStudent(struct STUDENT (&students)[NUMBER_STUDENT_MAX], int N)
{
    struct STUDENT tmp;
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            if (students[i].average > students[j].average)
            {
                tmp = students[i];
                students[i] = students[j];
                students[j] = tmp;
            }
        }
    }
}

int main()
{
    struct STUDENT students[NUMBER_STUDENT_MAX];
    int N;
    int i;
    char fileName[] = "top_students.txt.";
    do
    {
        printf("Input number  of student: ");
        scanf("%d", &N);
    } while (N < 0 || N > NUMBER_STUDENT_MAX);
    
//    Input Student
    for (i = 0; i < N; i++)
    {
        printf("\nInput student %d:\n", i + 1);
        inputStudent(students[i]);
    }
    
//    Output Student
    printf("\n____________________________________\n");
    printf("the information of students:\n");
    for (i = 0; i < N; i++)
    {
        outputStudent(students[i]);
    }
    
//    Scort Student
    printf("\n____________________________________\n");
    printf("3 students will be awarded the scholarship:\n");
    for (i = 0; i < N; i++)
    {
        averageScore(students[i]);
    }
    sortStudent(students, N);
    for (i = N - 1; (i >= N - 3) && (i >= 0); i--)
    {
        outputStudent(students[i]);
    }
    
//    Print File
    printf("\n____________________________________\n");
    printf("the three top students in a file top_students.txt.\n");
    FILE *fp;
    fp = fopen(fileName, "w");
    if (fp != NULL)
    {
        for (i = N - 1; (i >= N - 3) && (i >= 0); i--)
        {
            fprintf(fp, "%s - %d - %.2f\n", students[i].fullName, students[i].ID, students[i].average);
        }
        fclose(fp);
    }
    else
    {
        printf("File open fail.");
    }
    return 0;
}
