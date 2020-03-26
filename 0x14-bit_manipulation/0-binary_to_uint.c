#include "holberton.h"

/**
 *binary_to_uint - function to convert binary to integer
 *@b: pointer to string
 *
 *Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int uint;
int i;
uint = i = 0;

if (b == NULL)
return (0);

while (b[i] != '\0')
{
if (b[i] == '0' || b[i] == '1')
i++;
else
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
uint = uint << 1;
if (b[i] == '1')
{
uint += 1;
}
}
return (uint);
}
