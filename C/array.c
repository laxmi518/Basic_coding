#include <stdio.h>
#include <string.h>


void *call_arr(int arry[])
{
	int arr2[10]; 


*arr2 = *arry;
*arr2 = 5;
// arr2[0]=5;
printf("%d",*arr2);

for (int i=0;i<10;i++)
   {
     
     arr2[i]=i;

   }

   return arr2;

}

int main()
{
   int arr[10];
   int ne[10];
   for (int i=0;i<10;i++)
   {
     printf(" enter the value\n");
     scanf("%d",&arr[i]);

   }


   ne = call_arr(arr);

   printf("value of first = %d", arr[0]);



 return 0;


}