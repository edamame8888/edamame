
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int n;

int main(){
  cin >> n;
  vector<long> A;
  vector<long> num;
  long x;
  long b;
  for(int i = 0; i < n; i++){
    cin >> x;
    A.push_back(x);
    num.push_back(x - (i + 1));
  }
  sort(num.begin(),num.end());
  b = num[num.size()/2];
  

  long res = 0;
  for(long i = 0; i < n; i++){
    res +=  abs( A[i] - ( b + i+1));
  }

  cout <<  res << endl;



  return 0;
}
