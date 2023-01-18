# 빠른 입출력
import sys
input = sys.stdin.readline
print = sys.stdout.write

n = int(input())

for i in range(n):
    x, y = map(int, input().split())
    print("%d\n" % (x + y))  # 출력방식 달라짐
