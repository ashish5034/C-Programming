//Ex5
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            for(k=1;k<=3;k++)
            {
                printf("%d\t%d\t%d\t",i,j,k);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
