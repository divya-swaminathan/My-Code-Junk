#include <iostream>

using namespace std;
//permutuation of a string
void swap(char *x,char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void permute(char a[],int i,int n)
{
    int j;
    if(i==n)
        cout<<endl<<a;
    else
    {
        for(j=i;j<=n;j++)
        {
            swap(a[j],a[i]);
            permute(a,i+1,n);
            swap(a[i],a[j]);
        }
    }
}
int main()
{
    char arr[]="ABC";
    permute(arr,0,2);

}
