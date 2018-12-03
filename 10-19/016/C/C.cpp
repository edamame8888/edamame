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
vector<vector<bool> > snsFriend;
vector<bool> visited;
int n,m,a,b;
//dfsいらなかった
int dfs(int node,int score){
  for(int i = 0; i < n; i++){
    if(!visited[i] && snsFriend[node][i]){
      visited[i] = true;
      score ++;

    }
  }
  return score;
}
int main(){
  cin >> n >> m;
  snsFriend = vector<vector<bool>>(n,vector<bool>(n,false));
  for(int i = 0; i < n; i++) snsFriend[i][i] = true;

  for(int i = 0; i < m; i++){
    cin >> a >> b;
    a--;
    b--;
    snsFriend[a][b] = true;
    snsFriend[b][a] = true;
  }
  visited = vector<bool>(n,false);
  for(int i = 0; i < n; i++){
    //cout << "i = " << i << endl;
    for(int j = 0; j < n; j++) visited[j] = false;
    visited[i] = true;
    int score = 0;
    for(int j = 0; j < n; j++) if(snsFriend[i][j]) visited[j] = true;
    for(int j = 0; j < n; j++) if(snsFriend[i][j]) score += dfs(j,0);
    cout << score << endl;
  }

  return 0;
}
