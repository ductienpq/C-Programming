#include "stdio.h"
#include "conio.h"
 
int so_nguyen_to(int N);
main(void)
{
    int N, i;
 
    do
    {
        printf("\n Nhap vao so N = ");
        scanf("%d", &N);
    }
    while(N <= 0);
    printf("\n Cac so nguyen to nho hon %d :", N);
    for(i = 1; i <= N; i++)
    {
        if(so_nguyen_to(i))
            printf(" %d ", i);
    }
    getch();
}
 
int so_nguyen_to(int N)
{ 
    int i;
    if(N == 1)
        return 1;
    else
    {
        for( i = 2; i < N; i++)
        { 
            if(N % i == 0)
                return 0;
        }
        return 1;
    }
}

