#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * followed by a new line
 */
void print_numbers(void)
{
	int i;
	char num_str[] = "0123456789\n";

	for (i = 0; num_str[i] != '\0'; i++)
	{
		_putchar(num_str[i]);
	}
}
