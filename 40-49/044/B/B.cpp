#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> alph(26,0);
  string w;

  cin >> w;

  for(int i = 0; i < w.size(); i++){
    alph[w[i] - 'a'] ++;
  }

  for(int i = 0; i < 26; i++){
    if(alph[i] % 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
