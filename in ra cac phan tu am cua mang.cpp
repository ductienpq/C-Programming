#include "stdio.h"
#include "conio.h"
 
#define LEN_MAX 100 // maximum length of array
 
void main()
{
    float arr[LEN_MAX];
    int n;
    int i;
    do
    {
        printf("\nNhap kich thuoc mang: ");
        scanf("%d", &n);
    }
    while (n > LEN_MAX);
 
    for (i = 0; i < n;i++)
    {
        printf("\nA[%d] = ", i);
        scanf("%f", &arr[i]);
    } 
 
    // in cac ptu am ra man hinh
    printf("\nPhan tu < 0 cua mang");
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            printf("\nA[%d] = %f", i, arr[i]);
    }
    getch();
}

