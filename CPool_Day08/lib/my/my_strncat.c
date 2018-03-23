#include <stdio.h>

char *my_strncat(char *dest, char const *src, int n)
{
	if(dest==NULL || src == NULL)
		return NULL;
	char *temp = dest;
	while(*dest != '\0')
	{
		dest++;
	}
	while(n && (*dest++ = *src++)!='\0')
	{
		n--;
	}
	*dest = '\0';
	return temp;
}
