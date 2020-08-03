def main():
	from sys import stdin, stdout
	n = int(stdin.readline())
	acc = 0
	for p in stdin.readline().split():
		acc += int(p)
	res = acc / n
	stdout.write(str(res))
		
if __name__ == '__main__':
	main()
