
#include <stdio.h>

int main()
{ 
    int a,b,c,d;
    
    
    printf("Enter the length of the rectangle:");
    
    scanf("%d",&a );

    printf("Enter the width of rectangle:");

    scanf("%d",&b);
    
    c=2*(a+b);
    d=a*b;

    printf("the perimeter of rectangle is %d",c);
    printf("the area of rectangle is %d",d);

    return 0;
}
