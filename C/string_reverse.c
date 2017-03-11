#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ************
// note address is passed in function and if add[1] goes to content in add+1;
// similar to array
// Double pointer is used if changes are to be reflected as a=b b pointer address is copied to a
// but b doesnot know its changed in the function.

// Note in calling function its like char *rev_str = b ie if rev_str points later to another
// it is not known to b.


void change_str(char *rev_string, char *org_string)
{

	char *test;
   int length = strlen(org_string);
    printf("rev_string receive = %d\n",*org_string);
 for (int i = length-1;i>=0;i--)
   {

   	

   	// rev_string[length-1-i] = org_string[i];
      // or
      *(rev_string+length-1-i) = *(org_string+i);


   }
   test = rev_string;
   org_string =  test;

   // printf("value of test =%s",test);
   // test[0]= "W";

   printf("after change of test =%d",*org_string);

    

}


int main()
{
   char *org_string = "I am Laxmi";
   char *rev_string;
   char *next_str;
   int length = strlen(org_string);
   // printf("vlaue of length = %d \n",length);
   rev_string = (char *) malloc(sizeof(char) * (strlen(org_string)+1));

printf("org_string  = %d\n",*org_string);
   change_str(rev_string,org_string);
   

 


}