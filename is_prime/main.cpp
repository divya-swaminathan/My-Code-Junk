#include <iostream>

using namespace std;
char* is_prime(int num)
{
    int flag=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
            flag++;
        else
            continue;
        if(flag>=2)
            return "false";
    }
    return "true";

}
int main()
{
    cout<<is_prime(19)<<endl;
    cout<<is_prime(23)<<endl;
    cout<<is_prime(24)<<endl;

}
