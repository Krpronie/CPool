#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
	if(dest==NULL || src == NULL)
		return 0;
	char *temp = dest;
	while(*temp != '\0')
	{
		temp++;
	}
	while((*temp++ = *src++)!='\0')
	{
		NULL;
	}
	return dest;
}
