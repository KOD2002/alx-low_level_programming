#include <stdio.h>
/**
 * main - entry point
 * Description: 'prints numbers of the base 10'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
