#include <stdio.h>
/**
 *main - The entry point
 *Return: - always 0 for (success)
 */
int main(void)
{
int x;
long int y;
long long int z;
char g;
float t;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(t));
return (0);
}
