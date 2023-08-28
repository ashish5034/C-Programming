//EXAMPLE2
#include<stdio.h>
int main()

{
    int i=1,j=1,k=1;
    while(i<=3)
    {
        j=1;
        while(j<=3)
        {
            printf("%d",j);
            j=j+1;
        }
        k=1;
        while(k<=3)
        {
            printf("%d",k);
            k=k+1;
        }
        printf("\n");
    }
    return 0;
}
