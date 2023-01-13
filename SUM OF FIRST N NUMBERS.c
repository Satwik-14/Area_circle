/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,sum=0; 
    printf("Enter The Value Of N Till YouWant To Sum Up : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    
    printf("The Sum Of First N(%d) Natural Number Is %d",n,sum);
    return 0;
}
