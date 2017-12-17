
#include "stdio.h"
#include "conio.h"
  
 main()
{
    int num, binary_val, decimal_val = 0, base = 1, rem;
  
    printf("\nNhap so nhi phan(1 & 0): ");
    scanf("%d", &num); /* maximum five digits */
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("So nhi phan = %d \n", binary_val);
    printf("Gia tri he thap phan = %d \n", decimal_val);
    getch();
}

