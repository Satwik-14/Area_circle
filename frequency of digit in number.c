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
  int n,a,d,c=0;
  int temp=0;
  printf ("Enter A Number : ");
  scanf ("%d", &n);
  printf("Enter A digit you want to check frequency of : ");
  scanf("%d",&d);
  temp=n;
  while (n != 0)
  {
      a=n%10;
      if(a==d)
      {
          c++;
      }
      n/=10;
  }
  printf("The Frequency of %d in number(%d) is : %d",d,temp,c);

  return 0;
}
