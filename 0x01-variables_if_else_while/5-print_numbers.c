#include <stdio.h>

/**
 * main - Print out from 0 to 9
 * Return: Always return 0
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
