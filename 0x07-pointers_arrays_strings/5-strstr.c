#include "main.h"
#include <string.h>
/**
 * _strstr - clocates a substring
 *@haystack: points to a pointer
 *@needle: points to a character
 * Return: a pointers.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
