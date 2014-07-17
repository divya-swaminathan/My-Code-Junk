#include <iostream>
#include<math.h>
//Quadratic Equations
using namespace std;

int main()
{
int a,b,c;
//cout<endl<<"ax2+bx+c";
cout<<endl<<"Enter a,b,c";
cin>>a;
cin>>b;
cin>>c;
int D;
D=(b*b)-(4*a*c);
if(D<0)
    cout<<endl<<"There are no real solutions";
else if(D==0)
    cout<<(-b)/(2*a);
else
    {
        cout<<endl<<(-b+sqrt(D))/(2*a);
        cout<<endl<<(-b-sqrt(D))/(2*a);
    }
}
