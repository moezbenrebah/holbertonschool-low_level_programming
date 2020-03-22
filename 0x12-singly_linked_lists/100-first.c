#include "lists.h"

void myStartupFun(void) __attribute__ ((constructor));

/**
 *myStartupFun - function to print before main function
 *
 *Return: Void
 */

void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
