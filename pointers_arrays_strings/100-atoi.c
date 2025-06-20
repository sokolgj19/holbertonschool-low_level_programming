#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value
 */
int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			/* Build number as negative to avoid overflow */
			result = result * 10 - (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}

	return (sign * -result);
}
