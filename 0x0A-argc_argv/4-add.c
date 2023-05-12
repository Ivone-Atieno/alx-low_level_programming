#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main entry point
 * @argc: number count of arguments
 * @argv: Array of arguments
 *
 * Return: 0 for succes
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int x, y, num;

for (x = 1; x < argc; x++)
{
	const char *p = argv[x];

	for (y = 0; p[y] != '\0'; y++)
	{
		if (!isdigit(p[y]))
		{
			printf("Error\n");
			return (1);
		}
	}

	num = atoi(p);
	if (num < 0)
	{
		printf("Error\n");
		return (1);
	}

	sum += num;
}
printf("%d\n", sum);
return (0);
}
