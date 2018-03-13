#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);	
}

int my_print_revalpha(void)
{
	char c = 'z';
	while(c>='a')
	{
		my_putchar(c);
		c--;
	}
	my_putchar('\n');
	return 0;
}
