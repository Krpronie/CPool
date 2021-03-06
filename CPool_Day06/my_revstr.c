#include <stdio.h>

int my_strlen(char const *str);

char *my_revstr(char const *str)
{
	int n = my_strlen(str);
	char const *p = str + n - 1;
	char const *q = str;
	char temp;
	if(str != NULL)
	{
		while(q < p)
		{
			temp = *q;
			*q++ = *p;
			*p-- = temp;
		}
	}
	return str;
}
