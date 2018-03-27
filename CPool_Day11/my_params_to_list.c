#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
	int i;
	linked_list_t *head = NULL;
	linked_list_t *p, *t;
	head = malloc(sizeof(head));
	t = head;
	for(i = 0; i < ac; ++i)
	{
		p = malloc(sizeof(p));
		p->data = av[i];
		p->next = t->next;
		t->next = p;
	}
	return p;
}

