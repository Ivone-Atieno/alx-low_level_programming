#include <stdio.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - main entry point of the program
 * @argc: The number count of arguments
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 foe success
 */

int main(int argc, char **argv)
{
	int f_num, s_num;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f_num = atoi(argv[1]);
	op = argv[2];
	s_num = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
	printf("Error\n");
	exit(99);
}

if ((*op == '/' && s_num == 0) || (*op == '%' && s_num == 0))
{
	printf("Error\n");
	exit(100);
}

printf("%d\n", get_op_func(op)(f_num, s_num));

return (0);
}
