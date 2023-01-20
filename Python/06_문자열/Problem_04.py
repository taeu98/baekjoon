for i in range(int(input())):
    n, s = input().split()
    for j in s:
        print(j*int(n), end="")
    print()