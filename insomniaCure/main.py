def main():
	from sys import stdin, stdout
	import math
	k = int(stdin.readline())
	l = int(stdin.readline())
	m = int(stdin.readline())
	n = int(stdin.readline())
	d = int(stdin.readline())
	res = 0
	for i in range(1, d + 1):
		if i % k == 0 or i % l == 0 or i % m == 0 or i % n == 0:
			res += 1	
	stdout.write(str(res))

if __name__ == '__main__':
	main()
