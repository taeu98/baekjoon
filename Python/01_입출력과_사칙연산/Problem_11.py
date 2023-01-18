x = int(input())
y = int(input())
print(f"{x*(y%10)}\n{x*(y//10%10)}\n{x*(y//10//10)}\n{x*y}")
