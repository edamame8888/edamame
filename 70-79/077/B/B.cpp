#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int n;
  cin >> n;
  long long i ;
  for(i = 0; i * i <= n; i++){}
  cout << (i-1)*(i-1) << endl;

}
