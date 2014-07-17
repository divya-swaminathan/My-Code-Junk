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
//#include<stdio.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
#define long long LL
using namespace std;

int main()
{
    char s[1000];
    int l;
    while(gets(s))
    {
        l=strlen(s);
        for(int i=0;i<l;i++)
        {
            printf("%c",s[i]-7);
        }
        printf("\n");
    }

}
