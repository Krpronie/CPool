#include<stdio.h>
#include<unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);	
}

int my_print_alpha()
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

