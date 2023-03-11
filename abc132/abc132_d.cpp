#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>



ll c[2001][2001] = {};
const ll mod = 1e9 + 7;

int main() {
  fastio;
  int n, k;
  cin >> n >> k;
  for (int i = 0; i <= n; i++) c[i][0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      c[i][j] = (c[i-1][j] + c[i-1][j-1])%mod;
      c[i][j] %= mod;
 
    }

  }
  for (int i = 1; i <= k; i++) {
    cout << c[n-k+1][i]*c[k-1][i-1]%mod << endl;
  }


}