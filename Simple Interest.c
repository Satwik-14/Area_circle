#include <stdio.h>

int main() {

        
    float p,r,t;
    printf("Enter Principal");
    scanf("%f",p);
    printf("Enter Rate");
    scanf("%f",r);
    printf("Enter Time");
    scanf("%f",t);
    printf("THE SIMPLE INTEREST IS:%f",(p*r*t)/100.0);

    return 0;
}