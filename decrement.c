#include <stdio.h>

int main()
{
    float a,b,pre,post,tempa,tempb;
    printf("Enter The Value Of A :");
    scanf("%f",&tempa);
    printf("Enter The Value Of B :");
    scanf("%f",&tempb);
    a=tempa;
    b=tempb;
    post=(a--)*(b--);
    printf("Product of A & B after post decrement %f\n",post);
    pre=(--tempa)*(--tempb);
    printf("Product of A & B after pre decrement %f\n",pre);

    return 0;
}
