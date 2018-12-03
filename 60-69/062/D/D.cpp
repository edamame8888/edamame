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
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <queue>

using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}

int main(){
  int N,x;
  scanf("%d",&N);
  pair<int,int> a;
  priority_queue<pair<int,int>> queue;
  for(int i = 0; i < 3*N; i++){
    scanf("%d",&x);
    a.first = x;
    a.second = i + 1;
    queue.push(a);
  }
  long sum_head = 0, sum_tail = 0;
  int  out_cnt = 0, head_cnt = 0;
  while(!queue.empty()){
    a = queue.top();
    printf("first = %d,second =%d\n",a.first, a.second) ;
    if(N == head_cnt && N == out_cnt){
      sum_tail += a.first;
      printf("pass 1\n") ;
    }else if(N == head_cnt){
      out_cnt ++;
      printf("pass 2\n") ;
    }else if(a.second - out_cnt <= (3*N - out_cnt)/2){
      head_cnt++;
      sum_head += a.first;
      printf("pass 3\n") ;
    }else{
      out_cnt++;
      printf("pass 4\n") ;
    }
    printf("sum_head = %ld,sum_tail =%ld\n",sum_head, sum_tail) ;
    queue.pop();
  }
  printf("%ld\n",sum_head - sum_tail) ;
  return 0;
}
