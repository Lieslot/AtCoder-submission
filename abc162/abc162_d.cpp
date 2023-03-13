#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>




ll cnt[4001][3] = {};



int main() {
	fastio;
	ll n, ans = 0;
	string s;

	cin >> n >> s;
	vector<int> p(n);
	for (int i = 0 ; i < n; i++) {
		if (s[i] == 'R') p[i] = 0;
		if (s[i] == 'G') p[i] = 1;
		if (s[i] == 'B') p[i] = 2;

	}

	for (int i = n-1; i >= 0; i--) {
		cnt[i][p[i]]++;
		for (int j = 0 ; j < 3; j++)
		cnt[i][j] += cnt[i+1][j];

	}

	for (int i = 0; i < n-2; i++) {
		for (int j = i+1; j < n-1; j++) {
			if (p[i] == p[j]) continue;
			int third;
			if (p[j] == 0 && p[i] == 1) {
				ans += cnt[j][2];
				third = 2;
			}
			if (p[j] == 1 && p[i] == 0) {
				ans += cnt[j][2];
				third = 2;
			}
			if (p[j] == 1 && p[i] == 2) {
				ans += cnt[j][0];
				third = 0;
			}
			if (p[j] == 2 && p[i] == 1) {
				ans += cnt[j][0];
				third = 0;
			}
			if (p[j] == 2 && p[i] == 0) {
				ans += cnt[j][1];
				third = 1;
			}
			if (p[j] == 0 && p[i] == 2) {
				ans += cnt[j][1];
				third = 1;
			}

			if (2*j-i >= n) continue;
			if (p[2*j-i] == third) ans--;



			}

		}

		cout << ans;

}





