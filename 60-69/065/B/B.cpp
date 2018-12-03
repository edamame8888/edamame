#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  int a[N];
  for(int i = 0; i < N; i++){
    cin >> a[i];
    a[i]--;
  }
  vector<bool> visited(N,false);
  int current = 0;
  int cnt = 0;
  while(true){
    if(visited[current]){
      cout << -1 << endl;
      return 0;
    }else if(current == 1){
      cout << cnt << endl;
      return 0;
    }else{
      visited[current] = true;
      current = a[current];
      cnt++;
    }
  }
  return 0;
}
