#include <iostream>

using namespace std;
int sum_from_to(int start,int end)
{
    int sum=0;
    while(start<=end)
    {
        sum=sum+start;
        start++;
    }
    return sum;
}

int main()
{
    cout << sum_from_to(4,7) << endl;
    return 0;
}
