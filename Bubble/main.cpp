#include <iostream>
//Starting on with Bubble Sort
/*Apparently this sorting methodology is not used when 'n' is too large.
*/
using namespace std;

int main()
{
    //int a=5;
    //int arr[]={1,3,0,2,5,4};
    int size;
    cin>>size;
    int *arr=new int[size];
    for (int l=0;l<size;l++)
    cin>>arr[l];
    int temp=0;
       for (int i =0;i<size;i++)
        for(int j=0;j<size;j++)
         {
             if(arr[j]>arr[j+1])
            // swap(arr[j],arr[j+1]);
            {
              temp=arr[j+1] ;
              arr[j+1]=arr[j];
              arr[j]=temp;
            }


         }
    for (int k=0;k<size;k++)
        cout<<arr[k];
}
