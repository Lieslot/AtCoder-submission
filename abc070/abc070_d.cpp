#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>





ll dist[100001];
vector<pi> g[100001];


int main() {
  fastio;
  int n;
  cin >> n;
  fill(dist, dist + n + 1, 4e18);
  for (int i = 0; i < n-1; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    g[a].push_back({b,c});
    g[b].push_back({a,c});
    
  }
  priority_queue<pi, vector<pi>, greater<pi>> pq;
  int q, k;
  cin >> q >> k;

  pq.push({0, k});
  dist[k] = 0;

  while(!pq.empty()) {
    auto [dis, cur] = pq.top();
    pq.pop();

    if (dis != dist[cur]) continue;

    for (auto [nxt, nxt_dis] : g[cur]) {
      ll cost = nxt_dis+dist[cur];
      if (cost >= dist[nxt]) continue;
      dist[nxt] = cost;
      pq.push({cost, nxt});
    }

  }

  while(q--) {
    int a, b;
    cin >> a >> b;
    cout << dist[a] + dist[b] << endl;
  }


}