#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}


int main(){
  int n;
  cin >> n;
  vector<int> rainTime(1500,0);
  rep(i,n){
    string input;
    cin >> input;
    string sTime = input.substr(0,4);
    string eTime = input.substr(5);
    //cout << sTime << "    " << eTime << endl;

    //string -> int 変換
    int startTime = toInt(sTime);
    int endTime   = toInt(eTime);

    // 丸め
    if(startTime % 100 % 5 != 0) startTime -= startTime % 5;
    if(endTime % 100 % 5 != 0) endTime += (5 - (endTime%100%5));
    
    // 1分単位に変換
    startTime = (startTime / 100 * 60) + (startTime % 100 );
    endTime   = (endTime  / 100 *  60) + (endTime   % 100 );

    //imos 準備
    rainTime[startTime]   += 1;
    rainTime[endTime + 1] -= 1;

  }

  //imos
  rep(i,rainTime.size()-1){
    rainTime[i+1] += rainTime[i];
  }
  // rep(i,24){
  //   rep(j,12){
  //     cout << rainTime[12*i+j] << ' ';
  //   }
  //   cout << endl;
  // }
  bool rainFlag = false;

  rep(i,rainTime.size()-1){
    if(rainFlag == false && rainTime[i] > 0){
      rainFlag = true;
      cout << std::setw(2) << std::setfill('0') << i/60 ;
      cout << std::setw(2) << std::setfill('0') << (i%60) ;
    }else if(rainFlag && rainTime[i] == 0){
      cout << '-' ;
      cout << std::setw(2) << std::setfill('0') << (i-1)/60 ;
      cout << std::setw(2) << std::setfill('0') << ((i-1)%60) << endl;
      rainFlag = false;
    }
  }
  return 0;
}
