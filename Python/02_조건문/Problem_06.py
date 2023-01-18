h, m = map(int, input().split())
x = int(input())

time = (60 * h + m + x) % (60 * 24)

print(f"{time // 60} {time % 60}")
