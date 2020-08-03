from sys import stdin, stdout

str1 = stdin.readline().lower()
str2 = stdin.readline().lower()

if str1 < str2:
    stdout.write("-1")
elif str1 > str2:
    stdout.write("1")
else:
    stdout.write("0")
