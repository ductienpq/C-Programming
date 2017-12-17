#include<iostream>
#include<conio.h>

using namespace std;

//ham
long giaithua(int);

int main()
{

     // Khai bao bien
     int counter, n;

     // Nhap gia tri
     cout<<"Nhap so :";
     cin>>n;

     // Goi ham giaithua
     cout<<"Gia tri giai thua cua " <<n<< " la "<<giaithua(n);
     
     return 0;
 }

// Ham giaithua
long giaithua(int n)
{
    int counter;
    long fact = 1;

     //vong lap for
     for (int counter = 1; counter <= n; counter++)
     {
         fact = fact * counter;
     }

  return fact;
}
