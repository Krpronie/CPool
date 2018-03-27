#include <stdio.h>
#include <stdlib.h>
#include "mylist.h"
#include "my.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
	linked_list_t *p = *begin;
	linked_list_t *t;
	while(p->next != NULL)
	{
		if((*cmp)(p->next->data,data_ref) == 0)
		{
			t = p->next;
			p->next = t->next;
			free(t);
			t = NULL;
		}
		p = p->next;
	}
	return 0;
}
