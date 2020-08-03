from sys import stdin, stdout
import math

n, m, a = map(int, stdin.readline().split(" "))

n_aux = math.ceil(n / a)
m_aux = math.ceil(m / a)
res = n_aux * m_aux

stdout.write(str(res))
