#include <stdio.h>

void positive_or_negative(int n)
{
  if(n>0)
    {
      printf("%d is negative\n",n);
    }
  if(n == 0)
    {
      printf("%d is zero\n",n);
    }
  if(n<0)
    {
      printf("%d is negative\n",n);
    }
}
