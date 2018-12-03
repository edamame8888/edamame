#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  int S;
  for(int i = 1; i < 200; i++){
    if(i < 10) S = i;
    else if(i < 99) S = i/10 + i%10;
    else if(i < 999) S = i/100 + ( (i%100)/10 + i % 10 );
    cout << i << " : " << i/(double)S << endl;
  }
  return 0;
}
