#include "stdio.h"
#include "conio.h"
#include "string.h"
 
void repstr(char *str, char c);
 
void main()
{
    char str[] = "vn coding forum ";
    char c = '+';
    printf("original string: '%s'\n", str);
    repstr(str, c);
    printf("new string: '%s'\n", str);
    getch();
}
 
/************************************************
Replace space by character c
*************************************************/
void repstr(char *str, char c)
{
    char *p = str;
    while(*p != NULL)
    {
        if (*p == ' ' || *p == '\t')
        {
            *p = c;
        }
        p++;
    }
}

