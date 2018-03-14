#include <stdio.h>
#include <unistd.h>

int my_putchar(char);

int my_print_alpha(void)
{
	char c='a';
	while(c<='z')
	{
		my_putchar(c);
		c++;
	}
	my_putchar('\n');
	return 0;
}
