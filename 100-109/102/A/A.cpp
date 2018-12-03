
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
long n;
string str;
void solve(){
  /*
  2桁 1~81 (keta)C2 * 81
  3桁 82~81+(keta)C2 * 81 ......
  */


  //桁判断
  int keta = 1;
  while(n <= keta * (keta-1) / 2 * 81){
    n = n - keta * (keta-1) / 2 * 81;
    keta++;
  }
  cout << keta << endl;
  for(i = 1; i <= 9; i++){
    for(j = 0; j <= 9; j++){
      if(i==j) continue;
      for(k=1; k < (1<< (keta-1));k++){
        int tmp = k;
        int x = keta-1;
        char ans[keta];
        ans[0] = i + '0';
        //keta-1ヶ所に2つの数字を埋める
        if(i<j){//i.......j~ ijjjjjjj....jjjj
          tmp++; //1~2^(keta-1)-1 を作るため
          while(x != 0){
              if(tmp%2==0) ans[x] = i + '0';
              else ans[x] = j + '0';
              x++;
              tmp/=2;
          }
        }else if(j<i){//ijjjj...jjjjjj~ iiiiiiiii.....ij
          tmp--; //0~2^(keta-1)-2 を作るため
          while(x != 0){//000000000~111111111110
            if(tmp%2==0) ans[x] = j + '0';
            else ans[x] = i + '0';
            x++;
            tmp/=2;
          }
        }


        n--;
        if(n== 0){
          for(int l = 0; l < keta; l++){
            cout << ans[l] ;
          }
            cout << endl;
            return 0;
        }
      }
    }
  }
  //

  return;
}


int main(){
  while(true){
    cin >> n;
    solve();
  }
  return 0;
}
