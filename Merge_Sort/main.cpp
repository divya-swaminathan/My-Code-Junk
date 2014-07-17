#include <iostream>
//Merge Sort
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int *arr1=new int[n1];
    int *arr2=new int[n2];
    int *arr3=new int[n1+n2];
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    int p1=0,p2=0,p3=0;

    while((p1<n1)||(p2<n2))
    {
        if(arr1[p1]<arr2[p2])
            {
            arr3[p3]=arr1[p1];
            ++p3;
            ++p1;
            }
        else
            {
                arr3[p3]=arr2[p2];
                ++p3;
                ++p2;
            }
    }
    int temp=n1+n2;
    for(int i=0;i<temp;i++)
        cout<<endl<<arr3[i];

}
