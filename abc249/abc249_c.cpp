#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>


int n, k;



int main() {
  fastio;
  int ans = 0;
  cin >> n >> k;
  string s[16];

  for (int i = 0; i < n; i++) cin >> s[i];
  
  for (int i = 0; i < (1 << n); i++) {
    vector<int> cnt(26);
    int tmp = 0;
    
    for (int j = 0; j < n; j++) {
      if (i & (1 << j)) {
        for (auto k : s[j]) cnt[k-'a']++;
      }
    }

    for (auto j : cnt) if (j == k) tmp++;

    ans = max(tmp, ans);

  }

  cout << ans;


}