#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'Three digits'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first, second, third;

	for (first = '0'; first < '9'; first++)
	{
	for (second = first + 1; second <= '9'; second++)
	{
	for (third = second + 1; third <= '9'; third++)
	{
	if ((second != first) != third)
	{
	putchar(first);
	putchar(second);
	putchar(third);

	if (first == '7' && second == '8')
	continue;

	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
