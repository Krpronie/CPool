#include <stdio.h>

void my_swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;	
}
