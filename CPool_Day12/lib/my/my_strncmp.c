#include <stdio.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
	if(s1 == NULL && s2 == NULL)
	{
		return -1;
	}
	while(n)
	{
		if(*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			return *s1 - *s2 - '\0';
		}
		n--;
	}
	return 0;
}
