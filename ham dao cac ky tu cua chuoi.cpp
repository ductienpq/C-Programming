#include "stdio.h"
#include "conio.h"
#include "stdlib.h" // thu vien ham malloc()
#include "string.h" // thu vien ham memset()
 
#define MAX_LENGTH 100
 
char* InvertString(char *str);
 
void main()
{
    char str[MAX_LENGTH];
    printf("\nNhap chuoi khong qua 100 ki tu: ");
    fflush(stdin);
    gets(str);
    printf("\nChuoi dao nguoc: %s", InvertString(str));
    getch();
}
// Ham dao cac ki tu trong chuoi
char* InvertString(char *str)
{
    char *pTemp;
    int length = strlen(str);
    int i = 0;
    pTemp = (char*)malloc(length + 1);
    if(pTemp == NULL)
    {
        printf("\nError in memory");
        return NULL;
    }
    memset(pTemp, NULL, length + 1); // assign pTemp = NULL
    while(i < length)
    {
        *(pTemp + i) = *(str + length - 1 - i);
        i++;
    }
    *(pTemp + i) = '\0';
     
    return pTemp;
}

