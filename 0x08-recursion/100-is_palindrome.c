#include "main.h"

/**
 * _strlen_recursion - the length of a string
 *@s: string
 * Return: return the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
 *swap - swap character
 *@i: s[i]
 *@s: string
 *Return: value
 */
int swap(int i, char *s)
{
	if (s[i] == '\0')
		return (1);
	else if (_strlen_recursion(s) == 1)
		return (1);
	else if (s[i] != s[_strlen_recursion(s) - i - 1])
		return (0);
	else
		return (swap(i + 1, s));
}

/**
 *is_palindrome - check if a string is a palindrome
 *@s: string
 *Return: value
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (swap(0, s));
}
