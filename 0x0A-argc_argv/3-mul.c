#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number count of arguments
 * @argv: array of arguments
 * Return: 0 for success else 1
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int res;

if (argc != 3)
{
	printf("Error\n");
	return (1);
}

res = num1 * num2;
printf("%d\n", res);
return (0);
}
