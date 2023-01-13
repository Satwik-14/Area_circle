
#include <stdio.h>
int main()
{
    int a;
    char c[20],e;
    float f;
    
    printf("ENTER A CHARACTER :\n");
    scanf("%c",&e);
    printf("OUTPUT OF THE GIVEN CHARACTER: %c \n",e);
    
    printf("ENTER A STRING :\n");
    scanf("%s",c);
    printf("OUTPUT OF THE GIVEN STRING: %s \n",c);
    
    printf("ENTER A INTEGER :");
    scanf("%d",&a);
    printf("OUTPUT OF THE GIVEN INTEGER: %d\n",a);
    
    printf("ENTER A  DECIMAL INTEGER: \n");
    scanf("%f",&f);
    printf("OUTPUT OF THE GIVEN DECIMAL INTEGER: %f\n",f);
    
    
    

    return 0;
}
