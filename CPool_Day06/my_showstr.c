#include <stdio.h>

#include <unistd.h>

int my_putchar(char);

int my_strlen2(char const *str)
{
	int len = 0;
	while((*str++))
	{
		len++;
	}	
	return len;
}

int my_putnbr_base(int nbr, char const *base);

int my_showstr(char const *str)
{
	int i;
	if(str[0] == '\0')
	{
		return 0;
	}
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] < 32 || str[i] > 127)
		{
			char a = str[i];
			my_putchar('\\');
			if(a < 16)
			{
				my_putchar('0');
			}
			a = my_putnbr_base(str[i], "0123456789abcdef");
		}
		else
		{
			my_putchar(str[i]);
		}
	}
	return 0;
}
