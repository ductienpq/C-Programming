#include<stdio.h>
#include<conio.h>
int a[100];
main()
{
 int i, n, max, min;
 printf("nhap so phan tu cua mang: ");
 scanf_s("%d", &n);
 for (i = 0; i < n; i++)
 {
  printf("nhap phan tu thu %d: ", i + 1);
  scanf_s("%d", &a[i]);
 }
 max = a[0]; min = a[0];
 for (i = 1; i < n; i++)
 {
  if (min > a[i])min = a[i];
  if (max < a[i])max = a[i];
 }
 printf("phan tu nho nhat la: %d\n", min);
 printf("phan tu lon nhat la: %d\n", max);
 _getch();
}
