

#include <stdio.h>

int main()
{
    int a,b;
    printf("Swaping Two Numbers \n");
    printf("Enter 1st Number In 'A' To Get Swapped : ");
    scanf("%d",&a);
    printf("Enter 2nd Number In 'B' To Get Swapped : ");
    scanf("%d",&b);
    printf("A(%d) & B(%d) Before Swaping \n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("A(%d) & B(%d) After Swaping \n",a,b);

    return 0;
}
