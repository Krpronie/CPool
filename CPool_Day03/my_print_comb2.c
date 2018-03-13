#include <stdio.h>
#include <unistd.h>

void my_putchar(char z)
{
	write(1, &z, 1);
}

int my_print_comb2(void)
{
	int a; 
	int b;
	int c;
	int d;
	int n;
	my_putchar('0');
	my_putchar('0');
	my_putchar('0');
	my_putchar('1');
	for(n = 0;n <= 9999;n++)
	{
		a = n/1000;
		b = n/100%10;
		c = n/10%10;
		d = n%10;
		if(a*10+b < c*10+d)
		{
			char x = a + '0';
			char y = b + '0';
			char z = c + '0';
			char w = d + '0';
			if((c*10+d)!=1) 
			{
				my_putchar(',');
				my_putchar(' ');
				my_putchar(x);
				my_putchar(y);
				my_putchar(' ');
				my_putchar(z);
				my_putchar(w);
			}
		}
	}	
	return 0;
}

