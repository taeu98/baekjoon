def hanoi(n, v1, v2, v3):
    if n == 1:
        print(v1, v3)
    else:
        hanoi(n - 1, v1, v3, v2)
        print(v1, v3)
        hanoi(n - 1, v2, v1, v3)


if __name__ == '__main__':
    n = int(input())
    print(2**n-1)
    hanoi(n, '1', '2', '3')