from sys import stdin, stdout

name1 = stdin.readline().strip()
name2 = stdin.readline().strip()
pile = stdin.readline().strip()

if sorted(name1 + name2) == sorted(pile):
    stdout.write("YES")
else:
    stdout.write("NO")
