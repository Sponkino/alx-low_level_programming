#include "main.h"
/**
* main - Entry point
* write a program tha prints _putchar, followed by a new line.
* Return: Always (Success)
*/
int main(void)
{
	int i;
	char msg[9] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(msg[i]);
	}
	_putchar('\n');
	return (0);
}
