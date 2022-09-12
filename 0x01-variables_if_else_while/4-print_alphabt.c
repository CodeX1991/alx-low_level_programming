#include <stdio.h>

/**
 * main - Print all the letter of the alphabet except q and e
 * Return: Always return 0
 */

int main(void)
{
	char except_q_and_e;

	for (except_q_and_e = 'a'; except_q_and_e <= 'z'; except_q_and_e++)
	{
		if (except_q_and_e != 'q' && except_q_and_e != 'e')
		{
			putchar(except_q_and_e);
		}
	}
	putchar('\n');

	return (0);
}
