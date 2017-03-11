def lcm(x, y):
   """This function takes two
   integers and returns the L.C.M."""

   # choose the greater number
   if x > y:
       greater = x
   else:
       greater = y

   while(True):
       if((greater % x == 0) and (greater % y == 0)):
           lcm = greater
           break
       greater += 1

   return lcm


if __name__ == '__main__':
  numbers= []
  count = input("how many numbers")
  for i in range (0, count):
    number = input("enter the number %d  " %(i+1))
    numbers.append(number)
 
  lcm_val = numbers[0]

  for i in range(1,count):
    lcm_val = lcm(lcm_val,numbers[i])


print "gcd value= %d" %lcm_val
