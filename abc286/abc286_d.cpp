#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>





bool d[51][10001];



int main() {
  fastio;
  int n, x;
  cin >> n >> x;
  vector<int> cnt(n+1), yen(n+1);

  for (int i = 0; i < n; i++) {
    cin >> yen[i] >> cnt[i];
    
  }

  d[0][0] = 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= x; j++) {
      if (!d[i][j]) continue;
      for (int k = 0; k <= cnt[i]; k++) {
        if (k*yen[i]+j > x) break;
        d[i+1][k*yen[i]+j] = 1;
      }
    }
  }

  
  
  if (d[n][x]) cout << "Yes";
  else cout << "No";
}
