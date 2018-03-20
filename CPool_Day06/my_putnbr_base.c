#include <stdio.h>
#include <unistd.h>

int my_putchar(char);

int my_strlen2(char const *str)
{
	int len = 0;
	while((*str++))
	{
		len++;
	}	
	return len;
}

int my_putnbr_base(int nbr, char const *base)
{
	int n = my_strlen2(base);
	if(nbr < 0)
	{
		nbr *= -1;
		my_putchar('-');
	}
	if(nbr >= n)
	{
		my_putnbr_base(nbr/n,base);
		nbr = nbr%n;
	}
	if(nbr >= 0 && nbr < n)
	{
		my_putchar(base[nbr]);
	}
	return 0;
}
