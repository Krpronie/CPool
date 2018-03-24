#include <stdio.h>

char *my_strcapitalize(char *str)
{
	int i;
	for(i = 1; str[i] != '\0'; i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
	}
	if(str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	for(i = 1; str[i] != '\n'; i++)
	{
		if(((str[i-1] >= 32 && str[i-1] <= 47) || (str[i-1] >= 58 && str[i-1] <= 64)) && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
	}
	return str;
}
