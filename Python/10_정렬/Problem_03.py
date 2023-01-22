N, S = map(int, input().split())
arr = map(int, input().split())
arr = list(reversed(sorted(arr)))
print(arr[S-1])
