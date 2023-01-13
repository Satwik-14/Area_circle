#include<stdio.h>
void main()
{
    int i,j,rows,coloumn;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of coloumns : ");
    scanf("%d",&coloumn);
    for(i=1;i<=rows;i++)
    {
        for (j =1;j<=coloumn;j++)
    {
        printf("*");
    }
    printf("\n");
    }
}