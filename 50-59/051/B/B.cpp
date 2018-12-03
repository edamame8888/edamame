#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int K,S,cnt = 0;
  cin >> K >> S;
  for(int x = 0; x <= K; x++){
    for(int y = 0; y <= S - x && y <= K; y++){
        if( S - (x + y) <= K ) cnt++;
    }
  }
  cout << cnt << endl;
}
