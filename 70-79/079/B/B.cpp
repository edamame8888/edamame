#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long L[87];

void makeArray(){
  L[0] = 2;
  L[1] = 1;
  for(int i = 2; i < 87; i++){
    L[i] = L[i-1] + L[i-2];
  }
}

int main(){
  int n;
  cin >> n;
  makeArray();
  cout << L[n] << endl;
}
