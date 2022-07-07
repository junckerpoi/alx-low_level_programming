#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_numbers - function
* @separator: string to be printed between numbers
* @n: number of integers passed
* @...: unknown arguements
*
* Description: function to print numbers, with a newline
* Return: ptr to string if not empty and integers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int num, i;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, const unsigned int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);

}
