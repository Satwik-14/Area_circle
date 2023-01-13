
#include <stdio.h>

int main()
{
    int a,n;
    printf("Enter A Number To Get Converted In Binary Number");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%2;
        printf("%d",a);
        n=n/2;
    }
    

    return 0;
}

