#include "3-calc.h"

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *operator;
	int (*func)(int, int);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(operator);
	calc = func(num1, num2);
	printf("%d\n", calc);
	return (0);
}
