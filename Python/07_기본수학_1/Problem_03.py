a, b = int(input()), 1

while (2 * a > b * (b + 1)):
    b += 1

x = a - (b - 1) * b // 2
y = b + 1 - x

if (b % 2):
    print(f"{y}/{x}")
else:
    print(f"{x}/{y}")
