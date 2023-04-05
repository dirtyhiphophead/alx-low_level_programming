#include <stdio.h>
#include "main.h"

/**
 * main is to print all arguments it receives
 * argc si for  number of arguments
 * argv is for array of arguments
 *
 * Return: Always 0 (If Successful)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
