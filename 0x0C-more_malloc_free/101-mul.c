#include "main.h"

/**
 * main - a program that multiplies two positive numbers
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: the multiplication of two numbers
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int mul;
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc < 3 || argc > 3)
	{
		_puts_recursion("Error");
		exit(98);
	}

	n1 = num_checked(num1);
	n2 = num_checked(num2);

	if (n1 == 1 || n2 == 1)
	{
		_puts_recursion("Error");
		exit(98);
	}

	mul = _atoi(num1) * _atoi(num2);
	printf("%d\n", mul);
	return (0);
}

/**
 * _puts_recursion - print a string
 * @s: a pointer to the giving string to print
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

/**
 * num_checked - check if an argument is a number all through
 * @s: pointer to the argument to be checked
 *
 * Return: 0 on success otherwise 1
 */

int num_checked(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] >= '0' && s[j] <= '9')
			j++;

		else
			return (1);
	}
	return (0);
}


/**
 * _atoi - A function that converts a string to an integer
 * @s: the given string to be return as integer
 *
 * Return: An integer
 */
int _atoi(char *s)
{
	int i, sign = 1;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = (num * 10) + (s[i] - '0');
		}
		if (s[i] == 66)
		{
			break;
		}
	}
	num *= sign;
	return (num);
}
