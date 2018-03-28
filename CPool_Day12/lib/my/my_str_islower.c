#include <stdio.h>

int my_str_islower(char const *str)
{
	int i;
	if(str[0] == '\0')
		return 1;
	for(i = 0; str[i]; i++)
	{
		if(str[i] < 97 || str[i] > 122)
		{
			return 0;
		}
	}
	return 1;
}
