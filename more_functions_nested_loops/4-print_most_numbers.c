#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9, except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char numbers[] = "01356789\n";
	int i;

	for (i = 0; numbers[i] != '\0'; i++)
	{
		_putchar(numbers[i]);
	}
}
