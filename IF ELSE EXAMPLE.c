
#include <stdio.h>

int main()
{
    int age;
    float h,w;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("Enter Your Height : ");
        scanf("%f",&h);
        printf("Enter Your Weight : ");
        scanf("%f",&w);
        
        if(h>=5.5 && w>=65)
        {
            printf("CONGRATS YOU ARE ELIGIBLE FOR NCC !");
        }
        else
        {
            printf("SORRY YOU ARE NOT ELIGIBLE FOR NCC !");
        }
    }
    else
    {
        printf("SORRY YOU ARE BELOW 18 !");
    }

    return 0;
}
