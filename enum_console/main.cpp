#include <iostream>

using namespace std;

int main()
{
    enum color_type {red,purple,green,yellow,orange,blue};
    color_type shirt, pant;
    shirt = red;
    pant=purple;
    cout<<endl<<shirt;
    cout<<endl<<pant;
    int i=5,j=6,k=7,n=3;
    cout<<i+j*k-k%n<<endl;
 //5+42-7%3
 //5+42-1
 //46 the output is correct
 int found=0,count=5;
 if(!found||--count==0)
    cout<<endl<<"danger";
cout<<endl<<count;
}
