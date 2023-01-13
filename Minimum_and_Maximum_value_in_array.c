#include<stdio.h>
int main()
{
int num[10000],i,size,max,min;
    printf("Enter the size of array : \n");
    scanf("%d",&size);
    for(i=0;i<size;i++) 
    {
        printf("Enter the %d Element of array  : ",i);
        scanf("%d",&num[i]);
    }
    max = num[0];
    for(i = 0;i < size;i++)
    {
        if(num[i]>max)
        {
            max = num[i];
        }
    }
    printf("The maximum value of array is : %d\n",max);
    //for minimum value
    min = num[0];
    for(i=0;i < size;i++)
    {
        if (num[i]<min)
        {
            min = num[i];
        }
        
    }
    printf("The minimum value of array is : %d",min);   
    return 0;
}