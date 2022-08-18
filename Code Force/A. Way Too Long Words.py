n = int(input())
x = 1
for x in range(n):
    a = input()
    b = len(a)
    if b <= 10:
        print(a)
    else:
        print(a[0] + str(b-2) + a[-1])