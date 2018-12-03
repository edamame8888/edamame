#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int N,K;
string S;

int resrem[26] , Srem[26];

string solve(){
  string res = "";
  memset(Srem, 0, sizeof(Srem));
  memset(resrem, 0, sizeof(resrem));

  //memo alph num;
  for(int i = 0; i < N; i++){
    Srem[(int)(S[i] - 'a')] ++;
    resrem[(int)(S[i] - 'a')]++;
  }

  for(int i = 0; i < N; i++){
    char c = '*';
    for(int j = 0; j < 26; j++){
      if(resrem[j] == 0) continue;
      Srem[(int)(S[i] - 'a')] --;
      resrem[j] --;
      int mindif = 0;
      for(int k = 0; k < 26; k++){
        mindif += abs(Srem[k] - resrem[k]);
      }
      mindif /= 2;

      if(S[i] != (char)('a' + j)) mindif++;

      Srem[(int)(S[i] - 'a')]++;
      resrem[j]++;
      if(mindif <= K){
        c = (char)('a' + j);
        break;
      }
    }
    Srem[(int)(S[i] - 'a')]--;
    resrem[(int)(c - 'a')] --;
    res += c;
    if(S[i] != c) K--;
  }
  return res;
}

int main(){
  cin >> N >> K >> S;
  cout << solve() << endl;
}
