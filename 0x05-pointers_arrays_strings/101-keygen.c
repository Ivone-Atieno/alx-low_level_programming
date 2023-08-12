#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - main entry point
 *Return: 0 for success
 */
int main(void)
{
int a, b, sum = 0;
int pw[100];

srand(time(NULL));

for (a = 0; a < 100; a++)
{
	pw[a] = rand() % 78;
	sum += (pw[a] + '0');
	putchar(pw[a] + '0');
	if ((2772 - sum) - '0' < 78)
	{
		b = 2772 - sum - '0';
		sum += b;
		putchar(b + '0');
		break;
	}
}
putchar(10);
return (0);
}
