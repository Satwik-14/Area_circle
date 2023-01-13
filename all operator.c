#include <stdio.h>
int main()
{
    //All Operator Programs
    //Swap Using Assignment Operator
    int a,b,temp;
    printf("Enter Two Numbers To Swap Using Assignment Operator");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("New Values Of A(%d) & B(%d) ",a,b);
    
    //Swap Using Arithmetic Operator
    int c,d;
    printf("Enter Two Numbers To Swap Using Assignment Operator");
    scanf("%d %d",&c,&d);
    
    c=c+d;
    d=c-d;
    c=c+d;
    printf("New Values Of C(%d) & D(%d) ",c,d);
    
    //Swap Using Bitwise Operator
    int e,f;
    printf("Enter Two Numbers To Swap Using Assignment Operator");
    scanf("%d %d",&e,&f);
    
    e=e^f;
    f=e^f;
    e=e^f;
    printf("New Values Of E(%d) & F(%d) ",e,f);

    //Find Lowest Marks Of Three Students
    int m1,m2,m3;
    printf("Enter Marks Of 3 students one by one");
    scanf("%d %d %d",&m1, &m2, &m3);

    if(m1<m2 && m1<m3)
    {
        printf("1st student has Got Lowest Marks",m1);
    }
    else if(m2<m1 && m2<m3)
    {
        printf("2nd student has Got Lowest Marks",m2);
    }
    else
    {
        printf("3rd student has Got Lowest Marks",m3);
    }
    
}