n, k = map(int, input().split())
a = input().split()
for i in a[k:]:
    print(i, end=" ")
for i in range(n if k > n else k):
    print(0, end=" ")