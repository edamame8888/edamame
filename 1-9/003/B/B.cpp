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
  string s,t;
  cin >> s >> t;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == t[i]) continue;
    else if(s[i] == '@'  && (t[i]=='a' || t[i]=='t' || t[i]=='c' || t[i]=='o' || t[i]=='d' || t[i]=='e' || t[i]=='r' ) ){
      continue;
    }
    else if(t[i] == '@' && (s[i]=='a' || s[i]=='t' || s[i]=='c' || s[i]=='o' || s[i]=='d' || s[i]=='e' || s[i]=='r' )){
      continue;
    }else{
      cout << "You will lose" << endl;
      return 0;
    }
  }
  cout << "You can win" << endl;
  return 0;
}
