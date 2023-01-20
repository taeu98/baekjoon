# for (int i = 0; i < s.length(); i++)
#     x = (int(s[i]) > 95) ? int(s[i]) - 97 : int(s[i]) - 65;
#     abc[x] += 1;
#     if (abc[x] > max)
#         max++;

# s = "";
# for (int i = 0; i < 26; i++)
#     if (abc[i] == max)
#         s += char(i + 65);

# cout << ((s.length() > 1) ? "?" : s) << endl;

A = []
m = 0
cnt = 0
for i in range(26):
    A.append(0)

s = input()
for i in s:
    if 65 <= ord(i) <= 90:
        A[ord(i) - 65] += 1
    else:
        A[ord(i) - 97] += 1

for i in range(len(A)):
    if A(i) == m:
        cnt += 1
    if A(i) > m:
        m = A(i)
        cnt = 0
if cnt > 0:
    print("?")
else:
    print(m)


# print(ord("A"),ord("a")) # A : 65 / a : 97
# print(ord("Z"), ord("z"))  # Z : 90 / z : 122
