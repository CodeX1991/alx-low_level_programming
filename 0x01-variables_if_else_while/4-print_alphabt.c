#include <stdio.h>

/**
 * main - Print all the letter of the alphabet except q and e
 * Return: Always return 0
 */

int main(void)
{
	char alpha_except_q_and_e;

	for (alpha_except_q_and_e = 'a'; alpha_except_q_and_e <= 'z'; alpha_except_q_and_e++)
	{
		if (alpha_except_q_and_e != 'q' && alpha_except_q_and_e != 'e')
		{
			putchar(alpha_except_q_and_e);
		}
	}
	putchar('\n');

	return (0);
}
