sum = [[0 for _ in range(15)] for _ in range(15)]

for i in range(15):
    sum[0][i] = i

for i in range(1, 15):
    for j in range(15):
        sum[i][j] = sum[i - 1][j] + sum[i][j - 1]

for i in range(int(input())):
    print(sum[int(input())][int(input())])
