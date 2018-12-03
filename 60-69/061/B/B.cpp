#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
using namespace std;

int main(){
  int n,m,a,b;
  cin >> n >> m;
  map<int,int> city;
  for(int i = 0; i < m; i++){
    cin >> a >> b;
    city[a-1]++;
    city[b-1]++;
  }
  for(int i = 0; i < n; i++){
    cout << city[i] << endl;
  }
}
