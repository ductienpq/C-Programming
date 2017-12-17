#include "stdio.h"
#include "conio.h"
 
long giaithua(int N);
 
main(void)
{
    int N;
    long ket_qua;
    do
    {
        printf("\n Nhap vao so nguyen duong N = ");
        scanf("%d", &N);
    }
    while(N < 0);
    ket_qua = giaithua(N);
    printf("\n %d! = %ld", N, ket_qua);
    getch();
}
 
long giaithua(int N)
{
    if(N == 0)
        return 1;
    else
        return N*giaithua(N-1);
}

