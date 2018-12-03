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

int main(){
  int N;
  cin >> N;
  long long dist[N][N];
  vector<vector<bool> > origin(N,vector<bool>(N,true));

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> dist[i][j];
    }
  }

  for(int k = 0; k < N; k++){
    for(int u = 0; u < N; u++){
      for(int v = 0; v < N; v++){
        if(dist[u][v] > dist[u][k] + dist[k][v]){
          cout << -1 << endl;
          return 0;
        }else if(u != v && dist[u][v] == dist[u][k] + dist[k][v]){
          cout << "origin[" <<
          origin[u][v] = false;
        }
      }
    }
  }
  long long ans = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cout << origin[i][j] << ' ';
      if(origin[i][j]) ans += dist[i][j];
    }
    cout << endl;
  }

  cout << ans/2 << endl;
  return 0;

}
