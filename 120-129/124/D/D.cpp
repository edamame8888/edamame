#include <bits/stdc++.h>
using namespace std;

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

//container util
#define all(x) (x).begin(),(x).end()

//typedef
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VLL;
typedef vector<VLL> VVLL;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;


//conversion
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}


int main(){
  int n, cmd;
  string str;
  cin >> n >> cmd >> str;

  ll left = 0,right = -1;
  int cmdCnt = 0;
  bool flag = false;
  ll maxLength = 0;

  for(;; right ++){
    if(right == n-1) break;
    if(flag){ //0が連続している
      if(str[right+1] != '0'){
        flag = false;
      }
    }
    else{
      if(str[right+1] == '0'){
        if(cmdCnt == cmd) break;
        else{
          cmdCnt++;
          flag = true;
        }
      }
    }
  }

  maxLength =  right - left + 1;

  while(true){
      //左を縮める
      bool leftFlag = false;
      while(left <= right){
          if(leftFlag == false){
              if(str[left] == '1') left++;
              else{leftFlag = true; left++;}
          }else{
              if(str[left] == '1'){break;}
              else left++;
          }
      }
      //右を伸ばす
      bool rightFlag = false;
      while(right < n){
          if(right == n-1) break;
          if(rightFlag == false){
              if(str[right+1] == '0') right++;
              else{rightFlag = true; right++;}
          }else{
              if(str[right+1] == '0') break;
              else right++;
          }
      }
      //cout << left << ' ' << right << endl;
      if(right == n-1){
          cout << max(maxLength, right - left + 1) << endl;
          break;
      }else{
          maxLength = max(right - left + 1, maxLength);
      }
  }

  return 0;
}
