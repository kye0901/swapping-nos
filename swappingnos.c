#include<stdio.h>
int main ()
{
	int a=10,b=40 ;
	printf("before swapping a=%d and b=%d . ",a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("after swapping a=%d and b=%d . ",a,b);
	return 0;
}
