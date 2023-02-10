import sys
import random
input = sys.stdin.readline
 
n = int(input())
a = input().rstrip()
b = input().rstrip()
a = list(a)
b = list(b)
 
mod = 998244353
 
 
for i in range(n):
  if (a[i] > b[i]):
    a[i], b[i] = b[i], a[i]
 
s = ''.join(i for i in a)
t = ''.join(i for i in b)
 
memo_s = int(s)%mod
memo_t = int(t)%mod
 
print((memo_s*memo_t)%mod)