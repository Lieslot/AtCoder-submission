#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>





vector<int> g[200001];
int cnt[200001] = {};
bool flag = 0;

int p[200001];



int find(int a) {
  if (a == p[a]) return a;
  return p[a] = find(p[a]);
}

void uni (int a, int b) {
  a = find(a); b = find(b);
  
  if (a==b) {
    cnt[a]++;
    if (cnt[a] > 1) flag = 1;
    return;
  }
  p[a] = b;
  cnt[b] += cnt[a];
  if (cnt[b] > 1) flag = 1;
  
  


}




void dfs(int num, int x) {
  cout << x << endl;


}



int main() {
  fastio;
  int n, m;
  cin >> n >> m;
  if (n != m) {
    cout << "No";
    return 0;
  }
  for (int i = 1; i <= n; i++) p[i] = i;

  while (m--) {
    int a, b;
    cin >> a >> b;

    uni(a, b);
    if (flag) {
      cout << "No";
      return 0;
    }
    
  }
  cout << "Yes";

}