#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>



vector<int> g[100001];




int main() {
  fastio;
  int n, m;
  cin >> n >> m;
  vector<int> vis(n+1);
  while(m--) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);

  }

  queue<int> q;

  q.push(1);
  vis[1] = 1;
  while(!q.empty()) {
    auto cur = q.front();
    q.pop();

    for (auto i : g[cur]) {
      if (vis[i]) continue;
      q.push(i);
      vis[i] = cur;
    }

  }

  for (int i = 2; i <= n; i++) {
    if (vis[i] == 0) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes" << endl;
  for (int i = 2; i<= n;i++) {
    cout << vis[i] << endl;
  }


  








}