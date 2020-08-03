from sys import stdin, stdout

def main():
	n = int(stdin.readline())

	if n%2 != 0:
		stdout.write(str(-1))
	else:
		arr = []
		for i in range(1, int(n/2) + 1):
			arr.append(2 * i)
			arr.append(2 * i - 1)
		for x in arr: 
			stdout.write(str(x) + ' ')

if __name__ == '__main__':
	main()

