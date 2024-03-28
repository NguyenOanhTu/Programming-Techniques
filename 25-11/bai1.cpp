#include <stdio.h>
int main()
{
    int arr[100], n, sum, *p;
    do{
        printf("Input an array of N integers ( N <= 100): ");
        scanf("%d", &n);
    } while (n < 1 || n >= 100);
    p = &arr[0];
    for (int i = 0; i < n; i++){
        printf("Array [%d] = ", i);
        scanf("%d", (p + i));
    }
    printf("\nOutput the above array of N integers:");
    for (int i = 0; i < n; i++){
        printf("\nArray [%d] = %d", i, *(p + i));
    }
    printf("\n");
    sum = 0;
    for(int *i = &arr[0]; i <= &arr[n-1]; i++)
        sum += *i;
    printf("\nThe sum of all elements in the array = %d", sum);
    return 0;
}
