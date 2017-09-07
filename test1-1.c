#include <stdio.h>
#include <string.h>

void main()
{
	int a,b;
	char *c;
	scanf("%d%d%s",&a,&b,c);
	printf("%d %d %s\n",a,b,c);
	
	int d=strlen(c);
	printf("%d\n",d);
	for (a=0;a<d;a++)
	{
		printf("%c\n",c[a]);
	}
}
