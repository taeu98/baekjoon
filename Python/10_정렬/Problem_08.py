arr = []
for _ in range(int(input())):
    arr.append(list(map(int, input().split())))
for i in sorted(arr):
    print(f"{i[0]} {i[1]}")