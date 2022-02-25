# include <stdio.h>
# include "main.h"
/**
  *main - main function
  *@argc: number of arguments
  *@argv: array of arguments
  *Return: 0
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}
