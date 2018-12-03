#include "bits/stdc++.h"
using namespace std;

using VS = vector<string>;    using LL = long long;
using VI = vector<int>;       using VVI = vector<VI>;
using PII = pair<int, int>;   using PLL = pair<LL, LL>;
using VL = vector<LL>;        using VVL = vector<VL>;

#define ALL(a)  begin((a)),end((a))
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define SZ(a) int((a).size())
#define SORT(c) sort(ALL((c)))
#define RSORT(c) sort(RALL((c)))
#define UNIQ(c) (c).erase(unique(ALL((c))), end((c)))
#define FOR(i, s, e) for (int(i) = (s); (i) < (e); (i)++)
#define FORR(i, s, e) for (int(i) = (s); (i) > (e); (i)--)
#define debug(x) cerr << #x << ": " << x << endl
const int INF = 1e9;                          const LL LINF = 1e16;
const LL MOD = 1000000007;                    const double PI = acos(-1.0);
int DX[8] = { 0, 0, 1, -1, 1, 1, -1, -1 };    int DY[8] = { 1, -1, 0, 0, 1, -1, 1, -1 };

/* -----  __MAKE_TIME__  Problem: __PROBLEM__ / Link: __CONTEST_URL__  ----- */
/* ------問題------
-----問題ここまで----- */
/* -----解説等-----
----解説ここまで---- */

LL N;

LL ans = 0LL;

//[L,R]のいい感じの分割
PLL f(VL& csum, int L, int R) {
	int LLL = L, RRR = R;
	FOR(i, 0, 10) { // check [L,mid][mid+1,R]
		int mid1 = (2*L + R) / 3;
		int mid2 = (L + 2*R) / 3;
		LL dif1 = LINF, dif2 = LINF;
		{
			LL A = csum[mid1] - csum[LLL - 1];
			LL B = csum[RRR] - csum[mid1];
			dif1 = abs(A - B);
		}
		{
			LL A = csum[mid2] - csum[LLL - 1];
			LL B = csum[RRR] - csum[mid2];
			dif2 = abs(A - B);
		}
		if (dif2 < dif1) {
			L = mid1;
		}
		else {
			R = mid2;
		}
	}
	LL dd = LINF;
	LL M = 0;
	FOR(i, 0, R-L+1) {
		int mid2 = L + i;
		LL A = csum[mid2] - csum[LLL - 1];
		LL B = csum[RRR] - csum[mid2];
		if (abs(A - B) < dd) {
			dd = abs(A - B);
			M = mid2;
		}
	}
	LL A = csum[M] - csum[LLL - 1];
	LL B = csum[RRR] - csum[M];
	return PLL(A, B);
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	cin >> N;
	VL a(N);
	FOR(i, 0, N)cin >> a[i];
	VL csum(N + 1, 0);
	FOR(i, 0, N)csum[i + 1] = csum[i] + a[i];
	// iを決める(a,b||c,d)
	// この中の最適分割は
	// なかをいい感じに分割することである
	ans = LINF;
	FOR(c, 2, N - 1) { // cの位置
		// [A,B]:[1:c]
		PLL ab = f(csum, 1, c);
		// [C,D]:[c+1,N]
		PLL cd = f(csum, c + 1, N);
		LL Max = max({ ab.first,ab.second,cd.first,cd.second });
		LL Min = min({ ab.first,ab.second,cd.first,cd.second });
		ans = min(ans, Max - Min);
	}

	cout << ans << "\n";

	return 0;
}
