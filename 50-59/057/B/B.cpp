#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

struct XY{
  int x;
  int y;
};

int main(){
  int N,M;
  cin >> N >> M;
  XY student[N],checkPoint[M];
  for(int i = 0; i < N; i++) cin >> student[i].x >> student[i].y;
  for(int i = 0; i < M; i++) cin >> checkPoint[i].x >> checkPoint[i].y ;
  int ans,diff,output;
  for(int i = 0; i < N; i++){
    ans = (int)1e9;
    for(int j = 0; j < M; j++){
      diff = abs(student[i].x - checkPoint[j].x) + abs(student[i].y - checkPoint[j].y);
      if(ans > diff){
        output = j + 1;
        ans = diff;
      }
    }
    cout << output << endl;
  }

  return 0;
}
