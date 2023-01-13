#include <stdio.h>

int main()
{ 
    float t,far;
    
    printf("ENTER THE TEMPRATURE IN CELCIUS : ");
    scanf("%f",&t);
    
    far=(t*9/5)+32;
    
    printf("CONVERTED TEMPRATURE IN FAHRENHEIT: %f \n",far);
    

    
}