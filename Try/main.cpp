#include<iostream>
using namespace std;
//Implementing a Copy Constructor
class Box
{
    public :
    int b;
    int w;
    Box()
    {
        w=10;
        b=10;
        cout<<endl<<b<<endl<<w;


    }
    Box(Box &obj)
    {
        b=obj.b;
        w= obj.w;
        cout<<endl<<"Copy Constructor "<<b<<endl<<w;

    }
};
int main()
{

    Box bo;
    bo.b=20;
    bo.w=30;
//    Box(&bo);
}
