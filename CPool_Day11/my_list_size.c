#include <stdio.h>
#include "mylist.h"

int my_list_size(linked_list_t const *begin)
{
	int len = 0;
	linked_list_t *p = (linked_list_t *)begin;
	if(begin == NULL)
	{
		return -1;
	}
	while(p != NULL)
	{
		len++;
		p = p->next;
	}
	return len;
}
