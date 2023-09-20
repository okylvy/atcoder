n, k = map(int, input().split())
s = []
for i in range(n):
    j = input()
    s.append(j)

s = s[0:k]
sorted_s = sorted(s)
for i in sorted_s:
    print(i)