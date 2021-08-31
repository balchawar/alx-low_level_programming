#include "main.h"
/**
 *main - entry point.
 *Description: program starts and ends here.
 *Return: 0 on success.
 */
int main(void)
{
char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
