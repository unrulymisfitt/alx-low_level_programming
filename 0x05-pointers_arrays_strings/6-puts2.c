#include "main.h"

/**
 * puts2 - prints the first char then every other char.
 * @str: param variable type char
 *
 * Return: void
 */
void puts2(char *str)
{
	int start = 0;

	while (str[start] != '\0')
	{
		if (start % 2 == 0)
		{
			_putchar(str[start]);
		}
		start++;
	}
	_putchar('\n');
}
