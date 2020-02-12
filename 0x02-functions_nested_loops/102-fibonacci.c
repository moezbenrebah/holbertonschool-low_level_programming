#include <stdio.h>

int main(void)
{
  long long int a, b, x;
  int i;
  a = 1;
  b = 2;

  printf("%lld, ", a);
  printf("%lld, ", b);

  for (i = 2; i <= 50; i++)
    {
      x = a + b;
      a = b;
      b = x;
      if (i < 50)
	printf("%lli, ", x);
    }
  printf("\n");
    }
