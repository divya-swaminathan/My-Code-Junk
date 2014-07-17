#include <iostream>
//determining the sqrt of a number 'N' assuming that 'N' is a perfect square
using namespace std;

int main()
{
    int N;
    int Num;
    cin>>Num;
    N=Num;
    N--;
    int *arr= new int[N];
    for(int i=0;i<N;i++)
        arr[i]=i+1;
    for(int i=0;i<N;i++)
        cout<<endl<<arr[i];
    int start=0;
    int end=N;
    int found=0,mid,loc;
    while((start<=end)&&!found)
    {
            mid=(start+end)/2;
            if((arr[mid]*arr[mid])==Num)
            {
                found=1;
                loc=mid+1;
                break;
            }
            else if((arr[mid]*arr[mid])<Num)
            {
                start=mid+1;
            }
            else if((arr[mid]*arr[mid])>Num)
            {
                end=mid-1;
            }
    }
    if(found==1)
        cout<<endl<<"found sqrt="<<loc;
    else
        cout<<endl<<"not perfect square";
}
