#include <iostream>
#include<math.h>
using namespace std;

void prime_factor(int num)
{
    int t=num;
    while(t%2==0)
    {
        cout<<endl<<2;
        t=t/2;
    }
    for(int i=3;i<sqrt(t);i++)
    {
        while(t%i==0)
        {
            cout<<endl<<i;
            t=t/i;
        }

    }
    if(t>2)
        cout<<endl<<t;
}
int main()
{
    int n;
    cin>>n;
    prime_factor(n);
}
