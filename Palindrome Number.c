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
  int n,temp=0, r = 0, new = 0;
  printf ("Enter A Number To Reverse It : ");
  scanf ("%d", &n);
  temp=n;
  while (n != 0)
    {
      r = n % 10;
      new = new * 10 + r;
      n /= 10;
    }
  if (temp == new)
    {
      printf ("Its A Palindrome Number (%d)",new);
    }
  else
    {
      printf ("Its Not A Palindrome Number (%d)",new);
    }

  return 0;
}
