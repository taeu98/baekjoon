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


cnt = 0
N = int(input())
n = map(int, input().split())

for i in n:
    if prime_number(i):
        cnt += 1
print(cnt)
