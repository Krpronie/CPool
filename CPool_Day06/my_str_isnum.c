#include <stdio.h>

int my_str_isnum(char const *str)
{
	int i;
	if(str[0] == '\0')
	{
		return 1;
	}	
	for(i = 0; str[i]; i++)
	{
		if(str[i] < 48 || str[i] > 57)
		{
			return 0;
		}
	}
	return 1;
}
