#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<ll>



int cnt[300001] = {};


int main()
{ 
  fastio;
  int n, prev = 0, num = 0;
  cin >> n;
  vector<pi> arr;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    arr.push_back({a, 1});
    arr.push_back({a+b, -1});
  }
  sort(arr.begin(), arr.end());
  for (auto [cur, change] : arr) {
    cnt[num] += cur - prev;
    num += change;
    prev = cur;
  }


  for (int i = 1; i <= n; i++) {
    cout << cnt[i] << " ";
  }
}
  

