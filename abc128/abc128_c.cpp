#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>





vector<int> sw[11];
vector<int> p(11);
ll n, m, ans = 0;



void bt(int cur, string s) {
  if (cur == n) {


    for (int i = 1; i <= m; i++) {
      int cnt = 0;
  
      for (auto j : sw[i]) {
        if (s[j-1] == '1') cnt++;
      }
      if (p[i] != cnt%2) return;

    }
    ans++;
    return;
  }

  bt(cur+1, s+'1');
  bt(cur+1, s+'0');

  
  


}


int main() {
  fastio;
  cin >> n >> m;

  for (int i = 1; i <= m; i++) {
    int k;
    cin >> k;
    while (k--) {
      int a;
      cin >> a;
      sw[i].push_back(a);
    }
  }

  for (int i = 1; i <= m; i++) cin >> p[i];

  bt(0, "");


  cout << ans;








}