#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> group{0,2,0,1,0,1,0,0,1,0,1,0};
  int a,b;
  cin >> a >> b;
  if(group[a-1] == group[b-1]) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
