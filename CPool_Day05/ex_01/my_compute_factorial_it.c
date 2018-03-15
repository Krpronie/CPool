#include <stdio.h>
#include <unistd.h>

int my_compute_factorial_it(int nb)
{
	int i;
	int f = 1;
	for(i = 1; i <= nb; i++)
	{
		f = f * i;
	}
	if(nb == 0)
	{
		f = 1;
	}
	if(nb < 0 )
	{
		f = 0;
	}
	return f;
}
