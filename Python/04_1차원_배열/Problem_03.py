min = 1000000
max = -1000000

n = int(input())
array = list(map(int, input().split()))

for i in range(n):
    if array[i] > max:
        max = array[i]
    if array[i] < min:
        min = array[i]
print(f"{min} {max}")
