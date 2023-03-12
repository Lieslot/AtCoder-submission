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
  vector<int> ans(n);
  vector<pair<string, int>> p(n);

  for (int i = 0 ; i < n; i++) {
    cin >> p[i].first;
    p[i].second = i;
  }

sort(p.begin(), p.end());

for (int i = 0; i < n-1; i++) {
  auto &s = p[i].first, &t = p[i+1].first;
  int j = 0;

  while(j < s.size() && j < t.size() && s[j] == t[j]) j++;

  ans[p[i].second] = max(ans[p[i].second], j);
  ans[p[i+1].second] = max(ans[p[i+1].second], j);

  
}

for (auto i : ans) cout << i << endl;






}