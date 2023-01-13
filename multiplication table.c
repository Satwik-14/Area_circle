

#include <stdio.h>

int main()
{
    int i,a;
    printf("ENTER THE NUMBER YOU WANT THE MULTIPLICATION TABLE OF : ");
    scanf("%d",&a);
    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d \n",a,i,a*i);
    }

    return 0;
}
