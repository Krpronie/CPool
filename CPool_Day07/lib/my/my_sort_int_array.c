#include <stdio.h>
#include <unistd.h>

void my_sort_int_array(int *array, int size)
{
	int i;
	int j;
	int temp;
	for(j = 0; j < size - 1; j++)
	{
		for(i = 0; i < size -1 - j; i++)
		{
			if(array[i] > array[i+1])
			{
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
	}
}

