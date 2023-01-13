

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
    post=(a++)+(b++);
    printf("Addition of A & B after post increment %f\n",post);
    pre=(++tempa)+(++tempb);
    printf("Addition of A & B after pre increment %f\n",pre);

    return 0;
}
