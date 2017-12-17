#include "stdio.h"
#include "conio.h"
 
#define MAX 100
 
main(void)
{
    int arr[MAX];
    int n;
    int i;
    do
    {
        printf("\nNhap kich thuoc mang: ");
        scanf("%d", &n);
    }
    while (n > MAX);
 
    for (i = 0; i < n; i++)
    {
        printf("\nA[%d] = ", i);
        scanf("%d", &arr[i]);
    }
 

    int i,n;
    if(n == 1)
        return 1;
    else
    {
        for( i = 2; i < n; i++)
        { 
            if(n % i == 0)
                return 0;
        }
        return 1;
    }
printf("\n Cac so nguyen to nho hon %d :", n);
  
}

