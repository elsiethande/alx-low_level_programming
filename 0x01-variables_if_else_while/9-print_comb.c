#include <stdio.h>

/**
 * main - prints all possible combinations of a single digit number
 *
 * Return : always 0 on success
 */
int main(void)
{
	int i = '0';

	while (i < '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
