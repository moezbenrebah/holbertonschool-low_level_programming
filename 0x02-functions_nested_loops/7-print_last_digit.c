#include "holberton.h"
/**
 *print_last_digit - print the last digit
 *@n: display last digit
 *Return: last_num;
 */
int print_last_digit(int n)
{
	int last_num = 0;

	last_num = n % 10;
	if (n < 0)
		last_num = last_num * -1;
	_putchar(last_num + '0');
	return (last_num);
}
