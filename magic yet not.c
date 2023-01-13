/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,d,sum=0;
    printf("Enter A Number");
    scanf("%d",&a);
    while(a>9)
    {
        while(a>0)
        {
            d=a%10;
            sum+=d;
            a=a/10;
            
        }
        a=sum;
        sum=0;
    }
    if(a==1)
    {
        printf("Its The Same yk");
    }
    else
    {
        printf("Its Not The Same Yk");
    }

    return 0;
}
