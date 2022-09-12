#include <stdio.h>

/**
* main - Point of entry.
*
* Return: Always 0.
*/

int main(void)
{
	char z = 'z';

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
