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


primes = []
for i in range(5000, 0, -1):
    if prime_number(i):
        primes.append(i)

T = int(input())
for i in range(T):
    N = int(input())
    for j in range(len(primes)):
        if 2 * primes[j] <= N and prime_number(N - primes[j]):
            print(f"{primes[j]} {N-primes[j]}")
            break
