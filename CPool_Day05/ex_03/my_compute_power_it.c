#include <stdio.h>
#include <unistd.h>

int my_compute_power_it(int nb, int p)
{
	int i;
	int s = 1;
	for(i = 1; i <= p; i++)
	{
		s = s * nb;
	}
	if(p == 0)
	{
		s = 1;
	}
	if(p < 0)
	{
		s = 0;
	}
	return s;
}
