#include "stdio.h"
#include "conio.h"
#include "math.h"
main(void)
{
    int a, b, c;
    float delta = 0;
    float x1, x2;
    printf("\n Nhap vao he so a = ");
    scanf("%d", &a);
    printf("\n Nhap vao he so b = ");
    scanf("%d", &b);
    printf("\n Nhap vao he so c = ");
    scanf("%d", &c);
    if(a == 0)
    {
        if(b == 0)
            printf("\n Phuong trinh vo nghiem");
        else
            printf("\n Nghiem cua pt x = %f", float(-c)/b);
    }
    else
    {
        delta = b*b - 4*a*c;
        if(delta == 0)
            printf("\n Phuong trinh co nghiem kep = %f", float(-b)/(2*a));
        else if(delta < 0)
            printf("\n Phuong trinh vo nghiem"); //laptrinh c Koica
        else
        {
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("\n Nghiem thu nhat x1 = %f", x1);
            printf("\n Nghiem thu hai x2 = %f", x2);
        }
    }
    getch();
}

