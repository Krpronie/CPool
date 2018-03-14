#include <stdio.h>
#include <unistd.h>

void my_putchar(char);

int my_strlen2(char const *str)
{
	int len = 0;
	while((*str++))
	{
		len++;
	}	
	return len;
}

char *my_evil_str(char *str)
{
	int n = my_strlen2(str);
	char *p = str + n - 1;
	while(p >= str)
	{
		my_putchar(*(p--));
	}
	return 0;
}

