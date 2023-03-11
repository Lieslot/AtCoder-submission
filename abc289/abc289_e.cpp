#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>



vector<int> g[2001];
int vis[2001][2001] = {};
int n, m;


int bfs(vector<int> &col) {
  queue<pi> q;
  q.push({1, n});
  vis[1][n] = 1;
  while (!q.empty()) {
    auto [t, a] = q.front();
    q.pop();

    if (t == n && a == 1) {
      return vis[t][a]-1;
    }

    for (auto i : g[t]) {
      for (auto j : g[a]) {
        if (vis[i][j] <= vis[t][a]+1) continue;
        if (col[i] == col[j]) continue;
        q.push({i, j});
        vis[i][j] = vis[t][a]+1;

      }
    }

  }





  return -1; 
}


int main() {
  fastio;
  int t;
  cin >> t;

  while (t--) {
    cin >> n >> m;
    vector<int> col(n+1);
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        vis[i][j] = 1e9;
        
      }
      g[i].clear();
    }
    for (int i = 1; i <= n; i++) cin >> col[i]; 
    while(m--) {
      int a, b;
      cin >> a >> b;
      g[a].push_back(b);
      g[b].push_back(a);

    }
    cout << bfs(col) << endl;
    
      
    

  }





}