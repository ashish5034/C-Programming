//EXAMPLE 1

#include<stdio.h>
int main()
{
    int i=1,j=1;
    while(i<=3)
    {
        j=1;
        while(j<=3)
        {
            printf("%d\t",i+j);
            j=j+1;

        }
            i=i+1;
    }
    return 0;
}
