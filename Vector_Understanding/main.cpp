#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector <int> first;
vector <int> second(4,100);
vector <int> third (second.begin(),second.end());
vector<int>::iterator it;
for(it=second.begin();it!=second.end();++it)
    {
        cout<<endl<<*it;
    }
}
