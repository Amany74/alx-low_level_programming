#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("is zero");	
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	else{
		printf("is positive");
	}

	return (0);
}

