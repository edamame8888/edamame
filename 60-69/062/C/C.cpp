#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}


int main(){
  long long H,W;
  cin >> H >> W;
  if(H % 3 == 0 || W % 3 == 0){
    cout << 0 << endl;
    return 0;
  }
  long long score = H*W;
  //縦に3分割
  if(H > 2) score = min((H/3 + 1)*(W) - (H/3) * W,score);

  //横に3分割
  if(W > 2) score = min((W/3+1)*H - W/3 * H,score);

  //縦に2分割 -> 横に2分割
  FOR(h,1,H){
    if(W%2 == 1) score = min( max(h*W,(H-h)*(W/2 + 1))
                            - min(h*W,(H-h)*(W/2)) , score);
    if(W%2 == 0) score = min( max(h*W,(H-h)*(W/2))
                            - min(h*W,(H-h)*(W/2)) , score);
  }

  FOR(w,1,W){
    if(H%2 == 1) score = min( max(w*H,(W-w)*(H/2 + 1))
                            - min(w*H,(W-w)*(H/2)) , score);
    if(H%2 == 0) score = min( max(w*H,(W-w)*(H/2))
                            - min(w*H,(W-w)*(H/2)) , score);
  }

  cout << score << endl;
  return 0;
}
