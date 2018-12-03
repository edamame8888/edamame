#include <vector>
#include <list>
#include <map>
#include <set>
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
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

int main(){

	int n;
	cin >> n;

	vector<int> as( n );
	for(int i = 0; i < n; i++)
	{
		cin >> as[i];
	}

	double res = 0;
	for(int i = 0; i < n; i++)
	{
		const int c = count_if( as.begin(), as.end(), [&]( int a ){ return !( as[i] % a ); } );
		const double p = 1. / c;
		res += p * ( ( c + 1 ) / 2 );
	}
  printf("%f\n",res);

  return 0;
}
