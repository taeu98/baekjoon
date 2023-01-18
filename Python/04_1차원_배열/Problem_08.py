n = int(input())

for i in range(n):
    sum, cnt = 0, 0
    s = input()
    for j in s:
        if j == 'O':
            cnt += 1
            sum += cnt
        else:
            cnt = 0
    print(sum)
