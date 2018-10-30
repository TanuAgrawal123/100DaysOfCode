def sqrt(x):
	import math
	guess=math.sqrt(x)
	return guess

def main():
	
	try:
		print(sqrt(9))
		print(sqrt(2))
		print(sqrt(-1))
		print("This is never printed")
	except ValueError:
		print("Can not compute square root of a negative numver")

	print("Program execution continues normally here.")

if __name__ == '__main__':
	main()
