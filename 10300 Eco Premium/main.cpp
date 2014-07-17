#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
#define long long LL
using namespace std;
int main()
{
        int  a,b,c,n,t,s;
        while(scanf("%d",&t)==1)
        {

            for(int i=0;i<t;i++)
            {
                s=0;
                cin>>n;
                    for(int j=0;j<n;j++)
                    {
                        cin>>a>>b>>c;
                        s=s+(a*c);
                    }
                printf("%d\n",s);
            }
        }
    return 1;
}
