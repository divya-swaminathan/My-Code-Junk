#include <iostream>

using namespace std;
//permutations
long int fact(int d)
{
    int f=1;
    for(int i=d;i>0;i--)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,r;
    cin>>n;
    cin>>r;
    cout<<endl<<n<<" p "<<r;
    cout<<endl<<fact(n)/fact(n-r);
}
