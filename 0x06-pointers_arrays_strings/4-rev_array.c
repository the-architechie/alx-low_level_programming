#include "main.h"


/**
 * reverse_array - reverses the content of array of integers
 * @a: the pointer to an array of integers
 * @n: the number of elements of the array
 * Return: Returns Nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
