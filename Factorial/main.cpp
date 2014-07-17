#include <iostream>

using namespace std;
//Factorial
int main()
{
    int d;
    long int f=1;
    cin>>d;
    for(int i=d;i>0;i--)
    {
        f=f*i;
    }
    cout<<endl<<"factorial "<<f;
    //cout << "Hello world!" << endl;
    return 0;
}
