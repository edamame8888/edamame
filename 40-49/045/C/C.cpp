#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();
  int m = 1 << (n - 1);
  long long ans = 0;
  for(int i = 0; i < m; i++){ //２^(n-1) 通りのパターンを覚える。
    long long t = s[0] - '0';
    for(int j = 0 ; j < n; j++){
      if(j == n - 1 || i & 1 << j ){// i bit のフラグをが立っているかどうか。
        ans += t;
        t = 0;
        if(j == n - 1)  break;
      }
    t *= 10;
    t += s[j+1] - '0';
    }
  }
  cout << ans << endl;
}
