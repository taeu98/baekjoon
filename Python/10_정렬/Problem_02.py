arr = []
for _ in range(5):
    arr.append(int(input()))
arr.sort()
print(f"{sum(arr)//5}\n{arr[2]}")
