#include "main.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *@s: points to a char
 *@a: takes an integer value
 *@len: talkes an integer value
 * Return: 1 or 0.
 */
int check_palindrome(char *s, int a, int len);

int _strlen_recursion(char *s);

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (s[0] == '\0')
		return (1);
	return (check_palindrome(s, 0, len));
}
/**
 * check_palindrome - checks if it's a palindrome
 *@s: points to a char
 *@a: takes an integer value
 *@len: takes an integer value
 * Return: 1 or 0.
 */
int check_palindrome(char *s, int a, int len)
{
	if (a > len / 2)
		return (1);
	if (s[a] == s[len - a - 1])
		return (check_palindrome(s, a + 1, len));
	else
		return (0);
}
/**
 * _strlen_recursion - returns the length of a string
 *@s: points to a char
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
