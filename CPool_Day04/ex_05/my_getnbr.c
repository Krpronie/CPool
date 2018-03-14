#include <stdio.h>
#include <unistd.h>

int my_strlen(char const *str)
{
	int len = 0;
	while((*str++))
	{
		len++;
	}	
	return len;
}

int my_getnbr(char const *str)
{
	long int value;
	int flag = 1;
	char const *n;
	n = str;
	while(*n != '\0')
	{
		if(!(*n >= '0' && *n <= '9') && (*n != '-' && *n != '+'))
		{
			break;
		}
		if(*n == '-')
		{
			flag = flag * -1;
			n++;
		}
		if(*n == '+')
		{
			flag = flag * 1;
			n++;
		}
		if(*n >= '0' && *n <= '9')
		{
			value = value * 10 + (*n - '0'); 
			n++;
		}
	}
	if(value < -2147483648 || value > 2147483647)
	{
		return 0;
	}
	return (value * flag);
}

int main()
{
	int res = my_getnbr("a441");
	printf("%d\n",res);
	return 0;
}