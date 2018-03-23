#include <stdio.h>

int my_is_prime(int nb)
{
	int flag = 0;
	for(int i = 2; i < nb - 1; i++)
	{
		if(nb % i == 0)
		{
			flag++;
		}
	}
	if(flag == 0)
	{
		return (1);
	}
	return 0;
}