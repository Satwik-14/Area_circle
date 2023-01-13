/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main ()
{
  int i,n,f=0;
  printf ("Enter A Number : ");
  scanf ("%d", &n);
  for(i=1;i<=n;i++)
  {
      if((n%i)==0)
      {
          printf("%d is a factor of %d \n",i,n);
          f++;
      }
  }
  printf("Total Number Of Factors Of the Given Number %d",f);
  

  return 0;
}
