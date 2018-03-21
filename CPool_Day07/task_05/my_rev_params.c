#include <stdio.h>

int my_putstr(char const *str);

int main(int ac, char **av)
{
	char **p = av + ac - 1;
	while(*p >= *av)
	{
		my_putstr(*(p--));
		my_putstr("\n");
	}
	return 0;
}
