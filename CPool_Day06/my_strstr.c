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

char *my_strstr(char *str, char const *to_find)
{
	int n = my_strlen2(str);
	if(str != NULL && to_find != NULL)
	{
		for(int i = 0; i < n; ++i, ++str)
		{
			char const *p = str;
			char const *q = to_find;
			for(;;p++,q++)
			{
				if(*q == '\0')
				{
					return str;
				}
				if(*q != *p)
				{
					break;
				}
			}
		}
	}
	return NULL;
}
