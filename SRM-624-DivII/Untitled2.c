
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class FingerCounting {
public:
	int maxNumber(int weakFinger, int maxCount)
	{
        int t=0;
        int count=0;
        int c=0;
		while(c!=maxCount)
		{
            if(t==0)
            {
            for(int j=1;j<=5;j++)
            {
                if(j==weakFinger)
                c++;
                count++;
                t=1;
            }
            }
            else if(t==1)
            {
            for(int k=4;k>0;k--)
            {
            count++;
            if(k==weakFinger)
            c++;
            }
            t=0;
            }
		 }
		 	return count;
		}
	};



//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!



//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
