
#include <stdio.h>

int main()
{
    char a;
    int b;
    printf("Enter A character : ");
    scanf("%c",&a);
    b=a;
    if(b>=65 && b<=91)
    {
        printf("Its An Capital Alphabet (%c)",a);
    }
    else if(b>=97 && b<=122 )
    {
        printf("Its An Small Alphabet (%c)",a);
    }
    else if(b>=48 && b<=57)
    {
        printf("Its A Digit (%c)",a);
    }
    else
    {
        printf("Its A Special Character %c",a);
    }
    

    return 0;
}

