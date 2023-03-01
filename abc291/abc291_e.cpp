#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>




vector<int> g[200001];



int main() {
  fastio;
  int n, m;
  cin >> n >> m;
  vector<int> ind(n+1);
  vector<int> ans(n);
  set<pi> check;
  while(m--) {
    int a, b;
    cin >> a >> b;

    if (check.find({a,b}) != check.end()) continue; 
    check.insert({a,b});
    ind[a]++;
    g[b].push_back(a);
  }
  queue<int> q;
  for (int i = 1; i <= n; i++) if (ind[i] == 0) q.push(i);

  if (q.size() > 1) {
    cout << "No";
    return 0;
  }

  while (!q.empty()) {
    auto cur = q.front();
    q.pop();
    ans[cur-1] = n;
    n--;
    for (auto i : g[cur]) {
      ind[i]--;
      if (ind[i] == 0) {
        q.push(i);
      }
    }
    if (q.size() > 1) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes" << endl;
  for (auto i : ans) cout << i << " ";
  


}