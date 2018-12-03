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
  int N,K;
  cin >> N >> K;
  long long a[N];
  for(int i = 0; i < N; i++){
    cin >> a[i];
    if(a[i] == 0) {
      cout << N << endl;
      return 0;
    }
  }
  /* しゃくとり法 */
    int maxLength = 0;
    int right = 0;
    long long mul = 1;
    for (int left = 0; left < N; ++left) {//left を進めていく
      //mul * a[right] <= Kならばrightを進めていく
        while (right < N && mul * a[right] <= K) {
            mul *= a[right];
            ++right;
        }
        maxLength = max(maxLength, right - left); // 更新
        if (left == right) ++right;
        else mul /= a[left]; // left を除く
    }

  cout << maxLength << endl;
  return 0;
}
