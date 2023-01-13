#include<stdio.h>
int main()
{
   /*
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
    return 0;*/
    int num[100],size,i;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("\n");
    printf("The array is of %d elements \n",size);
    printf("\n");
    for(i=1;i<size+1;i++)
    {
        printf("Enter the element : ");
        scanf("%d",&num[i]);
    }
    //ORIGINAL ORDER
    for(i=1;i<size+1;i++)
    {
    printf("%d  ",num[i]);
    }
    printf("\n");
    //REVERSE ORDER 
    for(i=size;i>0;i--)
    {
        printf("%d  ",num[i]);
    }

}