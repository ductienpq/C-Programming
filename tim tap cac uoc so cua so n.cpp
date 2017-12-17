#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string str;
 
    cout << "Nhap vao mot so: ";
    getline(cin, str);
    cout << "So dao nguoc: ";
 
    for (signed int i = str.length() - 1; i >= 0; --i)
        cout << (char) str[i];
    return 0;
}

