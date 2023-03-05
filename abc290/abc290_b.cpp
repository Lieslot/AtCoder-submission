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
  int n, k;
  string s, ans;
  cin >> n >> k;
  cin >> s;

  for (int i = 0; i < n; i++) {
    if (s[i] == 'o') {
      if (k <= 0) s[i] = 'x'; 
      else k--;
    }
  }

  cout << s;

}