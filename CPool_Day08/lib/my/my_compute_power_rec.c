#include <stdio.h>
#include <unistd.h>

int my_compute_power_rec(int nb, int p)
{
	int s = 1;	
	if(p == 0)
	{
		return (1);
	}
	if(p < 0)
	{
		return (0);
	}
	s = my_compute_power_rec(nb,p-1)*nb;
	return s;
}
