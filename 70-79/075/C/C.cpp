#include <iostream>
#include <map>
#include <vector>
#include <cstdio>

using namespace std;
int N,M;
bool graph[51][51];
bool vis[51];
int cnt;
void dfs(int x){
  if(cnt == N) return;
  for(int i = 0; i < N; i++){
    if(vis[i]) continue ;
    if(graph[x][i] == false) continue;
    vis[i] = true;
    cnt++;
    dfs(i);
  }
  return;
}

int main(){
  //intput
  cin >> N >> M;
  pair<int,int> edge[M];
  for(int i = 0; i < M; i++){
    scanf("%d %d",&edge[i].first,&edge[i].second);
    edge[i].first --; edge[i].second --;
    graph[edge[i].first][edge[i].second] = true;
    graph[edge[i].second][edge[i].first] = true;
  }

  int ans = 0;
  for(int i = 0; i < M; i++){
    graph[edge[i].first][edge[i].second] = false;
    graph[edge[i].second][edge[i].first] = false;
    for(int j = 0; j < N; j++) vis[j] = false ;
    vis[0] = true;
    cnt = 1;
    dfs(0);
    if(cnt != N) ans ++; 
    graph[edge[i].first][edge[i].second] = true;
    graph[edge[i].second][edge[i].first] = true;
  }

  cout << ans  << endl;
}
