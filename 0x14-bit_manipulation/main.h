#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#define uint unsigned int
#define ulong unsigned long int

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
