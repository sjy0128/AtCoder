n, k, x = map(int, input().split())
s = [input() for _ in range(n)]
r = []
a = [0 for _ in range(k)]
while a[k-1] != n:
    t = ""
    for i in range(k):
        t += s[a[i]]
    r.append(t)
    a[0] += 1
    for i in range(k):
        if a[i] >= n:
            if a[k-1] >= n:
                break
            a[i+1] += 1
            a[i] = 0
print(sorted(r)[x-1])