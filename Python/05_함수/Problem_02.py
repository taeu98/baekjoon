def NSN(x):
    sum = x
    while x != 0:
        sum += x % 10
        x //= 10
    return sum


self_num = [False]
for i in range(10000):
    self_num.append(True)

for i in range(1, 10001):
    if NSN(i) <= 10000:
        self_num[NSN(i)] = False

for i in range(1, 10001):
    if self_num[i]:
        print(i)
