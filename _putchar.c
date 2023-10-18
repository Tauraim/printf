#include <unistd.h>
/**
 * _putchar - write character c to the stdout
 * @c: character
 * Return:  on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
