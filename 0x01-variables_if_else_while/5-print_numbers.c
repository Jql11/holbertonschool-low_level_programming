#include <stdio.h>
/**
 * main - first function in the program
 * Return: if success then return 0
 */

int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
