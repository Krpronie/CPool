#include <stdio.h>
#include <stdlib.h>
#include "mylist.h"
#include "my.h"

void my_sort_list(linked_list_t **begin, int (*cmp)())
{
	int n = 0;
	linked_list_t *tmp = *begin;
	linked_list_t *p = NULL;
	linked_list_t *q = NULL;
	linked_list_t *t = NULL;
	t = malloc(sizeof(t));
	p = tmp->next;
	while(p != NULL)
	{
		n++;
		p = p->next;
	}
	for(int i = 0; i < n - 1; i++)
	{
		p = tmp->next;
		q = p->next;
		for(int j = 0; j < n - i -1; j++)
		{
			if((*cmp)(p->data,q->data) > 0)
			{
				t->data = p->data;
				p->data = q->data;
				q->data = t->data;
			}
			p = p->next;
			q = q->next;
		}
	}
}
