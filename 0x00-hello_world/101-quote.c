#include <stdio.h>
#include <unistd.h>


/**
* main - Program prints message to standard error
* Description: Program prints message to std error without printf or puts
* Return: 1
**/
int main(void)
{
	write(2, "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
