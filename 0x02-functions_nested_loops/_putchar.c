#include "main.h"
	#include <unistd.h>
<<<<<<< HEAD
	/**
	 * _putchar - writes the character c to stdout
	 * @c: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
=======
/**
 *  _putchar - writes the character c to stdout
 *  @c: The character to print
 *  Return: On success 1
 */
int _putchar(char c)
{
	retrun (write(1, &c, 1));

}
>>>>>>> 246e4d2310800b232ef8f9e20b40ceb45cdbbf7f
