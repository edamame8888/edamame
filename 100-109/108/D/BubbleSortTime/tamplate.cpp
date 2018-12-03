#include <iostream>

using namespace std;

typedef long long ll;

int n;
int a[(int)(1e5+1)];

void solve(){
  ll ans = 0;
  for(int j = 0; j < n; j++){
    ans += j - sum(a[j]);
    add(a[j],1);
  }
  printf("%lld\n", ans);
}

int main(){
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
}
