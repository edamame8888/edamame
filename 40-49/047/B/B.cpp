#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int hMax,hMin = 0,wMax,wMin = 0,N,x,y,a;
  cin >> wMax >> hMax >> N;
  for(int i = 0; i < N; i++){
    cin >> x >> y >> a;
    switch (a) {
      case 1:
        wMin = max(wMin,x);
        break;
      case 2:
        wMax = min(wMax,x);
        break;
      case 3:
        hMin = max(hMin,y);
        break;
      case 4:
        hMax = min(hMax,y);
        break;
    }
  }

  cout << max(0,wMax - wMin) * max(0,hMax - hMin) << endl;
}
