#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=6-i;j++)
            {
                if(i==1||j==1||i==5||i==4)
                {
                    printf("*");
                }
               else
              {
                    printf(" ");
                }
            }
            printf("\n");
            }
    return 0;
}

