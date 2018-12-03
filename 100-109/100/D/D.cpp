#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int N,M;

struct CAKE{
  long x;
  long y;
  long z;
};

vector<CAKE> cake;
vector<long> cake_abs;

void solve(){
  int check[8][3];
  long maxabs = -1;

  for(int i = 0; i <= 7; i++){
    //make bit 000 ~ 111
    int tmp = i;
    if(tmp - 4 >= 0) {check[i][2] = 1; tmp -= 4;} else check[i][2] = 0;
    if(tmp - 2 >= 0) {check[i][1] = 1; tmp -= 2;} else check[i][1] = 0;
    if(tmp - 1 >= 0) {check[i][0] = 1; } else check[i][0] = 0;


    for(int j = 0; j < N; j++){
      cake_abs.push_back( pow(-1,check[i][2]) * cake[j].x + pow(-1,check[i][1]) *cake[j].y + pow(-1,check[i][0])*cake[j].z) ;
    }

    sort(cake_abs.begin(), cake_abs.end(), std::greater<long>());

    long res = 0;
    for(int j = 0; j < M; j++) res += cake_abs[j];
    maxabs = max(maxabs,res);
    cake_abs.clear();
  }

  cout << maxabs << endl;
  return ;
}

int main(){
  cin >> N >> M;
  CAKE input;
  for(int i = 0; i < N; i++){
    cin >> input.x >> input.y >> input.z;
    cake.push_back(input);
  }

  solve();
  return 0;
}
