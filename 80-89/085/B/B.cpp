#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main(){
  int n,input;
  cin >> n;
  vector<int> A;
  for(int i = 0; i < n ; i++) {
    cin >> input;
    A.push_back(input);
  }
  //descendingSort
  sort(A.begin(),A.end());
  //unique
  A.erase(unique(A.begin(),A.end()),A.end());
  cout << A.size() << endl;
}
