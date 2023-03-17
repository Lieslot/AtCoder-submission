#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>



int main() {
	fastio; 
	int n, cntba = 0, cnta = 0, cntb = 0, ans = 0, cntab = 0, cntbb = 0, cntaa = 0;
	cin >> n;

	vector<string> arr(n);
	for (auto &i : arr) {
		cin >> i;

		if (i.back() == 'A' && i.front() == 'B') cntba++;
		else if (i.back() == 'A') cnta++;
		else if (i.front() == 'B') cntb++;
		if (i.back() == 'B' && i.front() == 'A') cntab++;
		else if (i.back() == 'B') cntaa++;
		else if (i.front() == 'A') cntbb++;


	}

	if (cntba == 0) {
		ans += min(cnta, cntb);
	}
	else {
		if (cnta == 0 && cntb == 0) ans += cntba-1;
		else ans =+ cntba + min(cnta, cntb);
		

	}
	





	for (auto i : arr) {
		for (int j = 0; j < i.length()-1; j++) {
			if (i[j] == 'A' && i[j+1] == 'B') ans++;
			
		}
	}

	cout << ans;












}




