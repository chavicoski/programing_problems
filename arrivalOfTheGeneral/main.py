def main():
	from sys import stdin, stdout
	n = int(stdin.readline())
	arr = [int(x) for x in stdin.readline().split()]
	
	maxPos = -1
	max = 0
	minPos = -1
	min = 101
	i = 0
	for x in arr:
		if x > max:
			max = x
			maxPos = i
		if x <= min:
			min = x
			minPos = i
		i = i + 1
	if maxPos > minPos:
		stdout.write( str(len(arr) - minPos + maxPos - 2) )
	else:
		stdout.write( str(len(arr) - minPos + maxPos - 1) )
if __name__ == '__main__':
	main()