
#include <stdio.h>

int main()
{
    int n,a;
    printf("Enter A number To get absolute Value Of It ");
    scanf("%d",&n);
    if (n<0)
    {
        a=(-1)*n;
        printf("THE ABSOLUTE VALUE OF %d IS %d",n,a);
    }
    else
    {
        printf("THE ABSOLUTE VALUE OF %d IS %d",n,n);
    }

    return 0;
}
