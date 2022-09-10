#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is the main function
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if  (l > 5)
	{
		printf("%d is %d positive\n", n, l);
	}
	else if (l == 0)
	{
		printf("%d is %d zero\n", n, l);
	}
	else (l < 5)
	{
		printf("%d is %d less negaative\n", n, l);
	}
	return (0);
}

