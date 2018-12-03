#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main(){
  int n,input,x,cnt;
  cin >> n;
  int open[n][10] ;
  int P[n][11];
  int maxSales = INT_MIN;
  int sumSales ;
  vector<int> sales(n,0);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 10; j++){
      cin >> input;
      open[i][j] = input;
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < 11; j++){
      cin >> input;
      P[i][j] = input;
    }
  }

  for(int i = 1 ; i < (1<<10); i++){
    x = i;
    cnt = 0;
    sumSales = 0;
    //i番目のbitが立っていたら加算
    while(x != 0){
      if(x%2){
        for(int j = 0; j < n; j++){
          sales[j] += open[j][cnt];
        }
      }
      x/=2;
      cnt++;
    }

    for(int j = 0; j < n; j++) sumSales += P[j][sales[j]];

    maxSales = max(sumSales,maxSales);

    sales =  vector<int>(n,0);
  }
  cout << maxSales << endl;
  return 0;
}
