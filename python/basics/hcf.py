
#!/usr/bin/python

# finding gcd for two numbers
def gcd(x, y):
    while y != 0:
        (x, y) = (y, x % y)
    return x



if __name__ == '__main__':
	numbers= []
	count = input("how many numbers")
	for i in range (0, count):
		number = input("enter the number %d  " %(i+1))
		numbers.append(number)
	sorted_num = sorted(numbers)
	gcd_val = sorted_num[0]

	for i in range(1,count):
		gcd_val = gcd(gcd_val,sorted_num[i])


print "gcd value= %d" %gcd_val
