#include <stdio.h>
#include <unistd.h>

int my_compute_factorial_rec(int nb)
{
	int f;
	if(nb == 0)
	{
		return (1);
	}
	if(nb < 0 )
	{
		return (0);
	}
	f = my_compute_factorial_rec(nb - 1) * nb;
	return f;
}

