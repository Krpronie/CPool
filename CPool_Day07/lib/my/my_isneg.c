#include <stdio.h>
#include <unistd.h>

int my_putchar(char);

int my_isneg(int n)
{
	if(n < 0)
		my_putchar('N');
	else
		my_putchar('P');
	my_putchar('\n');
	return 0;
}
