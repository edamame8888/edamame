#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  int S[5] = {0};
  cin >> n;
  string str = "MARCH",input;
  for(int i = 0; i < n; i++){
    cin >> input;
    auto p = str.find(input[0]);
    if( string::npos == p) continue;
    else S[p]++;
  }

  long long sum = 0;
  for(int i = 0; i < 5; i++) {
    for(int j = i + 1; j < 5; j++) {
      for(int k = j + 1; k < 5; k++) {
        sum +=  (long long)S[i] * S[j] * S[k];
      }
    }
  }
  cout << sum << endl;
}
