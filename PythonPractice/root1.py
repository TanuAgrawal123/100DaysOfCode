import sys
def sqrt(x):
	if x < 0:
		raise ValueError("Can not compute square root"
							" of negative number {}".format(x))
	import math
	guess=math.sqrt(x)
	return guess

def main():
	try:
		print(sqrt(-1))
	except ValueError as e:
		print(e, file=sys.stderr)

	print("Program execution continues normally here. ")

if __name__ == '__main__':
	main()
