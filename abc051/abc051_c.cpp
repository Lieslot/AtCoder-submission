#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>



bool vis[2001][2001] = {};
int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
string ans = "";





int main() {
  fastio;
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  
  sx += 1000;
  sy += 1000;
  tx += 1000;
  ty += 1000;

  int w = tx-sx, h = ty-sy;


  for (int i = 0; i < h; i++) {
    ans += 'U';
  }
  for (int i = 0; i < w; i++) {
    ans += 'R';
  }
  for (int i = 0; i < h; i++) {
    ans += 'D';
  }
  for (int i = 0; i < w; i++) {
    ans += 'L';
  }

  ans += 'L';
  for (int i = 0; i < h+1; i++) {
    ans += 'U';
  }
  for (int i = 0; i < w+1; i++) {
     ans += 'R';
  }
  
 
  ans += 'D';


  
  

  ans += 'R';
  for (int i = 0; i < h+1; i++) {
    ans += 'D';
  }
  for (int i = 0; i < w+1; i++) {
     ans += 'L';
  }
  
 
  ans += 'U';

  cout << ans;

  



}