#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
  vector<int> a{1,2,3,4,5,6};
  for(int i = 0; i < 1000; i++){
    swap(a[i%5],a[i%5+1]);
    cout << "i = " << i << ", N = " << i+1 << " : ";
    for(int x: a){
      cout << x << ", ";
    }
    cout << endl;
  }

  return 0;
}
