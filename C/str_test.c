#include <stdio.h>
#include <stdlib.h>

#include <strings.h>
struct test
{
	int a;
	int b;
	
};


int main(){
	struct test *str;
	str = (struct test *)malloc(sizeof(struct test));
	scanf("%d",&str->a);
	scanf("%d",&str->b);

	printf("value of a = %d and b= %d", str->a,str->b);


}
