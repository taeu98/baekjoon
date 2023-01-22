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


p = []
M = int(input())
N = int(input())

i = M
while i <= N:
    if prime_number(i):
        p.append(i)
    i += 1

if sum(p):
    print(f"{sum(p)}\n{p[0]}")
else:
    print(-1)
