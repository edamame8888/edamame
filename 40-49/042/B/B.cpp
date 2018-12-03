#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int N,L;
  cin >> N >> L;
  vector<string> words(N);
  for(int i = 0; i < N; i++){
    cin >> words[i];
  }
  sort(words.begin(),words.end());
  for(int i = 0; i < words.size(); i++){
    cout << words[i] ;
  }
  cout << endl;
  return 0;
}
