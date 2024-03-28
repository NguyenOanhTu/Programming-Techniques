#include <stdio.h>
#define DAY_MAX 7
#define PRODUCT_MAX 5

int main()
{
    int productOfAWeek[DAY_MAX][PRODUCT_MAX] =
        {
            {12, 3, 11, 6, 13},
            {14, 12, 3, 5, 12},
            {6, 15, 3, 11, 6},
            {4, 11, 6, 14, 7},
            {13, 9, 14, 10, 3},
            {9, 7, 11, 6, 7},
            {14, 10, 9, 11, 9}};
    int sum[7];
    int max = 0;
    int dayIdxOfMax = 0;
    char *day[7] = {"Monday  ", "Tuesday  ", "Wednesday", "Thursday", "Friday  ", "Saturday", "Sunday  "};

    // Print product table
    printf("\t\t\t\t|Egs\t|Meat\t|Milk\t|Peanut\t|Cake\t|\n");
    for (int dayIdx = 0; dayIdx < DAY_MAX; dayIdx++)
    {
        printf("\t%s\t\t", day[dayIdx]);
        for (int productIdx = 0; productIdx < 5; productIdx++)
            printf("|%d\t", productOfAWeek[dayIdx][productIdx]);
        printf("|\n");
    }

    // Calculate sum of product in a day
    for (int dayIdx = 0; dayIdx < DAY_MAX; dayIdx++)
    {
        sum[dayIdx] = 0;
        for (int productIdx = 0; productIdx < 5; productIdx++)
        {
            sum[dayIdx] += productOfAWeek[dayIdx][productIdx];
        }
    }

    // Find the day in week with the maximum number of selling products
    for (int dayIdx = 0; dayIdx < DAY_MAX; dayIdx++)
    {
        if (max < sum[dayIdx])
        {
            max = sum[dayIdx];
            dayIdxOfMax = dayIdx;
        }
    }
    printf("\nMax = %s", day[dayIdxOfMax]);
    return 0;
}
