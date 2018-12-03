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
  int N,M;
  string input;
  map<string ,int> score;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> input;
    score[input]++;
  }
  cin >> M;
  for(int i = 0; i < M; i++){
    cin >> input ;
    score[input]--;
  }
  int maxScore = 0;
  for( auto i = score.begin(); i != score.end() ; i++ ) {
      maxScore = max(i->second ,maxScore);
  }
  cout << maxScore << endl;
}
