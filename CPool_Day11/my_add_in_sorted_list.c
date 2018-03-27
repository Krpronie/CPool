#include <stdio.h>
#include "mylist.h"
#include "my.h"

void my_add_in_sorted_list(linked_list_t **begin, void *data, int (*cmp)())
{
	linked_list_t *tmp = *begin;
	linked_list_t *first = NULL;
	linked_list_t *t;
	linked_list_t *p;
	linked_list_t *q;
	first = tmp->next;
	while(first != NULL)
	{
		for(t = first, q = tmp; ((q != NULL) && ((*cmp)(q->data, t->data) < 0));p = q, q = q->next);
		first = first->next;
		if(q == tmp)
		{
			tmp = t;
		}
		else
		{
			p->next = t;
		}
		t->next = q;
	}	
}
