#include <math.h>
#include <stdio.h>

int main()
{
    int a,n,i=0,sum=0;
    printf("Enter A Binary Number To Get Converted In Decimal Number");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        sum=sum+(a*pow(2,i));
        n=n/10;
        i++;

    }
    printf("%d",sum);

    return 0;
}

