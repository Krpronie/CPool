#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
	n = my_strlen(src)+1;
	char *p;
	p = malloc(sizeof(char)*n);
	if(p == NULL)
	{
		return -1;
	}
	my_strcpy(p, src);
	return p;
}
