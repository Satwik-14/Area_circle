/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int
main ()
{
  int n,temp=0, r = 0, sum = 0;
  printf ("Enter A Number To Check As A Armstrong Number : ");
  scanf ("%d", &n);
  temp=n;
  while (n != 0)
    {
      r = n % 10;
      sum+=(r*r*r);
      n /= 10;
    }
  if (temp == sum)
    {
      printf ("(%d) Is A Armstrong Number.",temp);
    }
  else
    {
      printf ("(%d) Is Not A Armstrong Number.",temp);
    }

  return 0;
}
