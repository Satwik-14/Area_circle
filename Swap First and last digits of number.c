/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int n,l,d,f,new=0;
    printf("Enter A Number To Swap Their First And Last Digits : ");
    scanf("%d",&n); 
    l=n%10;
    d=log10(n);
    f=n/pow(10,d);
    new=l*pow(10,d);
    new=new+n%((int)pow(10,d));
    new-=l;
    new+=f;
    printf("New Number After Swapping Of First And Last Digit Is : %d ",new);

    return 0;
}
