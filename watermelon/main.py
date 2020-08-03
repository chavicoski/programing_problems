from sys import stdin, stdout

w = int(stdin.readline())

if w % 2 == 0 and w > 2: stdout.write("YES")
else: stdout.write("NO")
