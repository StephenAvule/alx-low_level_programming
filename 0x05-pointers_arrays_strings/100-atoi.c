#include "main.h"
/**
 * _atol - Convert string to an integer.
 * @s: Pointer to a character string.
 *
 * Return: void
 */
int _ato1(char *s)
{
	int sign;
	unsigned int num;
	char *temp;

	temp = s;
	num = 0;
	sign = i;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '_')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp = '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}
