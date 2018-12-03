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
  int T ,N,M;
  cin >> T >> N;
  deque<int> A;
  for(int i = 0; i < N; i++){
    int input;
    cin >> input;
    A.push_back(input);
  }
  cin >> M;
  deque<int> B;
  for (int i = 0; i < M; i++) {
    int input;
    cin >> input;
    B.push_back(input);
  }

  for(int i = 0; i < M; i++){
    if(A.empty()){
      cout << "no" << endl;
      return 0;
    }else {
      while(true){
        if(A.front() + T >= B.front() && B.front() >= A.front()){
          A.pop_front();
          B.pop_front();
          break;
        }else if(B.front() < A.front()){
          cout << "no" << endl;
          return 0;
        }else{
           A.pop_front();
           if(A.empty()){
             cout << "no" << endl;
             return 0;
           }
        }
      }
    }
    if(B.empty()) break;
  }
  cout << "yes" << endl;
  return 0;
}
