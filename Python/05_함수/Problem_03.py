def IHS(x):  # Is it HanSoo ?
    diff = x // 10 % 10 - x % 10  # 10의자리수 - 1의자리수
    while x > 9:  # x가 10보다 작아질때까지 반복
        if diff != x // 10 % 10 - x % 10:  # 각 자리숫자의 차이가 다르면 'False'
            return False
        x //= 10
    return True  # 차이가 모두 같으면 'True'


def CNT(x):  # CouNT
    cnt = 0
    for i in range(1, x + 1):
        if IHS(i):
            cnt += 1
    return cnt


x = int(input())
print(CNT(x))
