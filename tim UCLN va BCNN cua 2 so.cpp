#include "stdio.h"
#include "conio.h"
 
int uscln(int a, int b);
int bscnn(int a, int b);
main(void)
{
    printf("USCLN(%d,%d) = %d\n", a, b, uscln(a, b));
    printf("BSCNN(%d,%d) = %d\n", a, b, bscnn(a, b));
    getch();
}
int uscln(int a, int b)
{
    if(a == 0 && b == 0)
        return -1;
    else
        return (b == 0)? a : uscln(b, a%b);
}
 
int bscnn(int a, int b)
{
    if(a == 0 || b == 0)
        return -1;
    else
        return (a*b/uscln(a, b));
}

