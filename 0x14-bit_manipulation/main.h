#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
int _putchar(char c);
int _strlen(const char *str);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
