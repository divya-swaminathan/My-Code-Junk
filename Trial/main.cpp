#include<iostream>
using namespace std;
//To check which single bit of the number is set
int check(int num)
{
    int i=1;
    int p=0;
    while(!(i&num))
    {
        i=i<<1;
        p++;
    }
    return p;
}
int main()
{
int n,pos;
cin>>n;
if(n&&(!(n&(n-1))))
{
 pos=check(n);
 cout<<endl<<pos+1;

}
    else
    cout<<"its not a power of two check the set bit";
    return 0;
}
