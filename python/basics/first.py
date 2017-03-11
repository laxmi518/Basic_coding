

print "enter the double value"
value = input("value =   ")
print "value entered == %f and %d" %(value, value)

if(value>=100):
	result = value / 100;
	print "%d  100 dollar bill" %result
	value = value - result * 100;