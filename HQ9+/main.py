from sys import stdin, stdout

code = stdin.readline()
prints = False

for c in code:
    if c in ["H", "Q", "9"]:
        stdout.write("YES")
        prints = True
        break

if not prints: stdout.write("NO")
