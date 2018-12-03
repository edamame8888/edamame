#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<pair<int,int> > x(N);
  vector<pair<int,int> > y(N);
  vector<pair<int,pair<int,int> > > xMemo;
  vector<pair<int,pair<int,int> > > yMemo;
  for(int i = 0; i < N; i++){
    cin >> x[i].first >> y[i].first;
    x[i].second = i;
    y[i].second = i;
  }

  sort(x.begin(),x.end());
  sort(y.begin(),y.end());

  pair<int,int> Xpair;
  pair<int,int> Ypair;
  pair<int,pair<int,int> > absPairX;
  pair<int,pair<int,int> > absPairY;

  for(int i = 1; i < N; i++){
    int absX = x[i].first - x[i-1].first;
    int absY = y[i].first - y[i-1].first;

    Xpair.first   = x[i].second;
    Xpair.second  = x[i-1].second;

    Ypair.first   = y[i].second;
    Ypair.second  = y[i-1].second;

    absPairX.first  = absX;
    absPairX.second = Xpair;

    absPairY.first  = absY;
    absPairY.second = Ypair;

    xMemo.push_back(absPairX);
    yMemo.push_back(absPairY);
  }

  sort(xMemo.begin(),xMemo.end());
  sort(yMemo.begin(),yMemo.end());

  vector<bool> vis(N,false);
  int visCnt = 0;
  long long cost = 0;
  int xcnt = 0, ycnt = 0;
  bool flag = false;
  while(visCnt != N || flag){
    long long absX, absY;
    if(xMemo.size() > xcnt )  absX = xMemo[xcnt].first;
    else                      absX = 10000000000000000;

    if(yMemo.size() > ycnt )  absY = yMemo[ycnt].first;
    else                      absY = 10000000000000000;


    if(absX < absY){
      if(vis[xMemo[xcnt].second.first] && vis[xMemo[xcnt].second.second]){
        xcnt++;
        continue;
      }
      cost += xMemo[xcnt].first;
      if(vis[xMemo[xcnt].second.first] ^ vis[xMemo[xcnt].second.second]) flag = true;
      if(vis[xMemo[xcnt].second.first] == false){
        vis[xMemo[xcnt].second.first] = true;
        visCnt ++;
      }
      if(vis[xMemo[xcnt].second.second] == false){
        vis[xMemo[xcnt].second.second] = true;
        visCnt ++;
      }

      xcnt++;
      //cout << "x" << visCnt<< endl;

    }else{
      if(vis[yMemo[ycnt].second.first] && vis[yMemo[ycnt].second.second]){
        ycnt++;
        continue;
      }
      cost += yMemo[ycnt].first;
      if(vis[yMemo[ycnt].second.first] == false){
        vis[yMemo[ycnt].second.first] = true;
        visCnt ++;
      }
      if(vis[yMemo[ycnt].second.second] == false){
        vis[yMemo[ycnt].second.second] = true;
        visCnt ++;
      }
      ycnt++;
      //cout << "y:" << visCnt <<endl;
    }
  }
  cout << cost << endl;
  return 0;
}
