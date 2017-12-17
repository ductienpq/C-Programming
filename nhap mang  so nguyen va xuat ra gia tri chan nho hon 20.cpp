#include "stdio.h"
#include "conio.h"
 
#define LEN_MAX 100

    int arr[LEN_MAX];
    int n;
    int i;
    do
    {
        printf("\nNhap kich thuoc mang: ");
        scanf("%d", &n);
    }
    while (n > LEN_MAX);
 
    for (i = 0; i < n; i++)
    {
        printf("\nA[%d] = ", i);
        scanf("%d", &arr[i]);
    }
 
    // in cac ptu chan ra man hinh
    printf("\nPhan tu le cua mang A:");
    for (i = 0; i < n;i++)
        if (arr[i] % 2 == 0 && arr[i] < 20)
            printf("\nA[%d] = %d", i, arr[i]);
    getch();


