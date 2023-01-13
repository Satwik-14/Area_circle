
#include <math.h>
#include <stdio.h>

int main()
{
    float a,s, s1;
    
    printf("ENTER THE NUMBER TO FIND SQUARE ROOT OF IT : ");
    scanf("%f",&a);

    s1=pow(2, 0.5 * log2(a));
    s=sqrt(a);
    
    printf("THE VALUE IS %f",s);
    printf("THE VALUE WITHOUT FUNCTION IS %f",s1);

    return 0;
}
