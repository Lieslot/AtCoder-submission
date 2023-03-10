#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>



const ll mod = 1e9 + 7;





int main() {
  fastio;
  int n, m;
  cin >> n >> m;
  vector<ll> check(n+1), d(n+1);
  d[0] = 1;

  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    check[a] = 1;
  }

  for (int i = 0; i <= n-2; i++) {
    if (check[i] == 1) continue;
    d[i+1] += d[i]%mod;
    d[i+2] += d[i]%mod;
    d[i+1] %= mod;
    d[i+2] %= mod;
  }
  if (check[n-1] == 0)d[n] += d[n-1]%mod;
  d[n] %= mod;

  cout << d[n];

}