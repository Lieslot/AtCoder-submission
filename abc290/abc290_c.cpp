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
  cin >> n >> k;
  vector<int> arr(n);
  for(auto &i : arr) cin >> i;
  sort(arr.begin(), arr.end());
  int m = 0;

  for (auto i : arr) {
    if (m == i) m++;
  }

  cout << min(m, k);



}