#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<ll>




map<string, bool> vis;
map<string, string>front, back;


int main()
{ 
  fastio;
  int n;
  cin >> n;
  set<string> arr;
  while(n--) {
    string s, t;
    cin >> s >> t;
    front[s] = t;
    back[t] = s;
    arr.insert(s);
    arr.insert(t);
  }
  for (auto i : arr) {
    if (front[i] == "" || vis[i] == 1) continue;
    string cur = i;
    vis[cur] = 1;
    while(front[cur] != "") {
      cur =front[cur];
      if (vis[cur]) {
        cout << "No";
        return 0;
      }
      vis[cur] = 1;
    }
    cur = i;
    while(back[cur] != "") {
      cur = back[cur];
      if (vis[cur]) {
        cout << "No";
        return 0;
      }
      vis[cur] = 1;
    }

  }
  cout << "Yes";
}
  

