#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
  string str;
  cin >> str ;
  cout << str[0] << (str.size()-2) << str[str.size()-1] << endl;
}
