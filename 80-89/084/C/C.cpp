#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  int c[n],s[n],f[n];
  for(int i = 0; i < n-1; i++){
    cin >> c[i] >> s[i] >> f[i];
  }
  int cost;
  for(int i = 0; i < n; i++){
    if(i != n-1) cost = s[i];
    else cost = 0;
    for(int j = i; j < n-1; j++){

      //始発の時間より前
      if(cost < s[j]) cost = s[j];

      //次の列車の時刻
      cost += ( f[j] - (cost % f[j]) ) % f[j];

      //移動のコストを加算
      cost += c[j];
    }
    cout << cost << endl;
  }
  return 0;
}
