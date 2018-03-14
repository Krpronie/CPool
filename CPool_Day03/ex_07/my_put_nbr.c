#include <stdio.h>
#include <unistd.h>

int my_putchar(char);

int my_put_nbr(int nb)
{
	if(nb >= 10)
	{
		my_put_nbr(nb/10);
		nb = nb%10;
	}

	if(nb >= 0 && nb < 10)
	{
		char c = nb + '0'; 
		my_putchar(c);
	}

	if(nb<0)
	{
		int n;
		n = -1 * nb;
		my_putchar('-');
		if(n >= 10)
		{
			my_put_nbr(n/10);
			n = n%10;
		}

		if(n >= 0 && n < 10)
		{
			char c = n + '0'; 
			my_putchar(c);
		}
	}
	return 0;
}
