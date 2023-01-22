# 빠른 입출력
from collections import Counter
import sys
input = sys.stdin.readline

N = int(input())
arr = []
for i in range(N):
    arr.append(int(input()))

arr.sort()
print(round(sum(arr)/N))
print(arr[N//2])

a = Counter(arr).most_common(2)
if len(a) < 2:
    print(a[0][0])
elif a[0][1] == a[1][1]:
    print(a[1][0])
else:
    print(a[0][0])

print(arr[-1]-arr[0])
