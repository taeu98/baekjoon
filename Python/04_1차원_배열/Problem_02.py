n, s = map(int, input().split())
array = list(map(int, input().split()))

for i in array:
    if s > i:
        print(i, end=' ')
print()
