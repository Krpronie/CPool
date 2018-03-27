#include <stdio.h>
#include "mylist.h"
#include "my.h"

void my_rev_list(linked_list_t **begin)
{
	linked_list_t *tmp = *begin;
	linked_list_t *p1 = tmp->next;
	linked_list_t *p2 = NULL;
	tmp->next = NULL;
	while(p1 != NULL)
	{
		p2 = p1;
		p1 = p1->next;
		p2->next = tmp;
		tmp = p2;
	}
	*begin = tmp;
}

