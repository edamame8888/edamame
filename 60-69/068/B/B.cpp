#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int N,cnt = 0,num = 1;
  cin >> N;
  for(int i = N; i >= 1; i--){
    for(int j = 1; j < 7; j++){
      if(i % (1<<j) == 0){
        if(cnt < j){
          cnt = j;
          num = i;
        }
      }
    }
    //cout << num << " " << cnt << endl;
  }

  cout << num << endl;
}
