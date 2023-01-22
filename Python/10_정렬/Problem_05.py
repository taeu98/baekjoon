# 빠른 입출력
import sys
input = sys.stdin.readline


arr = [0 for _ in range(10001)]
for _ in range(int(input())):
    arr[int(input())] += 1
for i in range(10001):
    for j in range(arr[i]):
        print(i)
