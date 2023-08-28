//print all even no between 1 - n number using for
#include<stdio.h>
int main()
{
    int i,n;
    printf("ENTER");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
