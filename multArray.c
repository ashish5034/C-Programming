#include<stdio.h>
void printArray(int b[][3])
{
 for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            printf("  %d  ",b[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter no-");
            scanf("%d",&arr[i][j]);
        }
    }
    printArray(arr);
}
