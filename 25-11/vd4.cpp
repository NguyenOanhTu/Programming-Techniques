// V� d? m?i quan h? gi?a con tr? v� m?ng - L?p Tr?nh Kh�ng Kh�
#include <stdio.h>
#define MAX_SIZE 100
 
int main()
{
    int arr[MAX_SIZE];
    int n;
    do
    {
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    } while (n < 1);
 
    int *p = &arr[0];
    // Nh?p m?ng
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i);
        scanf("%d", (p + i));
    }
 
    // Xu?t m?ng
    for (int i = 0; i < n; i++)
    {
        printf("\nGia tri a[%d] = %d", i, *(p + i));
    }
 
    // T�nh t?ng s? d?ng bi?n l?p l� con tr?
    // Kh?i t?o con tr? i tr? t?i ph?n t? �?u ti�n c?a m?ng
    // Ta s? d?ng n?u gi� tr? c?a i v�?t qu� �?a ch? c?a ph?n t? cu?i c�ng
    // i++: t�ng i l�n 1 ��n v?, t?c l� cho n� tr? t?i ph?n t? ti?p theo
    int sum = 0;
    for(int *i = &arr[0]; i <= &arr[n-1]; i++){
        // L?y gi� tr? c?a ph?n t? hi?n t?i b?ng to�n t? `*`
        sum += *i;
    }
    printf("\nSum = %d", sum);
}
