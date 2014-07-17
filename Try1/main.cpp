#include<iostream>
using namespace std;
int main()
{

    int t_map[6][6]={{0,0,0,0,0,0},
                    {0,34,21,32,41,25},
                    {0,14,42,43,14,31},
                    {0,54,45,52,42,23},
                    {0,33,15,51,31,35},
                    {0,21,52,33,13,23},
                    };
int i=5;
int j=4;
int flag=0;
//for(int i=0;i<6;i++)
//for(int j=0;j<6;j++)
//cin>>t_map[i][j];
cout<<"Starting at [i][j]"<<t_map[1][1];
while(i!=j)
{
    if(flag==0)
    {
        flag=1;
        i=1;
        j=1;
    i=t_map[i][j]%10;
    j=t_map[i][j]/10;

    cout<<endl<<"Next Clue Location "<<t_map[i][j];
    }
    else{
        i=t_map[i][j]%10;
    j=t_map[i][j]/10;

    cout<<endl<<"Next Clue Location "<<t_map[i][j];
    }
}
if(i==j)
{
    cout<<endl<<"Treasure Found";

}
}
