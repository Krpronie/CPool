#include <stdio.h>

int my_str_is_printable(char const *str)
{
	int i;
	if(str[0] == '\0')
	{
		return 1;
	}
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] < 32 || str[i] > 127)
		{
			return 0;
		}
	}
	return 1;
}
