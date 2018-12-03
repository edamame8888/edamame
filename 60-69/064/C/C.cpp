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
  int N, rate, rateType;
  cin >> N;
  vector<int> rateCnt(9,0);
  for(int i = 0; i < N; i++){
    cin >> rate;

    rateType = rate / 400;
    if(rateType >= 8) rateCnt[8]++;
    else rateCnt[rateType] ++;
    // if(rate <= 399) rateCnt[0]++;
    // else if(rate <= 799) rateCnt[1]++;
    // else if(rate <= 1199) rateCnt[2]++;
    // else if(rate <= 1599) rateCnt[3]++;
    // else if(rate <= 1999) rateCnt[4]++;
    // else if(rate <= 2399) rateCnt[5]++;
    // else if(rate <= 2799) rateCnt[6]++;
    // else if(rate <= 3199) rateCnt[7]++;
    // else rateCnt[8]++;
  }
  int minTypes = 0, maxTypes = 0;
  for(int i = 0; i < 8; i++){
    if(rateCnt[i] > 0){
      minTypes ++;
      maxTypes ++;
    }
  }
  if(minTypes == 0 && rateCnt[8] > 0) minTypes++;
  maxTypes += rateCnt[8];
  cout << minTypes << ' '<< maxTypes << endl;
  return 0;
}
