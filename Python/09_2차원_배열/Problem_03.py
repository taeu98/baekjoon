N = int(input())
cnt = 0
arr = [[False for _ in range(100)] for _ in range(100)]
for _ in range(N):
    x, y = map(int, input().split())
    for i in range(10):
        for j in range(10):
            arr[i + x][j + y] = True
for i in range(100):
    for j in range(100):
        if arr[i][j]:
            cnt += 1
print(cnt)
