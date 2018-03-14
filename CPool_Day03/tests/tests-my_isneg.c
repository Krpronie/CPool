#include <stdio.h>
#include <unistd.h>
int my_isneg(int n);
int main()
{
	my_isneg(101);
	my_isneg(-101);
	my_isneg(0);
	return 0;
}