#include "stdio.h"
#include "conio.h"
 
#define LEN_MAX 100 // do dai toi da cua mang
 
int sum_at_even_pos(int A[], int len);
 
void main()
{
    int arr[LEN_MAX];
    int n;
    int i;
    do
    {
        printf("\nNhap kich thuoc mang: ");
        scanf("%d", &n);
    }
    while (n > LEN_MAX || n <= 0);
 
    for (i = 0; i < n; i++)
    {
        printf("\nA[%d] = ", i);
        scanf("%d", &arr[i]);
    }
 
    printf("\nTong cac phan tu o vi tri chan: %d", sum_at_even_pos(arr, n));
 
    getch();
}
 
int sum_at_even_pos(int A[], int len)
{
    int i;
    int sum = 0;
    for (i = 0; i < len; i++)
        if (i%2 == 0)
            sum += A[i];
 
    return sum;
}

