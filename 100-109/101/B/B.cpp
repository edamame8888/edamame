#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
long n;

string strN;
void solve(){
  int S = 0;
  long N;
  for(int i = 0; i < strN.size(); i++){
    S += strN[i] - '0';
  }
  N = atoi(strN.c_str());
  if(N%S == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return;
}
int main(){
  cin >>  strN;
  solve();
  return 0;
}
