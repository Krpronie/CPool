#include <stdio.h>
#include <unistd.h>

int my_putchar(char);

int bottom_width(int n)
{
	int l = 0;
	int b = (n*n+7*n)/2;
	if(n <= 0 )
	{
		return 0;
	}
	if(n % 2 != 0)
	{
		l = b + n*1.5 + 1.5;
	}
	
	if(n % 2 == 0)
	{
		l = b + n*1.5 + 1;
	}
	return l;
}

void tree_1(int x,int space)
{
	int i, j;
	int z = bottom_width(x);
	
	for(i = z/2 - x - 2; i <= z/2; i++)
	{
		for(j = 0; j < space;j++)
		{
			my_putchar(' ');
		}
		for(j = z/2 - i; j > 0; j--)
		{
			my_putchar(' ');
		}
		for(j = 2*i + 1; j > 0; j--)
		{
			my_putchar('*');
		}
		my_putchar('\n');
	}
}

void tree_2(int y)
{
	int z = bottom_width(y);
	for(int l = 1; l <= y; l++)
	{
		int width = 0;
		if(y%2 == 1)
			width = y;
		else
			width = y + 1;
		for(int m = 0; m < (z - width)/2; m++)
		{
			my_putchar(' ');
		}
		for(int n = 0; n < width; n++)
		{
			my_putchar('|');
		}
		my_putchar('\n');
	}
}

void tree(int size)
{
	int z = bottom_width(size);
	int sec_space = (z-1)/2-3;
	int f = (size * size + 7 * size)/2;
	for(int i = 1; i <= size; i++)
	{
		tree_1(i,sec_space);
		sec_space = sec_space - (i + 2)/2 - 2;
		
	}
	tree_2(size);
}


