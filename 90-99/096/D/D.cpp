#include <iostream>
#include <string>
using namespace std;
bool primeNum[55556];

void makePrimeArray(){
  for(int i = 0; i < 55556; i++) primeNum[i] = true;
  primeNum[0] = false;
  primeNum[1] = false;
  for(int i = 2; i * i < 55556; i++){
    if(!primeNum[i]) continue;
    int x = 2;
    while(i * x < 55556) {
      primeNum[ i * x ] = false;
      x++;
    }
  }
}
int main(){
  int N;
  cin >> N;
  makePrimeArray();
  int primeIndex = 6;
  for(int i = 0; i < N; i++){
    while(true){
      if(primeNum[primeIndex] && primeIndex % 5 == 1 && i != N - 1){
        cout << primeIndex << " ";
        primeIndex ++;
        break;
      }else if( primeNum[primeIndex]  && primeIndex % 5 == 1){
        cout << primeIndex << endl;
        return 0;
      }
      primeIndex ++;
    }
  }
  return 0;
}
