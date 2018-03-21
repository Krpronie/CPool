#include <stdio.h>

int my_putstr(char const *str);
int my_strcmp(char const *s1, char const *s2);

int main(int ac, char **av)
{
	int i;
	int j;
	char *temp;
	for(i = 0; i < ac -1 ; i++)
	{
		for(j = 0; j < ac - i - 1; j++)
		{
			if(my_strcmp(av[j],av[j+1]) > 0)
			{
				temp = av[j];
				av[j] = av[j+1];
				av[j+1] = temp;
			}
		}
	}
	for(i = 0; i < ac; i++)
	{
		my_putstr(av[i]);
		my_putstr("\n");
	}
	return 0;
}
