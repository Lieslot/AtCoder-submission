



n = int(input())
arr =list(map(int, input().split()))

arr.sort()

ans = 0

tmp = 1

for i in arr:
    tmp *= i
    if (tmp > 1e18):
        ans = -1
        break
    

if ans == -1:
    print(-1)
else:
    print(tmp)
