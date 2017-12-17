#include "stdio.h"
#include "conio.h"
#include "math.h"
#define PI 3.14159
main(void)
{
    int n;
    float a, b, c ;
    float R;
    float P;
    float S;
    printf("\n  Tinh chu vi & dien tich tron");
    scanf("%d", &n);
     do
            {
                printf("\n Nhap ban kinh duong tron:");
                scanf("%f", &R);
            }
            while(R <= 0);
            P = 2 * PI * R;
            S = PI * R * R;
            printf("\n Chu vi hinh tron : %f dvdd", P);
            printf("\n Dien tich hinh tron : %f dvdt", S);
            printf("\n Exit");
getch();
}
