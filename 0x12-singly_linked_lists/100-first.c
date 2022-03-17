#include <stdio.h>

/**
 * myStartupFun -  startup code can be executed before main() starts
 *
 * Return: Always 0.
 */
void myStartupFun(void) __attribute__ ((constructor));

void myStartupFun(void)
{
	printf("You're beat! and yet,
	you must allow,\nI bore my house upon my back!\n");
}

