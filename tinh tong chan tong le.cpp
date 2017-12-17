#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
 
int ktSNT (int a)
{
    int i = 0;
    for(i = 2; i <= (int)sqrt(a); i++)
    {
        if( a % i == 0 || a < 2 && a != 2)
        {
            return 0;
        }
    }
    return 1;
}
int main ()
{

    int N, i, j, k = 0;
    int* snt = 0;
    int* a = NULL;
    printf("\n Nhap vao N:");
    scanf("%d", &N);
 
    snt = (int*)malloc(N*sizeof(int));
    a = (int*)malloc(N*sizeof(int));
    k = 0;
    for(i = 0; i < N; i++)
    {
        printf("\n Nhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }
    for(i = 0; i < N; i++)
    {
        if(ktSNT(a[i]) == 1)
        {
            snt[k] = a[i];
            k++;
        }
    }
 
    printf("\n          Bang cac so nguyen to\n");
    for (i = 0; i < k; i++)
    {
    printf("N[%d] = %d        ", i, snt[i]);
    }
    free(snt);
    free(a);
    getch();
    return 0;
}
