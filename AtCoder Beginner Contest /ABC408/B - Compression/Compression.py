n = input()
a = set(map(int, input().split()))
print(len(a))
print(' '.join(map(str, sorted(a))))