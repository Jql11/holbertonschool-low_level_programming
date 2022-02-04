#include <stdio.h>

/**
 * main - first function in the program
 * Return: if success then return 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
