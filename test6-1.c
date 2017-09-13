#include <stdlib.h>
#include <stdio.h>

int strleng(char* str)
{
	int leng=0;
	while (*str++ != '\0')
	{
		printf("%c\n",*(str-1));
		leng+=1;
	}
	return leng;
}
void  main ()
{
	char* strings="douhui";
	printf("%d\n",strleng(strings));
}
