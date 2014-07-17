#include <iostream>
#include<stack>
using namespace std;

int main()
{
    int n;
    stack <int> numbers;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        numbers.push(temp);
    }
    cout<<endl<<numbers.size();
    for(int i =0;i<n;i++)
    {
        numbers.pop();
    }
}
