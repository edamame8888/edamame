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

int mismatch(string a, string b){
  int res = 0;
  for(int i = 0; i < a.size(); i++){
    if(a[i] != b[i]) res++;
  }
  return res;
}

//Tail はできる限りoriginalに合わせる
pair<int,string> makeTail(string originTail, map<char,int> available){
  string tail = "";
  int missCnt = 0;
  vector<int> missItr;
  pair<int,string> res;
  for(int i = 0; i < originTail.size(); i++){
    if(available[originTail[i]] > 0){
      available[originTail[i]] --;
      tail = tail + originTail[i];
    }else{
      missCnt ++;
      tail = tail + '*';
      missItr.push_back(i);
    }
  }

  for(int i = 0,itr = 0; i < 26; i++){

    while(available[(char)(i +'a')] != 0){
      if(itr == missItr.size()){
        res.first = missCnt; res.second = tail;
        return res;
      }
      available[(char)(i +'a')] --;
      tail[missItr[itr]] = (char)(i +'a');
      itr++;
    }
  }
  res.first = missCnt; res.second = tail;
  return res;
}

int main(){
  int N,K;
  string S;
  cin >> N >> K >> S;
  string tmp = S;
  string ans = S;
  sort(tmp.begin(),tmp.end());
  for(int i = 1; i <= N; i++){
    //先頭部分
    string head = tmp.substr(0,i);
    int cnt = mismatch(head,S.substr(0,i));

    //先頭部分の不一致数がKを越えた場合
    if(cnt > K) continue;

    //後半部分の文字列がどのようになるか
    string originTail = S.substr(i);
    string sortTail = tmp.substr(i);
    map<char,int> available;
    for(int j = 0; j < sortTail.size(); j++) available[sortTail[j]] ++;
    pair<int,string> tail;
    tail = makeTail(originTail,available);
    if(cnt + tail.first <= K) ans = head + tail.second;
    else continue;
  }
  cout << ans << endl;
  return 0;
}
