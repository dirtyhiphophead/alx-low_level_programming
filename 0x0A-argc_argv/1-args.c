#include <stdio.h>
#include "main.h"

/**
 * main will print the number of arguments passed to the program
 * argc is for number of arguments
 * argv is for array of arguments
 *
 * Return: Always 0 (If successful)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
