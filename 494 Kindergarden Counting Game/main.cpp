#include <iostream>
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
#include <ctype.h>
//#include<stdio.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
#define long long LL
using namespace std;
/*
int main()
{
    int count;
    int l;
    char s[1000];
    while(gets(s))
    {
        count=0;
        l=strlen(s);
        for(int i=0;s[i];i++)
        {
            if(isspace(s[i]))
                ++count;

        }
        printf("%d \n",count+1);
    }
    return 0;
}
*/
int main()
{
    int i,c,w;
    char a[1000];
    while(gets(a))
    {
        c=0;
        w=1;
        for(i=0;a[i];i++)
        {
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(w)
                c++;
                w=0;
            }
            else
            w=1;
        }
        printf("%d\n",c);
    }
    return 0;
}
