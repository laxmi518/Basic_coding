#!/usr/bin/python

import sys


def call_print(test, value):
	for i in range(0,value):
		print test

	





if __name__ ==  "__main__":

	print sys.argv
	call_print(sys.argv[1], int(sys.argv[2]))
	

	

