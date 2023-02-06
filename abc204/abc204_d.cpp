#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<ll>



bool d[101][200001];


int main()
{ 
  fastio;
  int n, sum = 0, ans = 1e9;
  cin >> n;
  vector<int> arr(n);
  for (auto &i : arr) {
    cin >> i;
    sum += i;
  }
  d[0][arr[0]] = 1;
  d[0][0] = 1;

  for (int i = 0; i < n; i++) {
    
    for (int j = 0; j <= sum; j++) {
      if (!d[i][j]) continue;
      d[i+1][j+arr[i]] = 1;
      d[i+1][j] = 1;
      
    }
  }
  
  for (int i = 0; i <= sum; i++) {
    if (d[n][i]) {
      int tmp = max(sum-i, i);
      ans = min(ans, tmp);
    } 
  }

  cout << ans;

}
  

