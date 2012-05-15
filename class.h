#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

#include <iostream>
#include <cstring>
#define SIZE 1000
using namespace std;

class Encrypt
{
	char str[SIZE];
	unsigned len;
public:
    void init_encrypt(void);
    void init_decrypt(void);
	void display (void);
void accept (void);
private:
	void encryptStr (void);
	void decryptStr (void);
};

void Encrypt::display(void)
{
	cout<< "String is: "<<str;
	cout<<endl;
}

void Encrypt::accept(void)
{
    cout<< "Enter the string: ";
    cin>>str;
    len=strlen(str);
    cout<<endl;
}

void Encrypt::encryptStr(void)
{
    int i;
    for(i=0;i<len;i++)
        str[i]=str[i]+30;
    str[i]='\0';
    cout<< "String Encrypted Successfully"<<endl;
}

void Encrypt::decryptStr(void)
{
    int i;
    for(i=0;i<len;i++)
        str[i]=str[i]-30;
    str[i]='\0';
    cout<< "String Decrypted Successfully"<<endl;
}

void Encrypt::init_encrypt(void)
{
    encryptStr();
}

void Encrypt::init_decrypt(void)
{
    decryptStr();
}
#endif // CLASS_H_INCLUDED
