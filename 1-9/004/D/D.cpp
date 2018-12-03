#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

using namespace std;

const int Rstart = -100;
const int Gstart =    0;
const int Bstart =  100;
int APSum(int n){
  return n * (n+1) / 2;
}

int calcMove(pair<int,int> Lenge,int start){
  int score = 0;
  if(Lenge.first <= start && start <= Lenge.second){
    score += APSum(abs(Lenge.first - start)) + APSum(abs(Lenge.second - start)) ;
  }else{
    score -= min(APSum(abs(Lenge.first - start)-1),APSum(abs(Lenge.second - start)-1));
    score += max(APSum(abs(Lenge.first - start)),APSum(abs(Lenge.second - start)));
  }
  return score;
}
int main(){

  int RNum,GNum,BNum;// 個数
  pair<int,int> RLenge,GLenge,BLenge;// 個数

  //input
  cin >> RNum >> GNum >> BNum;

  int minScore = 1e9;
  //deside RNum Lenge
  rep(i,900){ // -100 -> (-100 - i)
    RLenge.first  = Rstart  - i;
    RLenge.second = Rstart + (RNum - i - 1);
    //deside GNum Lenge
    if(RLenge.second < Gstart &&
       abs(RLenge.second - Gstart) >= (GNum-1) / 2 ){
         //G は 左右に (GNum-1)/2 ずつ広げる
         if(GNum % 2 == 1){//odd
           GLenge.first  = Gstart - (GNum-1)/2;
           GLenge.second = Gstart + (GNum-1)/2;
         } else {//even
           GLenge.first  = Gstart - (GNum-1)/2;
           GLenge.second = Gstart + (GNum-1)/2 + 1;
         }

       } else {
         //G  は Rの右端の次から連続にGNumの区間を埋める
         GLenge.first  = RLenge.second + 1;
         GLenge.second = GLenge.first + GNum - 1;
       }
    //deside BNum Lenge
    if(GLenge.second < Bstart &&
       abs(GLenge.second - Bstart) >= (BNum-1) / 2 ){
         //B は 左右に (BNum-1)/2 ずつ広げる
         if(BNum % 2 == 1){
           BLenge.first  = Bstart - (BNum-1)/2;
           BLenge.second = Bstart + (BNum-1)/2;
         } else {
           BLenge.first  = Bstart - (BNum-1)/2;
           BLenge.second = Bstart + (BNum-1)/2 + 1;
         }

      } else {
         //G  は Rの右端の次から連続にGNumの区間を埋める
         BLenge.first  = GLenge.second + 1;
         BLenge.second = BLenge.first + BNum - 1;
      }
    //calc Score
    int score = 0;

    score = calcMove(RLenge,Rstart) + calcMove(GLenge,Gstart) + calcMove(BLenge,Bstart);
    // if(RLenge.second == -100){
    //   cout << "-------------------------------------" << endl;
    //   cout << "RLenge : " << RLenge.first << " , " << RLenge.second << endl;
    //   cout << "GLenge : " << GLenge.first << " , " << GLenge.second << endl;
    //   cout << "BLenge : " << BLenge.first << " , " << BLenge.second << endl;
    //   cout << calcMove(RLenge,Rstart) << " , " <<  calcMove(GLenge,Gstart) << " , " << calcMove(BLenge,Bstart) << endl;
    //   cout << score << endl;
    //   cout << "-------------------------------------" << endl;
    // }
    //upDate min Score
    minScore = min(minScore,score);
  }
  cout << minScore << endl;
  return 0;
}
