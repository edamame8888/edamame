#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
using namespace std;

int main(){
  string s;
  cin >> s;
  map<char,int> cnt;
  for(int i = 0; i < s.size(); i++){
    if(cnt[s[i]] == 1) {
      cout << "no" << endl;
      return 0;
    } else {
      cnt[s[i]]++;
    }
  }
  cout << "yes" << endl;
  return 0;
}
