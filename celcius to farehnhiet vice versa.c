#include <stdio.h>

int main()
{ 
    float c,f,f1,c1;
    
    printf("ENTER THE TEMPRATURE IN CELCIUS TO CONVERT INTO FAHRENHEIT: ");
    scanf("%f",&c);
    
    f1=(c*9/5)+32;
    printf("CONVERTED TEMPRATURE IN FAHRENHEIT: %f \n",f1);
    
    printf("ENTER THE TEMPRATURE IN FAHRENHEIT TO CONVERT INTO CELCIUS: ");
    scanf("%f",&f);
    
    c1=(f-32)*5/9;
    printf("CONVERTED TEMPRATURE IN CELCIUS: %f \n",c1);
    

    
}