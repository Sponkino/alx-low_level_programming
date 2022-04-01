#include <string.h>

/**
 * _memset - this function fills the first n bytes of the memory area
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);

return (s);
}
