m = [0, 0]

for i in range(1, 10):
    x = int(input())
    if x > m[0]:
        m[0] = x
        m[1] = i

print(f"{m[0]}\n{m[1]}")
