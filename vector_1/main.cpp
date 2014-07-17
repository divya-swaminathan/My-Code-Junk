#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int size;
    vector<int> vec;
    cout<<endl<<vec.size();
    cout<<endl<<"Enter size";
    cin>>size;
    for (int i=0;i<size;i++)
    {
        vec.push_back(i+1);
    }
    for(int i=0;i<size;i++)
    {

        cout<<endl<<vec[i];
    }
    cout<<"Present Size of Vector = "<<vec.size();
    // Iterating using Iterators
    vector<int> :: iterator i=vec.begin();
    while(i!=vec.end())
    {

        cout<<*i<<endl;
        i++;
    }
}
