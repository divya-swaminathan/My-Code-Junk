#include <iostream>

using namespace std;

int main()
{
    int len;
    cin>>len;
    int *arr= new int[len];
    for (int i=0;i<len;i++)
        cin>>arr[i];
    for(int j=0;j<len;j++)
        cout<<arr[j];
    cout<<"Item";
    int item;
    cin>>item;
    int found=0;
    int start=0,end=len,mid,loc;
    while((start<=end)&&!found)
    {
        mid=(start+end)/2;
        if(item==arr[mid])
        {
            found=1;
            loc=mid;
            break;
        }
        else if(item<arr[mid])
        {
            end=mid-1;
        }
        else if(item>arr[mid])
        {
            start=mid+1;

        }
    }
    if(found==1)
        cout<<endl<<"found"<<" "<<loc+1;
    else
        cout<<endl<<"Not found";
}
