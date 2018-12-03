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
 string num;
 int f = 0;
 cin >> num;
 for(int i = 0; i < num.size(); i++) f += (int)(num[i] - '0');
 int n = toInt(num);
 if(n % f == 0) cout << "Yes" << endl;
 else cout << "No" << endl;
}
