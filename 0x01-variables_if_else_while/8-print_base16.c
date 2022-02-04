#include <stdio.h>
/**
 * main - first function in the program
 * Return: if success then return 0
 */

int main(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
