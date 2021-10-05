#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[10] = "_putchar\n";
	int a;

	for (a = 0; a < 9; a++)
	{
		_putchar(string[a]);
	}
	return (0);
}
