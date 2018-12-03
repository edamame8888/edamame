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
  int N,Q;
  cin >> N >> Q;
  vector<int> board(N,0);
  int l,r;
  for(int i = 0; i < Q; i++){
    cin >> l >> r;
    l--;
    r--;
    board[l] += 1;
    if(r+1 < N)board[r+1] -= 1;
  }

  for(int i = 0; i < N; i++){
    if(i > 0) board[i] += board[i-1];
    if(board[i] % 2) cout << 1;
    else cout << 0 ;
  }
  cout << endl;
  return 0;
}
