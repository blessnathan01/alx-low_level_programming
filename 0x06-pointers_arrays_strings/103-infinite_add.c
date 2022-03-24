#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * r: result buffer
 * @size_r: the buffer size
 *
 * Return: pointer to a string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, ind2;
	unsigned int res;
	int sign = 1;
	char now;

	index = 0;
	res = 0;
	while (*(n1 + index) != '\0')
	{
		now = *(n1 + index);
		if (now == '-')
		{
			sign *= -1;
		}
		if (now >= '0' && now <= '9')
		{
			ind2 = index;
			while (*(n1 + ind2) > 47 && *(n1 + ind2) < 58)
			{
				res = (res * 10) + *(n1 + ind2) - '0';
				ind2++;
			}
			break;
		}
		index++;
	}
	if (sign < 0)
		res *= sign;
	index = 0;
        res = 0;
        while (*(n2 + index) != '\0')
        {
                now = *(n2 + index);
                if (now == '-')
                {
                        sign *= -1;
                }
                if (now >= '0' && now <= '9')
                {
                        ind2 = index;
                        while (*(n1 + ind2) > 47 && *(n2 + ind2) < 58)
                        {
                                res = (res * 10) + *(n2 + ind2) - '0';
                                ind2++;
                        }
                        break;
                }
                index++;
        }
        if (sign < 0)
                res *= sign;

	if (n1 != "" && n2 != "")
	{
		r = n1 + n2;
		return (r);
	}
	else
		return (0);
}
