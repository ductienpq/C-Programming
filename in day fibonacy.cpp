#include "stdio.h"
#include "conio.h"
#define F0    1
 
void main()
{
    int N = 0;
    int Fn;
    int Fn1, Fn2;
    Fn1 = Fn2 = F0;
 
    do
    {
        printf("\nNhap vao so nguyen duong N: ");
        scanf("%d", &N);
    }
    while(N <= 1);
 
    printf("\nFibonanci :\t%d\t%d", Fn1, Fn2);
    while(Fn1 + Fn2 < N)
    {
        Fn = Fn1 + Fn2;
        printf("\t%d", Fn);
        Fn1 = Fn2;
        Fn2 = Fn;
    }
    getch();
}

