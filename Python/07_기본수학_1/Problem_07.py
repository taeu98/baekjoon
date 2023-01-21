N = int(input())
V5 = N // 5
V3 = (N - V5 * 5) // 3

while V5 >= 0 and N - V5 * 5 - V3 * 3:
    V5 -= 1
    V3 = (N - V5 * 5) // 3

if V5 < 0:
    print(-1)
else:
    print(V5 + V3)
