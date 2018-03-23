#include <stdio.h>

int my_strlen(char const *str);

char *my_revstr(char *str)
{
	int n = my_strlen(str);
	char *p = str + n - 1;
	char *q = str;
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
