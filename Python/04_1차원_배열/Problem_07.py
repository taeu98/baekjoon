n = int(input())
s, m = 0, 0
array = map(int, input().split())
for i in array:
    if i > m:
        m = i
    s += i
print(100*s/m/n)
