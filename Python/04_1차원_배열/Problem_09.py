N = int(input())
for i in range(N):
    array = list(map(int, input().split()))
    s, cnt = sum(array[1::]), 0
    for j in array[1::]:
        if j*array[0] > s:
            cnt += 1
    print(f"{(cnt*100/array[0]):.3f}%")
