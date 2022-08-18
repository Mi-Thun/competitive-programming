n = int(input())
x = 1
c = 0
for x in range(n):
    a = input()
    if int(a[0])+int(a[2])+int(a[4]) > 1:
        c = c+1

print(c)