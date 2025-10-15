#include "main.h"
/**
 * print_triangle - check the code
 *@size: take an integer value
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a, b, c, s1 = size - 1;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b =  0; b < s1; b++)
			{
				_putchar(' ');
			}
			for (c = s1; c < size; c++)
			{
				_putchar('#');
			}
			s1--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
