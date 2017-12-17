#include <stdio.h>
#include <conio.h>

main()
{
int n, m,k;
printf("nhap phan tu n:");
scanf("%d",&n);
k = n;
m = 0;

while(k > 0)
{
m = 10*m + k%10;
k = k/10;
}
if(n == m) 
printf(" %d la so doi xung ",n);
else
printf(" %d khong la so doi xung ",n);
}

