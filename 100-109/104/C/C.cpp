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
int D , G;
int p[11];
int q[11];
int c[11];
//dp ? i
void solve(){
  //1番多い点数から解いた場合の点数
  long res = 0;
  long score = 0;
  long minres;
  for(int i = D-1; i >= 0; i--){
    int question = p[i];
    while(true){
      score += 100*(i+1);
      question --;
      res++;
      if(question == 0) {
        score += c[i];
        break;
      }
      if(G <= score) break;
    }
    if(G <= score) break;
  }
  minres = res;
  bool cbit[10];
  //1~10 で ボーナスをもらった場合
  for(int i = 0; i < (1 << D); i++){
    res = 0;
    score = 0;
    for(int j = 0; j < D; j++) q[j] = p[j];

    int tmp = i;
    // make bit ----------------------------
    int x = 0;
    for(int j = 0; j < 10; j++) cbit[j] = false;
    while(tmp != 0){
      if(tmp % 2 == 1)cbit[x] = true;
      else cbit[x] = false;
      x++;
      tmp /= 2;
    }
    // bit フラグが立っている問題を全問解く -------------------
    for(int j = 0; j < D; j++){
      if(cbit[j]){
        res += p[j];
        score += (100 * (j+1) * p[j]) + c[j];
        q[j] = 0;
      }
    }
    // まだスコアがG以下なら貪欲法で加点していく
    if(score >= G){
      minres = min(res,minres);
      continue;
    }else{
      for(int j = D-1; j >= 0; j--){
        int question = q[j];
        if(question == 0) continue;
        while(true){
          score += 100*(j+1);
          question --;
          res++;
          if(question == 0) {
            score += c[j];
            break;
          }
          if(G <= score) break;
        }
        if(G <= score) break;
      }
      minres = min(res,minres);
    }
  }
  cout << minres << endl;
  return;
}

int main(){

  cin >> D >> G;
  for(int i = 0; i < D; i++){
    cin >> p[i] >> c[i];
  }
  solve();
  return 0;
}
