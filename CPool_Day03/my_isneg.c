#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_isneg(int n)
{
		if(n < 0)
			my_putchar('N');
		else if(n >= 0)
			my_putchar('P');
		my_putchar('\n');
		return 0;
}
