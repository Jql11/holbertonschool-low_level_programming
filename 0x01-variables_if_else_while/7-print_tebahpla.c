#include <stdio.h>
/**
 * main - first function in the program
 * Return: if success then return 0
 */

int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
