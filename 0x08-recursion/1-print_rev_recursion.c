#include "main.h"
/**
*_puts_recursion - function like puts();
*@s: input
*Return: Always 0 (Success)
*/
void _puts_recursion(char *S)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion (s + 1);
	}
	elso 
		_putchar('\n');
}


