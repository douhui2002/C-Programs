#include <stdio.h>


int increment(int a);

int negate(int a);

int main ()
{
	int a=10,b=0,c=-10;
	printf("a=%d, increment(a)=%d\n", a, increment(a));
	printf("a=%d, negate(a)=%d\n", a, negate(a));	
	printf("b=%d, increment(b)=%d\n", b, increment(b));
	printf("b=%d, negate(b)=%d\n", b, negate(b));	
	printf("c=%d, increment(c)=%d\n", c, increment(c));
	printf("c=%d, negate(c)=%d\n", c, negate(c));	
	return 0;
}
