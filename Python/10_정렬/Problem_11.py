arr = [[]for _ in range(201)]

for i in range(int(input())):
    x, y = input().split()
    arr[int(x)].append(y)

for i in range(len(arr)):
    if len(arr[i]):
        for j in range(len(arr[i])):
            print(f"{i} {arr[i][j]}")
