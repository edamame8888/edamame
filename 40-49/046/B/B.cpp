#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
  long long N,K;
  cin >> N >> K;
  printf("%lld\n",(long long)(K * pow(K-1,N-1)) ) ;
}
