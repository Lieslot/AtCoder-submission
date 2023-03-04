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
  int n, q;
  cin >> n >> q;
  vector<int> cnt(n+1);
  vector<bool> is_del(n+1);
  while(q--) {
    int a, b;
    cin >> a >> b;
    if (a==1) cnt[b]++;
    if (a==2) is_del[b] = 1;
    if (a==3) {
      if (is_del[b]) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
    if (cnt[b] == 2) is_del[b] = 1;

  }  


}