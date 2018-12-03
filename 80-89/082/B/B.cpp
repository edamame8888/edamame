#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  string  a,b;
  cin >> a >> b;
  sort(a.begin(),a.end());
  sort(b.begin(),b.end(),greater<char>());
  if(a<b) cout << "Yes" << endl;
  else cout << "No" << endl;

}
