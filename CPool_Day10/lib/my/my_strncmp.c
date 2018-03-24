#include <stdio.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
	if(n <= 0)
	{
		return 0;
	}
	
	if(s1 != NULL && s2 != NULL)
	{
		while(n-- && *s1 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		return *s1 - *s2;
	}
	return 0;
}
