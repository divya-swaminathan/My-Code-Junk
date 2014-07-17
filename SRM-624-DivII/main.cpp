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


class CarrotBoxesEasy {
public:
	int theIndex(vector <int> carrots, int K) {
	int ind;
	int N=sizeof(carrots)/sizeof(carrots[0]);
		for(int i=0;i<K;i++)
		{
		ind=distance(carrots,max_element(carrots,carrots + N));
		//distance(A, max_element(A, A + N))
		carrots[ind]--;
		}
		return ind;
	}
};


//<%:testing-code%>
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
