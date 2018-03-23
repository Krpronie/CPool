#include <stdio.h>

int my_putstr(char const *str);

int main(int ac, char **av)
{
	for(int i = 0; i < ac; i++)
	{
		my_putstr(av[i]);
		my_putstr("\n");
	}
	return 0;
}
