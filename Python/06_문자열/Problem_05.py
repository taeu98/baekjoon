A = []

for i in range(26):
    A.append(0)

for i in input():
    if 65 <= ord(i) <= 90:
        A[ord(i) - 65] += 1
    else:
        A[ord(i) - 97] += 1

s = ''

for i in range(len(A)):
    if A[i] == max(A):
        if s == '':
            s = chr(i+65)
        else:
            s = '?'
            break

print(s)
