// 二項係数計算
long long COM(int n, int k) {
	if (n < k) return 0;
	if (n < 0 || k < 0) return 0;
	if (k == 0) return 1;
	return n * COM(n - 1, k - 1) / k;
}
