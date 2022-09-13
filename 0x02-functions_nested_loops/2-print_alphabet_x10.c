#include "main.h"

/**
 * print_alphabet_x10 - This function prints 10 times the alphabets,
 * in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char alpha;
	int num;

	for (num = 1; num <= 10; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
