
#include <math.h>
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("ENTER BASE:");
    scanf("%d",&a);
    printf("ENTER POWER:");
    scanf("%d",&b);
    c=pow(a,b);
    printf("THE VALUE IS %d",c);

    return 0;
}
