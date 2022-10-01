#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

/**
 * idx_num_starts - find index where a digit is first found in string
 * @s: integer
 * Return: integer 1 or -1
 */

int find_sign(char *s)
{
	int negatives = 0, i = 0, sign = 1;

	while (i < (idx_num_starts(s)))
	{
		if (s[i++] == '-')
		{
			negatives++;
		}
	}

	if (negatives % 2 != 0)
	{
		sign = -1;
	}
	return (sign);
}

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int idx_digit_starts = (idx_num_starts(s));
	int sign;
	int digits_to_print = 0;
	int t = 1, i;
	unsigned int num = 0;
	int digit = (idx_num_starts(s));

	if (idx_digit_starts < 0) /* if no digits found, exit program */
	{
		return (0);
		sign = find_sign(s);
	}

	while ((s[idx_digit_starts] >= '0' && s[idx_digit_starts] <= '9')
			&& (idx_digit_starts <= _strlen(s))) /* count digits to print */
	{
		digits_to_print += 1;
		idx_digit_starts++;
	}

	i = 1;

	while (i < digits_to_print) /* find powers of ten to multiply places */
	{
		t *= 10;
		i++;
	}

	for (i = digit; i < (digit + digits_to_print); i++) /* calculate num */
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}
	return (num * sign);
}
