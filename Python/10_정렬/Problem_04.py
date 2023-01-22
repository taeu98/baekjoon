# 빠른 입출력
import sys
input = sys.stdin.readline


arr = []
for i in range(int(input())):
    arr.append(int(input()))
arr.sort()
for i in arr:
    print(i)
