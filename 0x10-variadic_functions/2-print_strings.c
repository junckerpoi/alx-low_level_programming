#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_strings - function
* @separator: string to be printed between strings
* @n: number of integers passed
* @...: unknown arguments
*
* Description: function to print strings, with a newline
* Return: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *string;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
				printf("%s", string);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
