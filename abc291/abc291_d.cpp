#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>



ll d[200001][2] = {}; 

const ll mod = 998244353;



int main() {
  fastio;
  int n;
  cin >> n;
  vector<pi> arr(n);
  for (auto &i : arr) cin >> i.X >> i.Y;
  d[0][0] = 1;
  d[0][1] = 1;
  for (int i = 1; i < n; i++) {

    if (arr[i-1].X != arr[i].X) d[i][0] += d[i-1][0];
    if (arr[i-1].Y != arr[i].X) d[i][0] += d[i-1][1];
    if (arr[i-1].X != arr[i].Y) d[i][1] += d[i-1][0];
    if (arr[i-1].Y != arr[i].Y) d[i][1] += d[i-1][1];
    d[i][0] %= mod;
    d[i][1] %= mod;
  }

  cout << (d[n-1][0] + d[n-1][1])%mod;


}