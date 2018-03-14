#include <stdio.h>
#include <unistd.h>

int my_putchar(char);

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
