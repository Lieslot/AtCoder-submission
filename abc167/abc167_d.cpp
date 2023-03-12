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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n+1), cycle;
  vector<bool> vis(n+1);
  for (int i = 1; i <= n; i++) cin >> a[i];

  int cur = 1, st = -1, ans;
  bool flag = 0;
  while (1) {
    if (flag && cur == st) break;
    if (k == 0) {
      ans = cur;
      break;
    } 
    if (vis[cur] == 1 && !flag) {
      flag = 1;
      st = cur;
    }

    vis[cur] = 1;

    if (flag) cycle.push_back(cur);

    cur = a[cur];
    if (!flag) k--;



  }


  if (k == 0) cout << ans;
  else {
    cout << cycle[k%(ll)cycle.size()];
  }
  

  

  


}
