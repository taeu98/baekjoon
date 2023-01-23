def F(x):
    if x == 0:
        return 0
    elif x == 1:
        return 1
    else:
        return F(x - 2) + F(x - 1)


if __name__ == '__main__':
    N = int(input())
    print(F(N))
