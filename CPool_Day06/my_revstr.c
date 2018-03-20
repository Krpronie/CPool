#include <stdio.h>

int my_strlen2(char const *str)
{
	int len = 0;
	while((*str++))
	{
		len++;
	}	
	return len;
}

char *my_revstr(char *str)
{
	int n = my_strlen2(str);
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
