#include <stdio.h>
#include <conio.h>
 
main(void)
{
    float a, b, max;
    printf("\nNhap a = ");
    scanf("%f", &a);
    printf("\n Nhap b = ");
    scanf("%f", &b);
    if(a > b)
        max = a;
    else
        max = b;
    printf("\nMax(%f, %f)= %f", a, b, max);
    getch();
}

