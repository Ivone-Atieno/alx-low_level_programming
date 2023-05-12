#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main entry point
 * @argc: number count of arguments
 * @argv: Arguments
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int x, y, sum = 0;
	char *p;

if (argc == 1)
{
	printf("0n");
	return (0);
}

for (x = 1; x < argc; x++)
{
	y = strtol(argv[x], &p, 10);
	if (*p != '0' || y < 0)
	{
		printf("Error\n");
		return (1);
	}
	sum += y;
}
printf("%d\n", sum);
return (0);
}
