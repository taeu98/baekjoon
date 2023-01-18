array = []
for i in range(30):
    array.append(True)
for i in range(28):
    array[int(input())-1] = False
for i in range(30):
    if array[i]:
        print(i+1)
