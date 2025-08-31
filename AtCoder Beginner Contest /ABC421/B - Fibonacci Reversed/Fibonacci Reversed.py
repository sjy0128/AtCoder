x, y = map(int, input().split())
a = [0 for _ in range(11)]
a[1] = x
a[2] = y
for i in range(3, 11):
    a[i] = int(str(a[i-2] + a[i-1])[::-1])
print(a[10])