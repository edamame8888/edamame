
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
  int a,b,c,d;
  cin >>a>>b>>c>>d;
  if( abs( a - c ) <= d || (abs(a - b) <= d && abs(b - c) <= d) ) puts("Yes");
  else puts("No");
  return 0;
}
