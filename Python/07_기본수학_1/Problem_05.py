T = int(input())
for i in range(T):
    H, W, N = map(int, input().split())
    X = (N - 1) % H + 1
    Y = (N - 1) // H + 1
    print(100 * X + Y)
