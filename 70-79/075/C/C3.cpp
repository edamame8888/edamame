#include <bits/stdc++.h>

using namespace std;

int N, M, a[51], b[51];
bool g[51][51];
bool vis[51];

void dfs(int cur){
  for(int i = 0; i < N; i++){
    if(g[cur][i] == true && vis[i] == false){
      vis[i] = true;
      dfs(i);
    }
  }
}

int main(){
  cin >> N >> M;
  for(int i = 0; i < M; i++){
    cin >> a[i] >> b[i];
    a[i]--; b[i]--;
    g[a[i]][b[i]] = g[b[i]][a[i]] = true;
  }

  int ans=0;
  for(int i = 0; i < M; i++ ){
    g[a[i]][b[i]] = g[b[i]][a[i]] = false;

    for(int j = 0; j < N; j++) vis[j] = false;
    vis[0] = true;

    dfs(0);
    //for(int j = 0; j < N; j++) cout << vis[j] << " " ;
    //cout << endl;
    for(int j = 1; j < N; j++){
      if(vis[j] == false){
        ans++;
        break;
      }
    }
    //cout << ans << endl;
    g[a[i]][b[i]] = g[b[i]][a[i]] = true;
  }

  cout << ans << endl;

  return 0;
}
