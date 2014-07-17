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
     int n1;
     int n2;
    while ( scanf ("%d %d", &n1, &n2)==2 )
    {
        if(n1>n2)
            printf("%d\n",n1-n2);
        else
            printf("%d\n",n2-n1);
    }
}
