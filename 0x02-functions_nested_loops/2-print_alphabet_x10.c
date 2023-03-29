#include "main.h"
#include "stdio.h"
/**
 * print_alphabet - a function to print alphabet
 * in lowecase using putchar only twice 
 *
 * return : void 
**/

void print_alphabet_x10(void)
{
	char i;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
