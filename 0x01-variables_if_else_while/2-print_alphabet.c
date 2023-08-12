#include<stdio.h>
/**
 *main - main entry point
 *Description - prints alphabets in lower
 *case followed by a new line.
 *Return: -always zero for success
 */
int main(void)
{
	int x = 97;

while (x <= 122)
{
	putchar (x);
	x++;
}
putchar('\n');
return (0);
}
