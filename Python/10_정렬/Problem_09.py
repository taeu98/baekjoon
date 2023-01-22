arr = []
for _ in range(int(input())):
    arr.append(list(reversed(list(map(int, input().split())))))
for i in sorted(arr):
    print(f"{i[1]} {i[0]}")
