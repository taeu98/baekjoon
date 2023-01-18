array, cnt = [], 0
for i in range(42):
    array.append(False)
for i in range(10):
    array[int(input()) % 42] = True
for i in range(42):
    if array[i]:
        cnt += 1
print(cnt)
