#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define endl '\n'
#define fastio cin.tie(0)->sync_with_stdio(0)
#define X first
#define Y second
#define vi vector<int>


/*
문제를 푸는 데 필요한 지식


g = gcd(A, B) 
a = A/g
b = B/g
일 때

i*B mod A는 i*g를 포함한다.  (i <= (a-1))

그렇기 때문에 모든 수는 일정한 간격을 가지고 그 간격은 한 번 싸이클을 돌 때 마다 각 차례마다 일정하게 메워지기 때문에
다른 것들을 고려할 필요가 없음

*/


int main() {
  fastio;
  ll n, d, k;
  int t;
  cin >> t;

  while(t--) {
    cin >> n >> d >> k;
    int g = gcd(n, d);
    int a = n/g; // size of cycle;

    cout << (k-1)/a + (k-1)*d%n << endl;
  }



}