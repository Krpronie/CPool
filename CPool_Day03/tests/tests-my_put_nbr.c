#include <stdio.h>
#include <unistd.h>
#include "my_put_nbr.h"

int main()
{
	my_put_nbr(101);
	my_putchar('\n');
	my_put_nbr(-101);
	my_putchar('\n');
	my_put_nbr(254789525);
	my_putchar('\n');
	my_put_nbr(-254789525);
	my_putchar('\n');
	my_put_nbr(3);
	my_putchar('\n');
	return 0;
}