#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);
char *my_strdup(char const *src);
char **my_str_to_word_array(char const *str);

struct info_param *my_params_to_array(int ac, char **av)
{
	int i;
	struct info_param *p;
	p = malloc(sizeof(struct info_param) * (ac - 1));
	if(p == NULL)
	{
		return NULL;
	}
	for(i = 0; i < ac; i++)
	{
		p[i].length = my_strlen(av[i]);
		p[i].str = av[i] + '\0';
		p[i].copy = my_strdup(av[i]);
		p[i].word_array = my_str_to_word_array(av[i]);
	}
	p[i + 1].str = '0';
	return p;
}
