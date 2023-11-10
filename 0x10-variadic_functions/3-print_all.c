#include "variadic_functions.h"

/**
 * print_string - print string arg
 * @str: arg string
 */
void print_string(char *str)
{
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_num - prints number passed as argument
 *@num: the num
 */
void print_num(int num)
{
	printf("%d", num);
}

/**
 * print_float - prints float number
 * @flo: float num
 */
void print_float(double flo)
{
	printf("%f", flo);
}

/**
 * print_char - prints char
 * @cha: character
 */
void print_char(char cha)
{
	printf("%c", cha);
}

/**
 * print_all - prints all the arguments
 * @format: format of argunebt
 */

void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	int flag = 0;

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(args, format);


	while (format[i] != '\0' && format != NULL)
	{
		flag = 0;
		switch (format[i])
		{
			case 'c':
				print_char(va_arg(args, int));
				flag++;
				break;
			case 'i':
				print_num(va_arg(args, int));
				flag++;
				break;
			case 'f':
				print_float(va_arg(args, double));
				flag++;
				break;

			case 's':
				print_string(va_arg(args, char *));
				flag++;
				break;
		}
		while (flag == 1 && format[i + 1] != '\0')
		{
			printf(", ");
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);

}
