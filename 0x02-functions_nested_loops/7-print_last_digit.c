#include "holberton.h"
/**
 *print_last_digit - print the last digit
 *@n: display last digit
 *Return: 0;
 */
int print_last_digit(int n)
{

	int last_num = 0;

	if (n < 0)
	{
		n = n * -1;
		last_num = n % 10;
		_putchar('0' + last_num);
		return (last_num);
	}
	else
	{
		last_num = n % 10;
		_putchar('0' + last_num);
		return (last_num);
	}
}
