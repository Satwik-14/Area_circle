/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,sum=0;
    float avg;
    for(i=1;i<=10;i++)
    {
        printf("Enter %dst Number : ",i);
        scanf("%d",&n);
        sum+=n;
    }
    avg=sum/10.0;
    
    printf("The Sum Of Given 10 Numbers Is : %d \n",sum);
    printf("The Average Of Given 10 Numbers Is : %f",avg);
    return 0;
}
