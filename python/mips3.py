#!/usr/bin/python
from __future__ import division
import statistics


asides1 = [ 119, 117, 115, 113, 111, 119, 117, 115, 113, 111,
		112, 114, 116, 118, 110 ];

csides1 =[ 34,  32,  31,  35,  34,  33,  32,  37,  38,  39,
		32,  30,  36,  38,  30]	 
heights1 = [ 51,  52,  51,  55,  54,  53,  52,  57,  58,  59,
		 52,  50,  56,  58,  52]
result =[]	

i=0
# print len(asides)
# print len(csides)
# print len(heights)

	 
print "--------printing for data set 1--------------------"

for i in range(0,15,1):
	# print i
	# # print asides[i]
	# print "\n"
	area = (int)((asides1[i]+csides1[i])//2)*heights1[i]
	
	result.append(area)
print "sum:",sum(result)
print "average",(sum(result)/len(result))

print "min:",min(result)
print "maximim:",max(result)
num = 3.0
a = (result[0]+result[7]+result[14])//num

print "est median=",a	
result.sort()
	

b = statistics.median(result)

print "median=",b







