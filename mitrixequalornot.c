#include<stdio.h>
int equalMatrix(int x[3][3],int y[3][3])
{
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(x[i][j]==y[i][j])

            return 1;
        else
            return 0;
    }
}

}
int main()
{
    int i,j,arr[3][3],arr2[3][3];
    printf("\nEnter the 1st matrix=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\n",&arr[i][j]);
        }
    }
    printf("\n enter 2nd matrix=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\n",&arr2[i][j]);
        }

    }
int res=equalMatrix(arr,arr2);
if(res==1)
    printf("\n Matrix are equal");
else

    printf("\n Matrix are not equal");

}
