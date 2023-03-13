#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>


ll d[100001][5] = {};

int main() {
	fastio;
	int n, T = 0;
	ll ans = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int t, x, a;
		cin >> t >> x >> a;
		d[t][x] = a;
		T = max(T, t);
	}
	for (int i = 0; i <= 4; i++) {
		for (int j = i+1; j <= 4; j++) {
			d[i][j] = -1e18;
		}
	}

	for (int i = 1; i <= T; i++) {
		for (int j = 0; j <= 4; j++) {
			if (d[i][j] == 1e18) continue;
			ll now;
			if (j == 0) now = max(d[i-1][j], d[i-1][j+1]);
			else if (j == 4) now = max(d[i-1][j], d[i-1][j-1]);
			else now = max(d[i-1][j], max(d[i-1][j-1],d[i-1][j+1]));
			d[i][j] += now;
		}
	}

	cout << *max_element(d[T], d[T] + 5);

	





}