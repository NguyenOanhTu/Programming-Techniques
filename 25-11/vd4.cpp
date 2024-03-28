// Ví d? m?i quan h? gi?a con tr? và m?ng - L?p Tr?nh Không Khó
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
 
    // Tính t?ng s? d?ng bi?n l?p là con tr?
    // Kh?i t?o con tr? i tr? t?i ph?n t? ð?u tiên c?a m?ng
    // Ta s? d?ng n?u giá tr? c?a i vý?t quá ð?a ch? c?a ph?n t? cu?i cùng
    // i++: tãng i lên 1 ðõn v?, t?c là cho nó tr? t?i ph?n t? ti?p theo
    int sum = 0;
    for(int *i = &arr[0]; i <= &arr[n-1]; i++){
        // L?y giá tr? c?a ph?n t? hi?n t?i b?ng toán t? `*`
        sum += *i;
    }
    printf("\nSum = %d", sum);
}
