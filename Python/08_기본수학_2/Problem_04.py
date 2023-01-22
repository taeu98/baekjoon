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


M, N = map(int, input().split())

for i in range(M, N+1):
    if prime_number(i):
        print(i)
