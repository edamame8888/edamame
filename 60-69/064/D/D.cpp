#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

using namespace std;

int main(){

  int N;
  string S;
  cin >> N >> S;
  deque<char> q;
  rep(i,S.size()){
    if(S[i] == '(') q.push_back(S[i]);        //スタックに積み込む
    else{
      if(q.empty() == false && q.back() == '(') q.pop_back();       //かっこ成立
      else                q.push_back(S[i]);  //スタックに積み込む
    }
  }
  string headStr = "" , tailStr = "";
  while(q.empty() == false){
    if(q.back() == ')') headStr += '(';
    if(q.back() == '(') tailStr += ')';

    q.pop_back();
  }
  cout << headStr << S << tailStr << endl;
  return 0;
}
