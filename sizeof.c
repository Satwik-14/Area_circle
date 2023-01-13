
#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    a=sizeof(int);
    printf("THE SIZE IN 'BYTES' OF INTEGER DATA TYPE IS %d\n",a);
    b=sizeof(float);
    printf("THE SIZE IN 'BYTES' OF FLOAT DATA TYPE IS %d\n",b);
    c=sizeof(double);
    printf("THE SIZE IN 'BYTES' OF DOUBLE DATA TYPE IS %d\n",c);
    d=sizeof(char);
    printf("THE SIZE IN 'BYTES' OF CHAR DATA TYPE IS %d\n",d);
    e=sizeof(void);
    printf("THE SIZE IN 'BYTES' OF VOID DATA TYPE IS %d\n",e);
    f=sizeof(long long);
    printf("THE SIZE IN 'BYTES' OF 'LONG-LONG' DATA TYPE IS %d\n",f);

    return 0;
}
