#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<ll>





int main()
{ 
  fastio;
  string s, t, comp = "";
  cin >> s >> t;
  int slen = s.length(), tlen = t.length(), cnt = 0;
  
  for (int i = slen-tlen, j = 0; i < slen; i++, j++) {
    comp += s[i];
    if (s[i] == t[j] || s[i] == '?' || t[j] == '?') cnt++;
  }
  
  for (int i = 0; i < tlen; i++) {
    if (cnt == tlen) cout << "Yes" << endl;
    else cout << "No" << endl;
    if (comp[i] == t[i] || comp[i] == '?' || t[i] == '?') cnt--;
    comp[i] = s[i];
    if (s[i] == t[i] || s[i] == '?'|| t[i] == '?') cnt++;

  }

  if (cnt == tlen) cout << "Yes" << endl;
  else cout << "No" << endl;
    




}
  

