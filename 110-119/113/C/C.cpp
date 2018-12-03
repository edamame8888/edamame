#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}


int main(){
  int n,m;
  cin >> n >> m;

  vector<pair<pair<int,int>,int >> city;
  rep(i,m){
    int p,y;
    cin >> p >> y;
    city.push_back(make_pair(make_pair(p,y),i));
  }
  sort(all(city));
  rep(i,m){
    if(i == 0) city[i].first.second = 1;
    else if(city[i-1].first.first == city[i].first.first){

      city[i].first.second = city[i-1].first.second + 1;
    }else{
      city[i].first.second = 1;
    }
    //cout << city[i].first.second << endl;
  }

  rep(i,m){
    int tmp,tmp2;
    tmp = city[i].first.first;
    tmp2 = city[i].first.second;

    city[i].first.first = city[i].second;
    city[i].first.second = tmp;
    city[i].second = tmp2;

  }

  sort(all(city));

  rep(i,m){
    cout << std::setfill('0') << std::right << std::setw(6)  << city[i].first.second;
    cout << std::setfill('0') << std::right << std::setw(6)  << city[i].second << endl;

  }
  return 0;
}
