##!/usr/bin/python

class test:

	def __init__(self, var1,var2):
		self.a = var1
		self.b = var2

	def print_value(self):
		print "value of  a = %d and b  =%d" %(self.a,self.b)


if __name__ ==  "__main__":
	tes = test(4,5)	
	ne = tes.print_value
	ne()	
