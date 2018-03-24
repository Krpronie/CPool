#include <stdio.h>
#include <unistd.h>

int my_putchar(char c);
int my_putstr(char const *str);

int my_put_nbr(int nb)
{
	if(nb == -2147483648)
	{
		my_putstr("-2147483648");
	}
	if(nb < 0 && nb > -2147483648)
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
