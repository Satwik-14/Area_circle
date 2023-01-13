
#include <stdio.h>

int main()
{
    float phy,che,maths;
    printf("Check Your Eligibility Here For The Admission In Professional Course \n");
    printf("Enter Marks Of Maths : ");
    scanf("%f",&maths);
    printf("Enter Marks Of Physics : ");
    scanf("%f",&phy);
    printf("Enter Marks Of Chemistry : ");
    scanf("%f",&che);
    if((phy+che+maths)<180 || maths<65 || phy<55 || che<50)
    {
        printf("SORRY! YOU ARE NOT ELIGIBLE FOR THE COURSE ");
    }
    
    else
    {
        printf("CONGRATS! YOU ARE ELIGIBLE FOR THE COURSE ");
    }

    return 0;
}
