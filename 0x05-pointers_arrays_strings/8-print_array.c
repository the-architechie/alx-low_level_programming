#include "main.h"

/**
 * print_array - prings n number of elements of an array followed by a new line
 * @a: pointer to an array of integers
 * @n: the number of elements of the array to be printed
 * Return: returns nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
