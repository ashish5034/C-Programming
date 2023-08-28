#include<stdio.h>
void getNatural(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d\n",i);
}
int main()
{
    int x;
    printf("Enter number=");
    scanf("%d",&x);
    getNatural(x);
}
