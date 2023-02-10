#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<ll>


// 큰 수의 경우 1과 7의 조합으로만 가능

// 가장 작은 수만 고려

int checks[27] = {}, checkt[27] = {};


int main()
{ 
  fastio;
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  for (auto i : s) checks[i-'a']++;
  for (auto i : t) checkt[i-'a']++;

  for (int i = 0; i < 26; i++) {
    if (checks[i] != checkt[i]) {
      cout << -1;
      return 0;
    }
  }
  
  int left = -1, right = n-1;

  while (left+1 < right) {
    int mid = (left+right)/2;
    int p = mid;

    for (int i = 0; i < n; i++) {
      if (p == n) break;
      if (t[i] == s[p]) p++;
    }
    
    if (p == n) right = mid;
    else left = mid;
  }
  cout << right;
}
  

