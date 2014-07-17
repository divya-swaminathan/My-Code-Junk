#include <iostream>

using namespace std;
//Finding the MAX element
int main()
{
    int len;
    cin>>len;
    int* arr=new int[len];
    for(int i=0;i<len;i++)
        cin>>arr[i];
    int max=arr[0];
    int loc=0;
    for(int i=1;i<len;i++)
    {
        if(max<arr[i])
            {
              max=arr[i];
              loc=i;
            }
        else
            continue;
    }
    cout<<endl<<"location : "<<loc+1<<"element :"<<max;

}
