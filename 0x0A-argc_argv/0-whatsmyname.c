#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number count of arguments
 * @argv: array of arguments
 *
 * Return: return 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
