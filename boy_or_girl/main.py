from sys import stdin, stdout

name = stdin.readline()

unique_chars = set( c for c in name )

if len(unique_chars) % 2:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
