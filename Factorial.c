/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main ()
{
  int i,n,f=1,temp=0;
  printf ("Enter A Number : ");
  scanf ("%d", &n);
  temp=n;
  for(i=1;i<=n;i++)
  {
      f*=i;
  }
  printf("Factorial Of %d is %d ",n,f);

  return 0;
}
