#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num will check the string to be sure there are digit
 * str is for array str
 *
 * Return: Always 0 (If Successful)
 */
int check_num(char *str)
{
	/*For declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*this will count string*/

	{
		if (!isdigit(str[count])) /*check if there are digit in the str*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main will print the name of the program
 * argc will count arguments
 * argv will Arguments
 *
 * Return: Always 0 (If successful)
 */

int main(int argc, char *argv[])

{

	/*for declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*This goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI will convert string to int*/
			sum += str_to_int;
		}

		/*This Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
