#include <stdio.h>
#include <unistd.h>
int my_put_nbr(int nb);

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