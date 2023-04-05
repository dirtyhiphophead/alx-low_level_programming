#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * argc is for number of arguments
 * argv is for array of arguments
 *
 * Return: Always 0 if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
