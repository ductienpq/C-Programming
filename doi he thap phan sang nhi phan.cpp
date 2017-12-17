#include "stdio.h"
#include "conio.h"
 
void main()
{
    unsigned long num, binary_val = 0, decimal_val, base = 1, rem;
 
    printf("\nNhap so nguyen he thap phan: ");
    scanf("%ld", &num); /* maximum five digits */
    decimal_val = num;
    while (num > 0)
    {
        rem = num % 2;
        binary_val = binary_val + rem * base;
        num = num / 2;
        base = base * 10;
    }
    printf("So thap phan = %d \n", decimal_val);
    printf("So nhi phan = %d \n", binary_val);
    getch();
}

