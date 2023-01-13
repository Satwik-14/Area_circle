#include <stdio.h>

int main()
{
    float a,b,x,x1,y,y1,tempa,tempb;
    
    printf("Enter The Value Of A :");
    scanf("%f",&tempa);
    printf("Enter The Value Of B :");
    scanf("%f",&tempb);
    
    a=tempa;
    b=tempb;
    x=5*(a--);
    y=10*(--b);
    
    printf("Value Of expression post decrement of 'A' %f\n",x);
    printf("Value Of expression pre decrement of 'B' %f\n",y);
    
    x1=5*(tempa++);
    y1=10*(++tempb);
    
    printf("Value Of expression post increment of 'A' %f\n",x1);
    printf("Value Of expression pre increment of 'B' %f\n",y1);

    return 0;
}
