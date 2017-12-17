#include<iostream.h>
#include <math.h>
 
void main()
{
    int n;
    cout <<"Nhap n: "; cin>>n;
 
    if (sqrt(n)==int(sqrt(n))) cout <<"\n" <<n <<" la so chinh phuong";
    else cout <<"\n" <<n <<" khong phai so chinh phuong";
 
    cout <<"\n\n";
}
