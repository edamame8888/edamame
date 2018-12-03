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
  /*
  方針
  全ての地点の距離までのコストを累積和として持っておく
  */
  int H,W,D;
  cin >> H >> W >> D;
  int A[H][W];
  map<int,pair<int,int> > coordinates;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      scanf("%d",&A[i][j]);
      pair<int,int> input;
      input.first = i;
      input.second = j;
      coordinates[A[i][j]] = input;
    }
  }
  //calc cost
  vector<int> sumCost(H*W+1,0);
  for(int i = D+1; i < H*W+1; i++){
    sumCost[i] =  abs(coordinates[i].first - coordinates[i-D].first) +
                  abs(coordinates[i].second - coordinates[i-D].second);

  }

  //sum costs
  for(int i = 1; i <= H*W-D; i++){
    sumCost[i+D] += sumCost[i];
  }

  int Q;
  cin >> Q;
  for(int i = 0; i < Q; i++){
    int l,r;
    cin >> l >> r;
    cout << sumCost[r] - sumCost[l] << endl;
  }

  return 0;
}
