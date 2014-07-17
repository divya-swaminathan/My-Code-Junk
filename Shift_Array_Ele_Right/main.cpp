#include <iostream>
using namespace std;
void shift_right_times(int arr[],int len,int times)
{
    //int start=0;
    int i;
    int j=0;

    while(j<times)
    {

    int temp=arr[len-1];
    for( i=len-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=temp;
    ++j;
    }
    for(int i=0;i<len;i++)
        cout<<arr[i];
}
int main()
{
    int n;
    int d;

    cin>>n;
    cin>>d;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    shift_right_times(arr,n,d);
}
