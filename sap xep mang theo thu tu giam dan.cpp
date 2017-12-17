#include "stdio.h"
#include "conio.h"
 
#define LEN_MAX 100 // do dai toi da cua mang
 
void sort_in_desending_order(int A[], int len);
 
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
 
    //Nhap du lieu cho day so
    for (i = 0; i < n; i++)
    {
        printf("\nA[%d] = ", i);
        scanf("%d", &arr[i]);
    }
 
    // Sap xep theo thu tu giam dan
    sort_in_desending_order(arr, n);
 
    printf("\nDay so sau khi sap xep: ");
    for (i = 0; i < n; i++)
    {
        printf("\nA[%d] = %d", i, arr[i]);
    }
    getch();
}
 
void sort_in_desending_order(int A[], int len)
{
    int i, j;
    int temp;
    // Thuat toan bubble sort
    for (i = 0; i < len - 1; i++)
        for(j = i+1; j < len; j++)
            if(A[i] < A[j])
            {
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
}

