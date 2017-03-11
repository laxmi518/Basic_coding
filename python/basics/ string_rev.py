def rev_string(test):
	final_str = ''
	words = test.split(' ')
	for x in words:
		rev_word = x[::-1]
		final_str = final_str + rev_word + ' '	

	print final_str


	
		



if __name__ == '__main__':
	test = "   I         am Laxmi     Kadariya"
	rev_string(test)