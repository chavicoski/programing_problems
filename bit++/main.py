from sys import stdin, stdout

n = int(stdin.readline())
x = 0

for _ in range(n):
    code = stdin.readline()

    if "++" in code:
        x += 1
    else:
        x -= 1

stdout.write(str(x))
