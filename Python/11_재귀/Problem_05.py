import sys
input = sys.stdin.readline
print = sys.stdout.write


def star(i, j, num):
    if (i // num) % 3 == 1 and (j // num) % 3 == 1:
        print(' ')
    elif num//3 == 0:
        print('*')
    else:
        star(i, j, num // 3)


if __name__ == '__main__':
    n = int(input())
    for i in range(n):
        for j in range(n):
            star(i, j, n)
        print("\n")
