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
  int count=0;
  printf ("Enter A Number : ");
  scanf ("%d", &n);
  temp=n;
  while (n != 0)
  {
      count++;
      n/=10;
  }
  for(i=1;i<=count;i++)
  {
      while(temp!=0)
      {
          a=n%10;
          for(i=1;i<=9;i++)
          {
            for(j=)
            if(i==a)
            {
                
            }
            
          }
      }
  }
  printf("The Frequency of %d in number(%d) is : %d",d,temp,c);

  return 0;
}
