import sys

input = sys.stdin.readline



a, b, x = map(int, input().split())

l = 0
r = 10**9+1

while (l+1 < r):
    mid = (l+r)//2
    dn = len(str(mid))
    if (a*mid+ b*dn > x): r = mid
    else: l = mid
    

print(l)
