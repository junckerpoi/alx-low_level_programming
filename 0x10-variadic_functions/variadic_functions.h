#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
* struct pter - data structure
* @test: pointer for input
* @printer:pointer to function
* Description: print with char, int, float, and string.
 */
typedef struct pter
{
	char *test;
	void (*printer)();
} prt;
void inprint(va_list args);
void chprint(va_list args);
void flprint(va_list args);
void stprint(va_list args);
#endif
