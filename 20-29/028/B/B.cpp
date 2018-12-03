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
  string s;
  cin >> s;
  map<char,int> alph;
  for(int i = 0; i < s.size(); i++){
    alph[(char)s[i]]++;
  }
  for(char i = 'A'; i <= 'F'; i++){
    if(i != 'F') cout << alph[i] << ' ';
    else cout << alph[i] << endl;
  }
  return 0;
}
