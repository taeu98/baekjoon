x = int(input())
y, cnt = x, 0

while x != y or cnt == 0:
    y = (y % 10 * 10) + (y % 10 + y // 10) % 10
    cnt += 1
print(cnt)
