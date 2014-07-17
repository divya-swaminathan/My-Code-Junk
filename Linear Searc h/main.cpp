#include <iostream>
// performing Linear search
//#include<math.h>
using namespace std;

int main()
{
int item;
int flag=0;
int arr[]={1,2,3,4,5,6,7,12,34,67,73,99,1001};
cin>>item;
for (int i=0;i<((sizeof(arr))/(sizeof(arr[0])));i++)
    {
    if(item==arr[i])
    {
        flag=1;
        cout<<"Item Found";
        break;
    }
    else
    {   flag=0;
        continue;
    }
    }
    if(flag==0)
        cout<<endl<<"Item not Found";
}
