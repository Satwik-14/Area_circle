#include <stdio.h>
#include <math.h>

int main() {

        
    float p,r,t,ci,amt;
    printf("Enter Principal : ");
    scanf("%f",&p);
    printf("Enter Rate : ");
    scanf("%f",&r);
    printf("Enter Time : ");
    scanf("%f",&t);
    amt=p* (pow((1 + r / 100), t));
    ci=amt-p;
    printf("THE COMPOUND INTEREST IS : %f",ci);

    return 0;
}
