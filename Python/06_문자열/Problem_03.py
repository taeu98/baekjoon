s = input()
alphabet = "abcdefghijklmnopqrstuvwxyz"
for i in alphabet:
    if i in s:
        print(s.find(i), end=' ')
    else:
        print(-1, end=' ')
print()