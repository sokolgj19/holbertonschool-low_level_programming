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
			result = result * 10 - (s[i] - '0'); /* build negative */
		}
		else if (started)
			break;
		i++;
	}

	if (sign == -1)
		return (result);       /* already negative */
	else
		return (-result);      /* make positive safely */
}
