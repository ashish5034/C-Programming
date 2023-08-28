//ex 2
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
         for(j=1;j<=5;j++)
         {
             printf("I:%d\t J:%d\t",i,j);
         }
         for(k=1;k<=3;k++)
         {
             printf("K:%d\t",k);
         }
         printf("\n");
    }
    return 0;
}
