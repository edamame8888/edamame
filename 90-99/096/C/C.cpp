#include <iostream>
#include <string>
using namespace std;
bool primeNum[55556];

void makePrimeArray(){
  for(int i = 0; i < primeNum.size(); i++) primeNum[i] = true;
  primeNum[0] = false;
  primeNum[1] = false;
  for(int i = 2; i * i < 55556; i++){
    if(primeArray[i]) continue;
    int x = 2;
    while(primeArray[i] * x < 55556) {
      primeArray[primeArray[i] * x ] = false;
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
      if(primeArray[primeIndex] % 5 == 1 && i != N - 1){
        cout << primeArray[primeIndex] << " ";
        primeIndex ++;
        break;
      }else if(primeArray[primeIndex] % 5 == 1){
        cout << primeArray[primeIndex] << endl;
        return 0;
      }
      primeIndex ++;
    }
  }
  return 0;
}
