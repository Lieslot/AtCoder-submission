#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>

int n;

int comp (vector<pi> odd, vector<pi> even) {
	int o = odd.size(), e = even.size();
	int ret = 1e9;
	for (int i = 1; i < e; i++) {
		ret = min(n-odd[0].first-even[i].first, ret);
	}
		for (int i = 1; i < o; i++) {
		ret = min(n-odd[i].first-even[0].first, ret);
	}
	return ret;
}





int ocnt[100001], ecnt[100001];
bool echeck[100001], ocheck[100001];
int main() {
	fastio;
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (i%2) ecnt[arr[i]]++;
		else ocnt[arr[i]]++;
	}

	int evenM = 0, oddM = 0;
	vector<pi> odd, even;
	for (int i = 0; i < n; i++) {
		if (i%2 && !echeck[arr[i]]) even.push_back({ecnt[arr[i]], arr[i]}), echeck[arr[i]]=1;
		if(i%2 == 0 && !ocheck[arr[i]]) odd.push_back({ocnt[arr[i]], arr[i]}), ocheck[arr[i]] = 1;
		
	}

	sort(even.begin(), even.end(), greater<>());
	sort(odd.begin(), odd.end(), greater<>());

	if (odd.front().second == even.front().second) {
		if (odd.size() == 1 && even.size() == 1) cout << n/2;
		else cout << comp(odd, even);
	}

	else cout << n-even[0].first-odd[0].first;


}




