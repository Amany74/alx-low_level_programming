#include "main.h"
#include "stdio.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
/**
 * print_alphabet - a function to print alphabet in lowecase using putchar only twice 
 *
 * return - void 
 * */
void print_alphabet()
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
