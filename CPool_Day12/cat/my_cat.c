#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int my_cat(int ac, char **av)
{
	int fd;
	int ret;
	char buf[2048];
	
	if(ac == 1)
	{
		while(ret = read(0, buf, 2047))
		{
			write(1, buf, ret);
		}
	}
	ret = 1;
	for(int j = 1; j < ac; j++)
	{
		fd = open(av[j],O_RDONLY);
		if(fd == -1)
		{
			my_putstr("cat: ");
			my_putstr(av[j]);
			my_putstr(": No such file or directory\n");
		}
		else
		{
			while(ret > 0)
			{
				for(int i = 0; i < 2048; ++i)
				{
					buf[i] = '\0';
				}
				ret = read(fd, buf, 2047);
	
				if(ret < 0)
				{
					my_putstr("cat: ");
					my_putstr(av[j]);
					my_putstr(": Is a directory\n");
				}
				my_putstr(buf);
			}
			ret = 1;
		}
	}
	return 0;
}

int main(int ac, char **av)
{
	my_cat(ac,av);
	return 0;
}
