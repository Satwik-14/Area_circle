
#include <math.h>
#include <stdio.h>

int main()
{
    float a1,a2,a3,rad;
    printf("ENTER THE FIRST ANGLE OF TRIANGLE : ");
    scanf("%f",&a1);
    printf("ENTER THE SECOND ANGLE OF TRIANGLE : ");
    scanf("%f",&a2);
    a3=180-(a1+a2);
    
    printf("THE THIRD ANGLE OF THE TRIANGLE IS : %f\n",a3);
    
    rad=a3*(3.14/180);
    rad=rad/3.14;
    printf("THE ANGLES IN RADIANS %f π ",rad);
    return 0;
}
