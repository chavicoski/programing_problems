from sys import stdin, stdout

n = int(stdin.readline())
counter = 0

for _ in range(n):
    p1, p2, p3 = list(map(int, stdin.readline().split(" ")))
    if p1 + p2 + p3 > 1:
        counter += 1

stdout.write(str(counter))
