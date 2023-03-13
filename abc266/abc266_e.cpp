#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>


double solve(int n) {
	double ans = 0;
	if (n == 0) {
		return ans;
	}

	double nxt = solve(n-1);
	

	for (double i = 1; i <=6 ; i++) {
		ans += max(i, nxt) / 6;
	} 


	return ans;

}





int main() {
	fastio;
	int n;
	cin >> n;

	cout << fixed;
	cout.precision(10);
	cout << solve(n);





}