x, y = [], []
n1, n2 = map(int, input().split())

for i in range(n1):
    x.append(list(map(int, input().split())))
for i in range(n1):
    y.append(list(map(int, input().split())))
for i in range(n1):
    for j in range(n2):
        x[i][j] += y[i][j]
for i in range(n1):
    for j in range(n2):
        print(x[i][j], end=" ")
    print()
