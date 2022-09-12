#include <stdio.h>

/**
 * main - Pirnt out number 0 to 9 without char type
 * Return: Always return 0
 */

int main(void)
{
	unsigned int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');

	return (0);
}
