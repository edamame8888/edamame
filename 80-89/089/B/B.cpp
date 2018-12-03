#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
using namespace std;

int main(){
  map<char,int> kinds;
  int n,cnt = 0;
  char input;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> input;
    if(kinds[input] == 0) cnt++;
    kinds[input]++;
  }
  if(cnt == 4) cout << "Four" << endl;
  else cout << "Three" << endl;
}
