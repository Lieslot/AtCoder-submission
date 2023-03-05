#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>


bool is_con[2001][2001], vis[2010];

vector<int> g[2001];
int ans = 0;

void bfs(int x) {
  queue<pi> q;
  q.push({x, 0});

  vis[x] = 1;
  while(!q.empty()) {
    auto [cur, dep] = q.front();
    q.pop();
    if (dep >= 2) {
      if (is_con[x][cur] == 0) {
        is_con[x][cur] = 1;
        ans++;
      }
    }
    for (auto i : g[cur]) {
      if (vis[i]) continue;
      q.push({i, dep+1});
      vis[i] = 1;
    }
  }

}



int main() {
  fastio;
  int n, m;
  cin >> n >> m;

  while(m--) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    is_con[a][b] = 1;
  }

  for (int i = 1; i <= n; i++) {
    bfs(i);
    fill(vis, vis+n+1, 0);
  }

  cout << ans;

}