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
  int n;
  cin >> n;
  vector<int> arr(n+1);
  for (auto &i : arr) cin >> i;

  sort(arr.begin(), arr.end());

  int ansn = arr.back(), ansr = arr.front();
  for (auto i : arr) {
    if (ansr < min(ansn-i, i)) {
      ansr = i;
    }
  }
  cout << ansn << " " << ansr;





}