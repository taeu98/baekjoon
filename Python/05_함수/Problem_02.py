def NSN(x):  # Not a Self Number : 생성자를 반환
    sum = x
    while x != 0:
        sum += x % 10
        x //= 10
    return sum


# 모든숫자를 'self number'로 저장 (0 제외)
self_num = [False]
for i in range(10000):
    self_num.append(True)

# 1~N 까지의 생성자를 'self number'에서 제외
for i in range(1, 10001):
    if NSN(i) <= 10000:
        self_num[NSN(i)] = False

# 'self number'출력
for i in range(1, 10001):
    if self_num[i]:
        print(i)
