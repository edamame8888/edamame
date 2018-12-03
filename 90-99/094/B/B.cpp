#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int n,m,x,a;
  cin >> n >> m >> x;
  int left = 0;
  int right = 0;
  for(int i = 0; i < m; i++){
    cin >> a;
    if(x < a) right++;
    else left++;
  }
  cout << min(right , left) << endl;
}
