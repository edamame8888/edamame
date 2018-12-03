#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string s;
  int K;
  vector<string> sub_s;
  cin >>  s >> K;
  for(int i = 0; i < s.length(); i++){
    for(int j = i; j < i + 5; j++){
      sub_s.push_back(s.substr(i,j-i+1));
      sort(sub_s.begin(),sub_s.end());
      unique(sub_s.begin(),sub_s.end());
      if(sub_s.size() >= 6) sub_s.pop_back();
    }
  }
  cout << sub_s[K-1] << endl;
  return 0;
}
