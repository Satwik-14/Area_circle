/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,c=0;
    printf("Enter The Number You Want To Check As Prime Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("%d Is A Prime Number",n);
    }
    else
    {
        printf("%d Is Not A Prime Number",n);
    }

    return 0;
}
