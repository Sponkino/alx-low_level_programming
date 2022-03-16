#include "main.h"
/**
* main - Entry point
* write a program tha prints alpahbets, followed by a new line.
* Return: Always (Success)
*/
int main(void)
{
	int i;
	void print_alphabet();

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
return (0);
}
