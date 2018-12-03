#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

int main(){
  int input[5];
  cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4];
  int maxSum = -1;
  int bit[5];
  vector<int> sumArray;

  for(int i = 0; i < (1<<5); i++){
    int x = i;
    int cnt = 0;
    int chosed = 0;
    for(int j = 0; j < 5; j++) bit[j] = 0;
    while(x != 0){
      if(x % 2 == 1){ bit[cnt] = 1; chosed++;}
      else bit[cnt] = 0;
      cnt ++;
      x /= 2;
    }

    if(chosed != 3) continue;
    int sum = 0;
    for(int j = 4; j >= 0; j--) if(bit[j]) sum += input[j];
    sumArray.push_back(sum);
  }
  sort(sumArray.begin(),sumArray.end(),greater<int>());
  //for(int i = 0; i < sumArray.size(); i++) cout << sumArray[i] << ' '  ;
  sumArray.erase(unique(sumArray.begin(),sumArray.end()),sumArray.end());
  cout << sumArray[2] << endl;
  return 0;
}
