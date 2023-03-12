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
  ll n, a, b, ans = 4e18;
  cin >> n >> a >> b;
  deque<char> sv(n);
  string s;
  cin >> s;
  
  for (int i = 0; i < n; i++) {
    sv[i] = s[i]; 
  }

  for (int i = 0; i < n; i++) {
    ll tmp = i*a;
    for (int j = 0; j < n/2; j++) {
      if (sv[j] != sv[n-1-j]) tmp += b;
    }
    ans = min(tmp, ans);
    sv.push_back(sv.front());
    sv.pop_front();
  }

  cout << ans;


}
