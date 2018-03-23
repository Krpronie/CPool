#include <stdio.h>
#include <unistd.h>

int my_power(int r, int p)
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
	s = my_power(r,p-1)*r;
	return s;
}

int my_compute_square_root(int nb)
{
	int root = 1;
	while(root <= nb)
	{
		if(my_power(root, 2)==nb)
		{
			return root;
		}
		root++;
	}
	return 0;
}
