#include<stdio.h>
int main()
{
 int a,n,i;
 printf("Enter a number : ");
 scanf("%d",&a);
printf("The multiplication table of %d is ",a);
 for (i = 1;i < 10; i++)
 printf("%d X %d : %d\n",a,i,(i)*a);
}
