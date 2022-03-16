#include "main.h"
/**
* main - Entry point
* write a program tha prints alpahbets, followed by a new line.
* Return: Always (Success)
*/
void print_alphabet(void)
{	
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
