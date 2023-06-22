#include "3-calc.h"

/**
 * op_add - add two integer
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of the integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the quotient of the subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the quotient of the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find the mod(a) of b
 * @a: the first number
 * @b: the second number
 *
 * Return: the modulo
 */

int op_mod(int a, int b)
{
	return (a % b);
}
