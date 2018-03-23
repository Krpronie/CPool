#include <stdio.h>
#include <stdlib.h>

char *my_strcat(char *dest, char const *src);
int my_putstr(char const *str);

char *concat_params(int ac, char **av)
{
	char *c = malloc(sizeof(c)*ac);
	for(int i = 0; i < ac; i++)
	{
		if(i == ac - 1)
		{
			c = my_strcat(c, av[i]);
			c = my_strcat(c, "\0");
		}
		else
		{
			my_putstr(av[i]);
			my_putstr("\n");
		}
	}
	return c;
}
