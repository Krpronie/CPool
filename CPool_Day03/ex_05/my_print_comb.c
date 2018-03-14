#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

int my_print_comb(void)
{
	int a;
	int b;
	int c;
	int n;
	my_putchar('0');
	my_putchar('1');
	my_putchar('2');
	for(n = 0;n <= 999;n++)
	{
		a = n/100;
		b = n/10%10;
		c = n%10;
		if(a < b && b < c)
		{
			char x = a + '0';
			char y = b + '0';
			char z = c + '0';
			if(z != '2') 
			{
				my_putchar(',');
				my_putchar(' ');
				my_putchar(x);
				my_putchar(y);
				my_putchar(z);
			}
		}
	}
		
	return 0;
}

