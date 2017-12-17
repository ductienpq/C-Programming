#include<iostream>
#include<conio.h>
int main()
{
int tongc=0,tongl=0,sum=0;
int i=0,a[50],n;
clrscr();

cout<<"nhap vao bao nhieu phan tu";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"nhap vao phan tu thu"<<i;
cin>>a[i];
}


if (a[i] % 2==0)
{
tongc=tongc+a[i];
cout<<"tong chan la"<<tongc;
}
else if (tongl % 2!=0)
{
tongl=tongl+a[i];
cout<<"tong le la"<<tongl;
}
else
sum=sum +a[i];
cout<<"tong chan le la"<<sum;
getch();
}
