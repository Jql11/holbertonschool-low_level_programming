#include "main.h"

/**
 * cap_string - capitalise all words of a string
 *@s: string
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i];
		else if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			if (s[i] == '"' || s[i] == '(' || s[i] == ')' ||
					s[i] == '{' || s[i] == '}' ||
					s[i] == '\n' || s[i] == '\t' ||
					s[i] == '.' || s[i] == '?' ||
					s[i] == ';' || s[i] == '!' ||
					s[i] == ',' || s[i] == ' ' || 
					s[i] == '.')
			{
				s[i + 1] = s[i + 1] - 'a' + 'A';
			}
		}
		i++;
	}
	return (s);

}

