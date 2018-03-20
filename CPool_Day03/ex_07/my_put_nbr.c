#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_put_nbr(int nb)
{
	if(nb < 0)
	{
		nb *= -1;
		my_putchar('-');
	}
	if(nb >= 10)
	{
		my_put_nbr(nb/10);
		nb = nb%10;
	}

	if(nb >= 0 && nb < 10)
	{
		my_putchar(nb + '0');
	}
	return 0;
}
