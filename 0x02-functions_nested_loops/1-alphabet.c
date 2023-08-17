#include "main.h"


/**
 *print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *Return: Always 0
 */

void print_alphabet(void)
{
	char s = 'a';

	while (s <= 'z');

	{
		_putchar(s);
		s++;
	}
	_putchar('\n');

}
