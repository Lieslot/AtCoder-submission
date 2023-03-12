#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>

ll dist[301][301], val[301][301] = {}, a[301];
int n;
string s[301];


int vis[301] = {};

void bfs(int st) {
  memset(vis, 0x3f3f3f3f, sizeof(vis));

  queue<int> q;
  q.push(st);
  vis[st] = 1;
  val[st][st] = a[st];
  dist[st][st] = 0;
  while (!q.empty()) {
    auto cur = q.front();
    dist[st][cur] = vis[cur]-1;
    q.pop();
    for (int i = 0; i < n; i++) {
      if (s[cur][i] == 'N') continue;
      if (vis[i+1] < vis[cur]+1) continue;
      if (vis[i+1] != vis[cur]+1) q.push(i+1);
      vis[i+1] = vis[cur]+1;
      val[st][i+1] = max(val[st][i+1], val[st][cur] + a[i+1]);
        
    }

  }






}


int main() {
  fastio;


  cin >> n;
  for (int i = 1; i <= n; i++) fill(dist[i], dist[i]+n+1, 1e9);

  for (int i = 1; i <= n; i++) cin >> a[i];

  for (int i = 1; i <= n; i++) cin >> s[i];

  for (int i = 1; i <= n; i++) {
    bfs(i);
  }

  int q;
  cin >> q;

  while(q--) {
    int st, en;
    cin >> st >> en;
    if (dist[st][en] == 1e9) cout << "Impossible" << endl;
    else cout << dist[st][en] << " " << val[st][en] << endl;
  }

  

}
