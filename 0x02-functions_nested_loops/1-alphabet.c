#include "main.h"
#include "stdio.h"
/**
 * print_alphabet - a function to print alphabet in lowecase using putchar only twice 
 *
 * return : void 
**/

void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
