/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,c=0;
    printf("Enter A Number To know The No. Of Digits In It");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    printf("No. Of Digits In The Given Number Is : %d ",c);

    return 0;
}
