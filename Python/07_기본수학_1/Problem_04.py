A, B, V = map(int, input().split())
if (V - A) % (A - B):
    print((V - A) // (A - B) + 2)
else:
    print((V - A) // (A - B) + 1)
