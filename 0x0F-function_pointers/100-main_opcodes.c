#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point
 * dedcription - prints its own opcodes
 * @argc: number count of arguments
 * @argv: array of arguments
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	int num_bytes, b;
	char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes = (char *)main;

	for (b = 0; b < num_bytes; b++)
	{
		if (b == num_bytes - 1)
		{
			printf("%02hhx\n", opcodes[b]);
			break;
		}
		printf("%02hhx ", opcodes[b]);
	}
	return (0);
}
