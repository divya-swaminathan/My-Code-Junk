#include <iostream>
using namespace std;
int main()
{
 int len;
 cin>>len;
 int *arr=new int[len];
 for(int i=0;i<len;i++)
        cin>>arr[i];
int start=0;
int end=len;
int temp=0;//count=0;
int count;
while((start!=end))
{
    count=0;
    for(int i=0;i<end-1;i++)
    {
       // count=0;
        if(arr[i]>arr[i+1])
        {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        count++;
        }
        else
        continue;
    }
    end--;
    cout<<endl<<"Swap Count="<<count;
}
cout<<endl<<"Sorted List"
for(int i=0;i<len;i++)
    cout<<endl<<arr[i];

}
