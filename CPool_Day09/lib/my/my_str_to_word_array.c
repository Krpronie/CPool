#include <stdio.h>
#include <stdlib.h>

char *my_strcat(char *dest, char const *src);
int my_putstr(char const *str);

char **my_str_to_word_array(char const *str)
{
	char *c = str;
	for(int i = 0 ;str[i] != '\0'; i++)
	{
		if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
		{
			if(!(str[i+1] >= 65 && str[i+1] <= 90) && !(str[i+1] >= 97 && str[i+1] <= 122) && !(str[i+1] >= 48 && str[i+1] <= 57))
			{
				c = my_strcat(c, "\n");
			}
			c = my_strcat(c, str[i]);
		}
	}
	my_putstr(c);
}
