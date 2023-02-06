#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<ll>


vector<int> g[200001];
bool vis[200001];


int main()
{ 
  fastio;
  int n,m;
  cin >> n >> m;
  if (m != n-1) {
    cout << "No";
    return 0;
  }
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
    
  }

  

  int cnt = 0;
  queue<int> q;
  q.push(1);
  vis[1] = 1;

  while(!q.empty()) {
    auto cur = q.front();

    if (g[cur].size() > 2) {
      cout << "No";
      return 0;
    }

    q.pop();
    cnt++;
    for (auto i : g[cur]) {
      if (vis[i]) continue;
      vis[i] = 1;
      q.push(i);
    }
  }

  if (cnt == n) cout << "Yes";
  else cout << "No";
}
  

