a, b, c = map(int, input().split())
if b >= c:
    x = -1
else:
    x = a // (c-b) + 1
print(x)
