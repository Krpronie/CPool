#include <stdio.h>
#include "mylist.h"
#include "my.h"

void my_concat_list(linked_list_t **begin1,linked_list_t *begin2)
{
	linked_list_t *tmp = *begin1;
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = begin2;
	//~ *begin1 = tmp;
}
