import sys
input = sys.stdin.readline
print = sys.stdout.write


def prime_number(n):
    if n < 2:
        return False
    else:
        i = 2
        while i*i <= n:
            if n % i == 0:
                return False
            i += 1
    return True


# 시간초과가 발생해 배열에 소수를 한번에 저장
array = []
for i in range(2, 246913):
    if prime_number(i):
        array.append(i)

while True:
    n = int(input())
    cnt = 0
    if n == 0:
        break
    else:
        for i in array:
            if n < i <= 2*n:
                cnt += 1
        print("%d\n" % cnt)
