#include <stdio.h>
#include <stdlib.h>

char *my_strcat(char *dest, char const *src);
int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
	int n = 0;
	while(tab[n])
	{
		n++;
	}
	char *c = malloc(sizeof(c)*n);
	for(int i = 0; i < n; i++)
	{
		if(tab[i] != "\0")
		{
			c = my_strcat(c, tab[i]);
			c = my_strcat(c, "\n");
		}
		
	}
	my_putstr(c);
}
