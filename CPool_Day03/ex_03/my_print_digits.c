#include<stdio.h>
#include<unistd.h>

int my_putchar(char);

int my_print_digits(void)
{
	char c = '0';
	while(c <= '9')
	{
		my_putchar(c);
		c++;
	}
	my_putchar('\n');
	return 0;
}
