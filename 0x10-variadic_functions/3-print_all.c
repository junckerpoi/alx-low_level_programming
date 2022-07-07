#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_all - function
* @format: format specifier - c, i, f, s
*
* Description: Function to print anything.
* Return: 0
*/
void print_all(const char * const format, ...)
{
	va_list args;
	char *septr = "";
	int i = 0, j;

	prt alltype[] = {
		{"c", chprint},
		{"i", inprint},
		{"f", flprint},
		{"s", stprint},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (alltype[j].test)
		{
			if (format[i] == alltype[j].test[0])
			{
				printf("%s", septr);
				alltype[j].printer(args);
				septr = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
/**
* inprint - function
* @args: arg to print
*
* Description: func to print integers
* Return: 0
*/
void inprint(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
* chprint- function
* @args: arg to print
*
* Description: func to print char
* Return: 0
*/
void chprint(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
* flprint - function
* @args: arg to print
*
* Description: func to print float
* Return: 0
*/
void flprint(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
* stprint - function
* @args: args to print
*
* Description: func to print char strings
* Return: 0
*/
void stprint(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s", s);
}
