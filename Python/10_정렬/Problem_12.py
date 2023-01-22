# 빠른 입출력
import sys
input = sys.stdin.readline

N = int(input())
v1 = list(map(int, input().split()))
v2 = sorted(set(v1))

d = {v2[i]: i for i in range(len(v2))}
for i in v1:
    print(d[i], end=' ')
