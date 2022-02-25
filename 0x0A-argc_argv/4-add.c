# include <stdio.h>
# include "main.h"
# include <stdlib.h>

/**
  *is_digit - find digit
  *@s: string
  *Return: 1 or 0
  */

int is_digit(char *s)
{
	if (*s >= '0' && *s <= '9')
		return (1);
	else
		return (0);
}
/**
  *main - main function
  *@argc: number of arguments
  *@argv: array of arguments
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_digit(argv[i]) == 1)
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
