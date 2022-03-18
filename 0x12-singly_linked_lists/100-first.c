#include <stdio.h>

/**
 * before_main -  startup code can be executed before main() starts
 *
 * Return: nothing
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet,you must allow,\n");
	printf("I bore my house upon my back!\n");
}

