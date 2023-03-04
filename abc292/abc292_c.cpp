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
  vector<ll> d(n+1);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j*j <= i; j++) {
      if (i%j == 0) d[i]++;

    }
    if ((int)sqrt(i)*sqrt(i) == i) {
      d[i] += d[i]-1;
    }
    else d[i] += d[i];
  } 
  
  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += d[i]*d[n-i];
  }
  cout << ans;

}