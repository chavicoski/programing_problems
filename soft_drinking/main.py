from sys import stdin, stdout

n, k, l, c, d, p, nl, np = list(map(int, stdin.readline().split(" ")))

total_mililiters = k * l
total_toasts = total_mililiters // nl

total_limes = c * d

total_salt = p // np

res = min(total_toasts, total_limes, total_salt) // n

stdout.write(str(res))
