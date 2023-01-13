/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main ()
{
  int i,a,b,hcf;
  printf ("Enter 1st Number To Find The HCF Of : ");
  scanf ("%d", &a);
  printf ("Enter 1st Number To Find The HCF Of : ");
  scanf ("%d", &b);
  for(i=1; i<=a || i<=b;i++)
  {
      if(a%i==0 && b%i==0)
      {
          hcf=i;
      }
  }
  printf("Highest Common Divisor Of %d and %d is %d ",a,b,hcf);

  return 0;
}
