t = int(input())
n = int(input())

for i in range(n):
    x, y = map(int, input().split())
    t -= x * y

if t == 0:
    print("Yes")
else:
    print("No")
