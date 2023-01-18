def IHS(x):
    diff = x // 10 % 10 - x % 10
    while x > 9:
        if diff != x // 10 % 10 - x % 10:
            return False
        x //= 10
    return True


def CNT(x):
    cnt = 0
    for i in range(1, x + 1):
        if IHS(i):
            cnt += 1
    return cnt


x = int(input())
print(CNT(x))
