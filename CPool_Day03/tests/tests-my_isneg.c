#include <stdio.h>
#include <unistd.h>
#include "my_isneg.h"

int main()
{
	my_isneg(101);
	my_isneg(-101);
	my_isneg(0);
	return 0;
}