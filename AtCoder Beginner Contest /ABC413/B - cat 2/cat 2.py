n = int(input())
s = []
r = set()
for _ in range(n):
    s.append(input())
for i in s:
    for j in s:
        if(i != j):
            r.add(i+j)
print(len(r))