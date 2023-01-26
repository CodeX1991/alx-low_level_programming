#ifndef OP_FUNCTIONS
#define OP_FUNCTIONS

#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif /* #ifndef OP_FUNCTION */

/**
 * op_add - a function that add two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that add two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: a subtract
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiply two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the quotient
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divide two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - a function that carry out a mod
 * @a: the first number
 * @b: the second number
 *
 * Return: the answer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
