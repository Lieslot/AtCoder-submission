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
  int n, m;
  cin >> n >> m;
  vector<int> arr(n), solved(m);
  for (auto &i : arr) cin >> i;
  for (auto &i : solved) cin >> i;
  int ans = 0;

  for (auto i : solved) {
    ans += arr[i-1];
  }
  cout << ans;

}