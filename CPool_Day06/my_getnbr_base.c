#include <stdio.h>
#include <unistd.h>

int my_strlen2(char const *str)
{
	int len = 0;
	while((*str++))
	{
		len++;
	}	
	return len;
}

int my_compute_power_rec(int nb, int p) 
{
	int res;
	if (p==0)
		res = 1;
	if (p < 0)
		res = 0;
	if (p > 0)
	{
		res = my_compute_power_rec(nb,p-1)*nb;
	}
	return res;
}

int my_putchar(char);

int my_getnbr_base(char const *str , char const *base)
{
    int n = my_strlen2(base);
    int i;
    int j = my_strlen2(str);
    long c = 0;
    int flag = 1;
    int a = 0;
    if(str == NULL || base == NULL || n == 0 || j == 0)
    {
		return 0;
	}
	for(i = 0; base[i] != '\0'; i++)
	{
		int f = 1;
		for(int k = 0; k < i; k++)
		{
			if(base[i] == base[k])
			{
				return 0;
			}
		}
	}
	while(str[a] == '-' || str[a] == '+')
    {
		if(str[a] == '-')
			flag = flag * -1;
        a++;
    }
    if(flag == -1)
		my_putchar("-");
    for(i = j - 1, j = 0; i >= a; i--, j++)
    {
        int tmp;
        if(str[i] >= '0' && str[i] <= '9')
            tmp = (str[i]-'0');
        else
            tmp = (str[i]-'A')+10;
     
        c=c+(long)(tmp *my_compute_power_rec(n ,j));
    }
    if(c < -2147483648 || c > 2147483647)
	{
		return 0;
	}
    return c;
}


