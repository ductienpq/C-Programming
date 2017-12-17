#include "stdio.h"
#include "conio.h"
 
long LengthOfString(char* s);
 
void main()
{
    char s[] = "vncoding.net";
    int len = LengthOfString(s);
    printf("%d", len);
    getch();
}
 
long LengthOfString(char* s)
{
    int len = 0;
    while(*s != NULL)
    {
        len++;
        s++;
    }
    return len;
}

