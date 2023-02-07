#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<ll>


ll d[5001] = {}, p[5001];


int main()
{ 
  fastio;
  int n;
  cin >> n;
  vector<ll> arr(n);
  for (auto &i : arr) cin >> i;
  p[1] = 0;
  for (int i = 2; i <= n; i++) {
    p[i] = p[i-1] + arr[(i/2)-1];
  } 
  
  for (int i = 1; i <= n+1; i++) {
    
    for (int j = 1; j < i; j++) {
      d[i] = max(d[i], p[i-j]+d[j]);
    }
    
  }
  cout << d[n+1] << endl;
}
  

