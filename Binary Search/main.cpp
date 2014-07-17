#include <iostream>

using namespace std;
int BinarySearch(int A[],int value, int low,int high) {
       if (high < low)
           return -1; // not found
       int mid = low + ((high - low) / 2);
       if (A[mid] > value)
           return BinarySearch(A, value, low, mid-1);
       else if (A[mid] < value)
           return BinarySearch(A, value, mid+1, high);
       else
           return mid; // found
   }



int main()
{
int item;
//int flag=0;
int arr[]={1,2,3,4,5,6,7,12,34,67,73,99,1001};
cin>>item;
int low=0;
int n=(sizeof(arr))/(sizeof(arr[0]));
//int med=(n)/2;
int high=n-1;
//binary_search(arr,low,med,high,item);
int r=BinarySearch(arr,item,low,high);
if(r==-1)
cout<<endl<<"Not found";
else if (r>=0)
    cout<<endl<<"Found at index "<<r;
}
