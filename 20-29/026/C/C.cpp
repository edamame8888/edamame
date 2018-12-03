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
struct EMPLOYEE{
  long long salary;
  vector<int> subordinate;
};

int main(){
  int N;
  cin >> N;
  vector<int> b(N);
  vector<EMPLOYEE> employee(N);
  for(int i = 0; i < N-1; i++){
    cin >> b[i];
    b[i]--;
    employee[b[i]].subordinate.push_back(i+1);
  }
  
  for(int i = N-1; i >= 0; i--){
    if(employee[i].subordinate.size() == 0)       employee[i].salary = 1;
    else if(employee[i].subordinate.size() == 0)  employee[i].salary = 2 * employee[employee[i].subordinate[0]].salary + 1;
    else{
      long long minSalary = (long long)(1e18);
      long long maxSalary = (long long)(-1);
      for(int j = 0; j < employee[i].subordinate.size(); j++){
        maxSalary = max(maxSalary,employee[employee[i].subordinate[j]].salary);
        minSalary = min(minSalary,employee[employee[i].subordinate[j]].salary);
      }
      employee[i].salary = maxSalary + minSalary + 1;
    }
  }
  cout << employee[0].salary << endl;
  return 0;
}
