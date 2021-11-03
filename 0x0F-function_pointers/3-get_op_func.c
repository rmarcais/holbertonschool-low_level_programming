#include "3-calc.h"
/**
 * get_op_fun - selects the correct function
 * @s: operator sign
 *
 * Return: returns a pointer to the functions that cooresponds to the good op.
 */
int (*get_op_fun(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s == ops[i].op)
		{
			return (ops[i].f(int, int));
		}
	}
	return (NULL);
}
