#include <iostream>
#include <string>
#define rep(i, a) for (int i = 0; i < (a); i++)
using namespace std;

int dp[101010][2][2][2][2][2][2]; // pos, less,has3 ,has5,has7,not 3,5,7, 上位桁が0かどうか

int main() {
    string A;
    cin >> A;
    int n = A.length();
    int ans = 0;

    dp[0][0][0][0][0][1][1] = 1;
    rep (i, n) {
      rep (j, 2) rep (k, 2) rep (l, 2) rep (m, 2) rep (p, 2) rep(q,2){
          int lim = j ? 9 : A[i] - '0';
          rep (d, lim + 1) {
              (dp[i + 1][j || d < lim][k || d == 3][l || d == 5][m || d == 7][(p||q) && ((d==3) || (d==5) || (d==7))][q && (d==0)] += dp[i][j][k][l][m][p][q]);
          }
      }
    }



    rep(j,2) ans += dp[n][j][1][1][1][1][0];

    cout << ans << endl;
    return 0;
}
