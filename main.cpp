#include <iostream>
#include "class.h"
#include<iomanip>
using namespace std;

int main()
{
    Encrypt test;
    int ch;
    do {
    cout << "1) Accept String" << endl;
    cout << "2) Encrypt String" << endl;
    cout << "3) Decrypt String" << endl;
    cout << "4) Display String" << endl;
    cout << "5) Exit" << endl;
    cout<< "Enter your choice: ";

    cin>>ch;
    cout<<endl;
    switch(ch)
    {
        case 1:
        test.accept();
        break;
        case 2:
        test.init_encrypt();
        break;
        case 3:
        test.init_decrypt();
        break;
        case 4:
        test.display();
        break;
        case 5:
        break;
        default:
        cout<< "Incorrect Param"<<endl;
    }}while(ch!=5);
    return 0;
}
