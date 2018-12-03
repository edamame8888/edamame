#include <iostream>
#include <string>
using namespace std;
bool ava[10];
int K;
string N;

void solve(){
  string res;
  bool high = false;
  for(int i = 0; i < N.size(); i++){
    for(int j = 0; j<9; j++){
      if(!ava[j]) continue;
      else{
        if(i == )
      }
    }
  }
  cout << res << endl;
  reutrn ;
}


int main(){
  int x;
  cin >> N >> K;
  for(int i = 0; i < K ; i++) {
    cin >> x;
    ava[x] = false;
  }
  solve();
  return 0;
}
