#include <stdio.h>

int main()
{ 
    float cm,m,km;
    
    printf("ENTER THE LENGTH IN cm : ");
    scanf("%f",&cm);
    
    m=cm/100;
    km=m/1000;
    
    printf("CONVERTED LENGTH IN METRE IS : %f \n",m);
    
    printf("CONVERTED LENGTH IN KILO-METRE IS :  %f",km);
    

    
}