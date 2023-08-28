//odd even out of n numbers
#include<stdio.h>
void even(int no)
{
    printf("Even number out of n number are\n");
    for(int i=0;i<=no;i++)
    {
        if(i%2==0)

            printf("   %d\n",i);
}
}
void odd(int no)
{
    printf("ODD number out of n number are\n");
    for(int i=0;i<=no;i++)
    {
        if(i%2==1)

            printf("   %d\n",i);
}
}
int main()
{
    int n;
    printf("Enter Number-");
    scanf("%d",&n);
    even(n);
    odd(n);
}
