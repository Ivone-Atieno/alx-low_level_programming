#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: number count of arguments
 * @argv: array of arguments
 *
 * Return: return 0 for success
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
