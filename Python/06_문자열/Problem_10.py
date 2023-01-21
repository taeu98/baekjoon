cnt = 0
n = int(input())
for i in range(n):
    s = input()
    flag = True
    for j in range(len(s)-1):
        if s[j] != s[j+1] and s[j+1:].count(s[j]) > 0:
            flag = False
            break
    if flag:
        cnt += 1
print(cnt)
