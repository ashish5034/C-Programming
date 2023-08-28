//c program to accept a matrix of order m*n and find the sum of each row and column
#include<stdio.h>
void printMatrix(int a[][2],int b[][2])
{
     printf("\n first matrix is :\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n  2nd matrix is:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
     printf("********************************************************************");

}
void sumRowColumn(int a[][2],int b[][2])
{
    printf("\n sum of matrix is:\n");
    int sum;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum=a[i][j]+b[i][j];
            printf("%d ",sum);
        }
           printf("\n");
    }

}
int main()
{
    int i,j,arr1[2][2],arr2[2][2];
    printf("\nEnter the 1st matrix=\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n enter 2nd matrix=\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }


    }

    printf("\n *********************************************************************");

   /* printf("\n first matrix is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n  2nd matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");

    }
    */
 printMatrix(arr1,arr2);
    sumRowColumn(arr1,arr2);


}
