for i in range(int(input())):
    s = input()
    cnt, left, right, flag = 0, 0, len(s)-1, True

    while flag and left <= right:
        cnt += 1
        if s[left] != s[right]:
            flag = False
        left, right = left+1, right-1

    if flag:
        print(1, end=' ')
    else:
        print(0, end=' ')

    if not flag or len(s) % 2:
        print(cnt)
    else:
        print(cnt+1)
