#include "3-calc.h"
/**
 * main - performs simple operation
 * @argc: Number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*fp)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	fp = get_op_func(argv[2]);
	printf("%d\n", fp(a, b));
	return (0);
}

