#include<iostream>
#include<string.h>//memset option
using namespace std;
void mark_multiples(int arr[],int a,int n)
{
    int i=2,num;
    while((num=i*a)<=n)
    {
        arr[num-1]=1;
        ++i;
    }
}
void sieve(int n)
{
    if(n>=2)
    {
        int arr[n];
        memset(arr,0,sizeof(arr));
        for(int i=1;i<n;i++)
        {
            if(arr[i]==0)
            {
                cout<<endl<<i+1;
                mark_multiples(arr,i+1,n);
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
}
