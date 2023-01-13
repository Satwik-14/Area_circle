/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main ()
{
  int i,a,b,max;
  printf ("Enter 1st Number To Find The LCM Of : ");
  scanf ("%d", &a);
  printf ("Enter 1st Number To Find The LCM Of : ");
  scanf ("%d", &b);
  max=(a>b)?a:b;
  while(1)
  {
      if((max%a==0)&& (max%b==0))
      {
          printf("LCM Of %d and %d Are : %d",a,b,max);
          break;
      }
      else
      {
          max++;
      }
  }

  return 0;
}
