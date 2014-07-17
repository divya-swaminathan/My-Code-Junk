#include <iostream>

using namespace std;

int enough(int goal)
{
    int sum=0,i=0;
    while(sum<=goal)
    {
        //prev=sum;
        ++i;
        sum=sum+i;

    }
    return i;

}
int main()
{
cout<<enough(9);
}
