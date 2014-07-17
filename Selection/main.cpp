#include <iostream>
// Selection Sort
using namespace std;

int main()
{
int size;
cin>>size;
int *arr= new int[size];
    for(int i=0;i<size;i++)
    cin>>arr[i];
int temp=0;
int min;
for(int i=0;i<size;i++)
{
    min=i;
    for(int j=i+1;j<size;j++)
    {
        if(arr[min]>arr[j])
            min=j;
        else
            continue;

    }
    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
}
for (int k=0;k<size;k++)
    cout<<arr[k];
}

