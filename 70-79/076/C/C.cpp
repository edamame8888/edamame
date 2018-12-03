#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  //input
  string S,T;
  cin >> S >> T;

  //S[i]から始めた文字列がTと一致するか調べる
  string str,ans = "~";
  bool findT;
  int Slen = S.length();
  int Tlen = T.length();
  for(int i = 0; i <= Slen - Tlen; i++){
    //文字列Tが存在するかチェック
    findT = true;
    for(int j = 0; j < T.size() ; j++){
      if( S[i+j] == T[j] || S[i+j] == '?' ) continue;
      else findT = false ;
    }

    if(findT){
      str = S.substr(0,i) + T + S.substr(i + T.size());
      for(int l = 0; l < str.size(); l++) if(str[l] == '?') str[l] = 'a';
      ans = min(ans,str);
    }
  }
  if(ans == "~") cout << "UNRESTORABLE" << endl;
  else cout << ans << endl;
}
