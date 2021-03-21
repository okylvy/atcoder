a, b = map(int, input().split())
s = input()

if s[0:a].isdecimal() and s[a] == '-' and s[a+1:a+2+b].isdecimal():
    print("Yes")
else:
    print("No")