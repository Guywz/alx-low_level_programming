#include "main"

/**
 * print_sign - return 0 letter not lowercase, 1 letter lowercase
 *
 * @n: integer to check
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
