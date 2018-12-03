#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
using namespace std;

int main(){
  map<char,int> alph;
  string  str;
  cin >> str ;
  for(int i = 0; i < str.size(); i++) alph[str[i]]++;
  for(int i = 0; i < 26; i++) if(alph[(char)('a' + i)] == 0) {cout << (char)('a' + i) << endl; return 0; }
  cout << "None" << endl;

}
