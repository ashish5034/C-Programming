#include<stdio.h>
int main()
{
    int i,j,sp;
    for(i=1;i<=5;i++)
    {
        for(sp=1;sp<=6-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=5;j++)
        {
            if(i==1||j==1||i==5||j==5)
            {
            printf("*");
        }
        else
        printf(" ");
        }
        printf("\n");
    }
    return 0;
}
