#include<stdio.h>
int getGreat(int x[3],int y[3])
{
     for(int i=0;i<3;i++)
     {
         if(((x[i]>y[i])||(x[i+1]>y[i+1])||(x[i+2]>y[i+2])))
            return 1;
         else
            return 0;

     }

}
int main()
{
    int i,j;
    int a[3][3];
    int b[3][3];

    printf("ARRAY element");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
printf("ARRAY 2 element");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
        int s=getGreat(a,b);
        if(s==1)
            printf("Array 1 is great");
        else if(s==0)
            printf("Array 2 is great");
    }


