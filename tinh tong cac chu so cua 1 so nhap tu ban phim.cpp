#include <stdio.h>
#include <conio.h>
main(void)
    {
        int n;
        printf ("Nhap so nguyen : ");
        scanf ("%d",&n);
        for (int i=1;i<n;i++)
            {
                if (n%i==0)
                printf ("%d\t",i);
            }
        getch();
   }  
