#include <iostream>

using namespace std;

int main()
{
char ch;
char title[]="Titanic";
ch=title[1];
title[3]='chaccc';
cout<<endl<<ch;
cout<<endl<<title[3];
cout<<endl<<title;
const int length=21;
char msg[length];
cin.getline(msg,length,'\n');
cout<<msg;
}
