#include <unistd.h>

/**
 * _putchar - writes to the stdout
 * @c: The character to print
 *
 * Return: on success, return 1.
 * On erro, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
