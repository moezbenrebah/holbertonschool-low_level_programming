#include "holberton.h"
#include <ctype.h>

int _isupper(int c)
{
  int a = 0;
  
  if (c >= 65 && c <= 90)
    a = 1;
  return (a);
}
