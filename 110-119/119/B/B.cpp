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
  string w;
  char tail;
  set<string> words;
  for(int i = 0; i < n; i++){
    cin >> w;
    words.insert(w);
    if(w[0] != tail && i != 0){
      cout << "No" << endl;
      return 0;
    }
    tail = w[w.size()-1];
  }
  if(words.size() == n) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
