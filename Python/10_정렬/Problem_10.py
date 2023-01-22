arr = []

for i in range(int(input())):
    arr.append(input())

arr = list(set(arr))

for i in range(len(arr)):
    arr[i] = [len(arr[i]), arr[i]]

for i in sorted(arr):
    print(i[1])
